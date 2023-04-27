use logos::{Lexer, Logos};

#[derive(Logos, Debug, PartialEq, Clone, Copy)]
#[logos(skip r#"[ \r\n\t\f]+|/\*[^*]*\*(([^/\*][^\*]*)?\*)*/|//[^\n]*"#)] // Ignore this regex pattern between tokens
pub enum Token {
    #[regex(r#"0x[0-9a-fA-F_]+|[0-9]+"#)]
    Int,

    #[token("class")]
    Class,
    #[token("virtual")]
    Virtual,
    #[token("static")]
    Static,
    #[token("inline")]
    Inline,
    #[token("callback")]
    Callback,
    #[token("const")]
    Const,
    #[token("struct")]
    Struct,
    #[token("unsigned")]
    Unsigned,
    #[token("default")]
    Default,
    #[token("depends")]
    Depends,

    #[token("win")]
    Win,
    #[token("mac")]
    Mac,
    #[token("ios")]
    Ios,
    #[token("android")]
    Android,

    #[token("PAD")]
    Padding,

    #[token("[[")]
    LSqBracket2,
    #[token("]]")]
    RSqBracket2,
    #[token("(")]
    LParen,
    #[token(")")]
    RParen,
    #[token("[")]
    LSqBracket,
    #[token("]")]
    RSqBracket,
    #[token("{")]
    LBracket,
    #[token("}")]
    RBracket,
    #[token("<")]
    LAngle,
    #[token(">")]
    RAngle,

    #[token("*")]
    Asterisk,
    #[token("&")]
    Ref,
    #[token("->")]
    Arrow,
    #[token("~")]
    Tilde,
    #[token("=")]
    Equals,

    #[token(",")]
    Comma,

    #[token(":")]
    Colon,
    #[token(";")]
    Semicolon,
    #[token("::")]
    DoubleColon,
    #[token(".")]
    Dot,

    #[regex(r"[a-zA-Z_][a-zA-Z_0-9]*")]
    Ident,

    Eof,
    Error,
}

pub trait BasedLexer {
    fn next_or_eof(&mut self) -> Token;
}

impl BasedLexer for Lexer<'_, Token> {
    fn next_or_eof(&mut self) -> Token {
        self.next()
            .map(|r| r.unwrap_or(Token::Error))
            .unwrap_or(Token::Eof)
    }
}

impl Token {
    pub fn to_str(self) -> &'static str {
        match self {
            Token::Int => "int literal",
            Token::Class => "class",
            Token::Virtual => "virtual",
            Token::Static => "static",
            Token::Inline => "inline",
            Token::Callback => "callback",
            Token::Const => "const",
            Token::Struct => "struct",
            Token::Unsigned => "unsigned",
            Token::Depends => "depends",
            Token::Default => "default",
            Token::Win => "win",
            Token::Mac => "mac",
            Token::Ios => "ios",
            Token::Android => "android",
            Token::Padding => "PAD",
            Token::LSqBracket2 => "[[",
            Token::RSqBracket2 => "]]",
            Token::LParen => "(",
            Token::RParen => ")",
            Token::LSqBracket => "[",
            Token::RSqBracket => "]",
            Token::LBracket => "{",
            Token::RBracket => "}",
            Token::LAngle => "<",
            Token::RAngle => ">",
            Token::Asterisk => "*",
            Token::Ref => "&",
            Token::Arrow => "->",
            Token::Tilde => "~",
            Token::Equals => "=",
            Token::Comma => ",",
            Token::Colon => ":",
            Token::Semicolon => ";",
            Token::DoubleColon => "::",
            Token::Dot => ".",
            Token::Ident => "identifier",
            Token::Eof => "end of file",
            Token::Error => "unknown",
        }
    }
}
