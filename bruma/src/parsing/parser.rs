#![deny(unused_must_use)]

use std::ops::Range;

use ahash::AHashMap;
use colored::Colorize;
use logos::{Lexer, Logos};

use crate::{
    lexing::lexer::{BasedLexer, Token},
    parsing::ast::{Argument, BaseType, Member, Method, Modifiers, RefType, Type, SPECIAL},
};

use super::ast::{Addresses, BromaData, Class, SpecialMethod, SpecialType};

#[derive(Clone)]
pub(crate) struct Parser<'a> {
    lexer: Lexer<'a, Token>,
}

#[derive(Debug)]
pub enum ParseError {
    SyntaxError { msg: String, span: Range<usize> },
    ReadError,
}

pub type ParseResult<T> = Result<T, ParseError>;

pub fn unexpected_err_str(found: Token, exp: &str) -> String {
    // let bt = Backtrace::new();

    // println!("{:?}", bt);

    format!("expected `{}`, found `{}`", exp, found.to_str())
}

#[macro_export]
macro_rules! list_helper {
    ($self:ident, $closing_tok:ident $code:block) => {
        while !$self.next_is(Token::$closing_tok) {
            $code;
            if !$self.skip_tok(Token::Comma) {
                break;
            }
        }
        $self.expect_tok(Token::$closing_tok)?;
    };

    ($self:ident, $first:ident, $closing_tok:ident $code:block) => {
        let mut $first = true;
        while !$self.next_is(Token::$closing_tok) {
            $code;
            $first = false;
            if !$self.skip_tok(Token::Comma) {
                break;
            }
        }
        $self.expect_tok(Token::$closing_tok)?;
    };
}

impl<'a> Parser<'a> {
    pub fn new(code: &'a str) -> Self {
        let lexer = Token::lexer(code);
        Parser { lexer }
    }

    pub fn next(&mut self) -> Token {
        self.lexer.next_or_eof()
    }

    pub fn span(&self) -> Range<usize> {
        self.lexer.span()
    }
    pub fn slice(&self) -> &str {
        self.lexer.slice()
    }

    pub fn peek(&self) -> Token {
        let mut peek = self.lexer.clone();
        peek.next_or_eof()
    }
    pub fn peek_slice(&self) -> String {
        let mut peek = self.lexer.clone();
        peek.next_or_eof();
        peek.slice().into()
    }

    pub fn next_is(&self, tok: Token) -> bool {
        self.peek() == tok
    }
    pub fn next_are(&self, toks: &[Token]) -> bool {
        let mut peek = self.lexer.clone();
        for tok in toks {
            if peek.next_or_eof() != *tok {
                return false;
            }
        }
        true
    }
    pub fn skip_tok(&mut self, skip: Token) -> bool {
        if self.next_is(skip) {
            self.next();
            true
        } else {
            false
        }
    }

    pub fn expect_tok_named(&mut self, expect: Token, name: &str) -> ParseResult<()> {
        let next = self.next();
        if next != expect {
            return Err(ParseError::SyntaxError {
                msg: unexpected_err_str(next, name),
                span: self.span(),
            });
        }
        Ok(())
    }

    pub fn expect_tok(&mut self, expect: Token) -> ParseResult<()> {
        self.expect_tok_named(expect, expect.to_str())
    }

    pub fn parse_path(&mut self) -> ParseResult<String> {
        let mut name = String::new();

        loop {
            self.expect_tok(Token::Ident)?;
            name += self.slice();

            if !self.skip_tok(Token::DoubleColon) {
                break Ok(name);
            }
            name += "::";
        }
    }

    pub fn parse_uint(&mut self) -> ParseResult<u64> {
        self.expect_tok(Token::Int)?;
        let s = self.slice();

        if s.len() >= 2 && &s[0..2] == "0x" {
            Ok(u64::from_str_radix(&s[2..], 16).unwrap())
        } else {
            Ok(s.parse::<u64>().unwrap())
        }
    }

