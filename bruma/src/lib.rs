pub(crate) mod lexing;
pub mod parsing;

use std::path::Path;

pub use parsing::ast::*;
use parsing::parser::{ParseError, Parser};

pub fn parse_file<T: AsRef<Path>>(file: T) -> Result<BromaData, (ParseError, String)> {
    let content =
        std::fs::read_to_string(file.as_ref()).map_err(|_| (ParseError::ReadError, "".into()))?;

    parse(&content).map_err(|err| (err, content))
}
pub fn parse_files_concat<T: AsRef<Path>>(files: &[T]) -> Result<BromaData, (ParseError, String)> {
    let mut content = String::new();
    for file in files {
        content += &std::fs::read_to_string(file.as_ref())
            .map_err(|_| (ParseError::ReadError, "".into()))?;
        content += "\n\n";
    }

    parse(&content).map_err(|err| (err, content))
}

pub fn parse<T: AsRef<str>>(code: T) -> Result<BromaData, ParseError> {
    let mut parser = Parser::new(code.as_ref());

    parser.parse()
}