    pub fn parse_special_type(&mut self, typ: &str) -> ParseResult<SpecialType> {
        match typ {
            "std::array" => {
                self.expect_tok(Token::LAngle)?;
                let ty = self.parse_type()?;
                self.expect_tok(Token::Comma)?;
                let size = self.parse_uint()?;
                self.expect_tok(Token::RAngle)?;

                Ok(SpecialType::STDArray {
                    typ: Box::new(ty),
                    size,
                })
            }
            "gd::map" => {
                self.expect_tok(Token::LAngle)?;
                let key = self.parse_type()?;
                self.expect_tok(Token::Comma)?;
                let value = self.parse_type()?;
                self.expect_tok(Token::RAngle)?;

                Ok(SpecialType::GDMap {
                    key: Box::new(key),
                    value: Box::new(value),
                })
            }
            "gd::vector" | "std::vector" => {
                self.expect_tok(Token::LAngle)?;
                let ty = self.parse_type()?;
                self.expect_tok(Token::RAngle)?;

                Ok(SpecialType::Vector(Box::new(ty)))
            }
            "gd::string" => Ok(SpecialType::GDString),
            _ => unreachable!(),
        }
    }

    pub fn parse_type(&mut self) -> ParseResult<Type> {
        let mut is_const = false;
        let mut is_unsigned = false;

        if self.skip_tok(Token::Const) {
            is_const = true;
        }

        if self.skip_tok(Token::Unsigned) {
            is_unsigned = true;
        }

        let typ_name = self.parse_path()?;

        let base = if SPECIAL.contains(&&*typ_name) {
            BaseType::Special(self.parse_special_type(&typ_name)?)
        } else {
            BaseType::Raw(typ_name)
        };

        if self.skip_tok(Token::Const) {
            is_const = true;
        }
        let mut ref_types = vec![];

        loop {
            let ref_type = match self.peek() {
                Token::Ref => RefType::Ref,
                Token::Asterisk => RefType::Pointer,
                _ => break,
            };
            self.next();

            ref_types.push(ref_type)
        }

        Ok(Type {
            base,
            is_const,
            unsigned: is_unsigned,
            ref_types,
        })
    }

    pub fn parse_addresses(&mut self) -> ParseResult<Addresses> {
        let mut addr = Addresses::default();

        loop {
            let to_modify = match self.next() {
                Token::Win => &mut addr.win,
                Token::Mac => &mut addr.mac,
                Token::Ios => &mut addr.ios,
                Token::Android => &mut addr.android,
                t => {
                    println!("{:?}", t);
                    println!("{:?}", self.slice() == "ios");
                    return Err(ParseError::SyntaxError {
                        msg: unexpected_err_str(t, "platform"),
                        span: self.span(),
                    });
                }
            };
            let n = self.parse_uint()?;
            *to_modify = Some(n);

            if !self.skip_tok(Token::Comma) {
                break Ok(addr);
            }
        }
    }

    pub fn parse_class(&mut self) -> ParseResult<(String, Class)> {
        let mut extends = vec![];
        let mut depends = vec![];

        if self.skip_tok(Token::LSqBracket2) {
            if self.skip_tok(Token::Depends) {
                self.expect_tok(Token::LParen)?;
                self.expect_tok(Token::Ident)?;
                depends.push(self.slice().to_string());
                self.expect_tok(Token::RParen)?;
                self.expect_tok(Token::RSqBracket2)?;
            } else {
                while self.next() != Token::RSqBracket2 {}
            }
        }

        self.expect_tok(Token::Class)?;

        let name = self.parse_path()?;

        if self.skip_tok(Token::Colon) {
            loop {
                extends.push(self.parse_path()?);
                if !self.skip_tok(Token::Comma) {
                    break;
                }
            }
        }

        self.expect_tok(Token::LBracket)?;

        let mut methods = vec![];
        let mut members = vec![];

        let mut constructor = None;
        let mut destructor = None;

        while !self.next_is(Token::RBracket) {
            if self.skip_tok(Token::LSqBracket2) {
                while self.next() != Token::RSqBracket2 {}
            }

            if self.skip_tok(Token::Padding) {
                let addr = if self.skip_tok(Token::Equals) {
                    self.parse_addresses()?
                } else {
                    Addresses::default()
                };
                self.expect_tok(Token::Semicolon)?;
                members.push(Member::Padding(addr));
                continue;
            }

            let mut modifiers = Modifiers::default();

            loop {
                match self.peek() {
                    Token::Virtual => {
                        self.next();
                        modifiers.is_virtual = true;
                    }
                    Token::Callback => {
                        self.next();
                        modifiers.is_callback = true;
                    }
                    Token::Static => {
                        self.next();
                        modifiers.is_static = true;
                    }
                    Token::Inline => {
                        self.next();
                        modifiers.is_inline = true;
                    }
                    _ => break,
                }
            }

            if self.next_are(&[Token::Ident, Token::LParen])
                && self.peek_slice() == name.split("::").last().unwrap()
            {
                self.next();
                self.expect_tok(Token::LParen)?;

                let (args, addr, default) = self.parse_func()?;
                constructor = Some(SpecialMethod {
                    modifiers,
                    args,
                    addresses: addr,
                    default,
                });
                continue;
            }
            if self.skip_tok(Token::Tilde) {
                self.expect_tok(Token::Ident)?;
                self.expect_tok(Token::LParen)?;

                let (args, addr, default) = self.parse_func()?;
                destructor = Some(SpecialMethod {
                    modifiers,
                    args,
                    addresses: addr,
                    default,
                });
                continue;
            }

            let typ = self.parse_type()?;
            self.expect_tok(Token::Ident)?;
            let name = self.slice().to_string();

            let is_func = if modifiers.any_true() {
                self.expect_tok(Token::LParen)?;
                true
            } else {
                self.skip_tok(Token::LParen)
            };

            if is_func {
                let (args, addr, _default) = self.parse_func()?;

                methods.push(Method {
                    modifiers,
                    name,
                    args,
                    return_type: typ,
                    addresses: addr,
                });
            } else {
                self.expect_tok(Token::Semicolon)?;
                members.push(Member::Member { typ, name });
            }
        }
        self.expect_tok(Token::RBracket)?;

        Ok((
            name,
            Class {
                extends,
                depends,
                members,
                methods,
                constructor,
                destructor,
            },
        ))
    }

    fn parse_func(&mut self) -> ParseResult<(Vec<Argument>, Addresses, bool)> {
        let mut args = vec![];
        let mut default = false;

        list_helper!(self, RParen {
            let typ = self.parse_type()?;
            let name = if !matches!(self.peek(), Token::Comma | Token::RParen) {

                match self.next() {
                    Token::Ident => Some(self.slice().to_string()),
                    Token::Callback => Some("callback".into()),
                    t => return Err(ParseError::SyntaxError { msg: unexpected_err_str(t, "fuck you (variable name)"), span: self.span() }),
                }
            } else {
                None
            };

            args.push(Argument { typ, name })
        });

        if self.skip_tok(Token::Colon) {
            while !matches!(
                self.peek(),
                Token::LBracket | Token::Equals | Token::Semicolon
            ) {
                self.next();
            }
        }

        self.skip_tok(Token::Const);

        let has_body = if self.skip_tok(Token::LBracket) {
            let mut depth = 1usize;

            loop {
                let next = self.next();
                match next {
                    Token::LBracket => depth += 1,
                    Token::RBracket => depth -= 1,
                    Token::Eof => panic!("Bruh 🤨📸"),
                    _ => (),
                }
                if depth == 0 {
                    break;
                }
            }
            true
        } else {
            false
        };

        let addr = if self.skip_tok(Token::Equals) {
            if self.skip_tok(Token::Default) {
                default = true;
                Addresses::default()
            } else {
                self.parse_addresses()?
            }
        } else {
            Addresses::default()
        };

        if !has_body {
            self.expect_tok(Token::Semicolon)?;
        }
        // println!("stalpreftase");

        Ok((args, addr, default))
    }

    pub fn parse(&mut self) -> ParseResult<BromaData> {
        let mut classes = AHashMap::new();

        while !self.next_is(Token::Eof) {
            let (name, class) = self.parse_class()?;
            classes.insert(name, class);
        }

        Ok(BromaData(classes))
    }
}

impl ParseError {
    pub fn print_error(&self, code: &str) {
        let msg = match self {
            ParseError::SyntaxError { msg, .. } => msg,
            ParseError::ReadError => "Could not read file",
        };

        eprintln!(
            "\n{}{}",
            "Parse error: ".bright_red().bold(),
            msg.bright_yellow()
        );

        if let ParseError::SyntaxError { span, .. } = self {
            let start_line = code[0..span.start].matches('\n').count();
            let end_line = code[0..span.end].matches('\n').count() + 1;

            let pad = end_line.to_string().len();

            eprintln!("--------------------------------------------------------------");

            for (i, s) in code
                .lines()
                .enumerate()
                .skip(start_line)
                .take(end_line - start_line)
            {
                eprintln!("  {:>pad$}. {}", i + 1, s);
            }

            eprintln!("--------------------------------------------------------------\n");
        }
    }
}
