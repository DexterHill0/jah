use ahash::AHashMap;

pub const SPECIAL: &[&str] = &[
    "std::array",
    "std::vector",
    "gd::vector",
    "gd::string",
    "gd::map",
];

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub enum SpecialType {
    STDArray { typ: Box<Type>, size: u64 },
    Vector(Box<Type>),
    GDMap { key: Box<Type>, value: Box<Type> },
    GDString,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub enum BaseType {
    Raw(String),
    Special(SpecialType),
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub enum RefType {
    Ref,
    Pointer,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub struct Type {
    pub base: BaseType,
    pub is_const: bool,
    pub unsigned: bool,
    pub ref_types: Vec<RefType>,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub enum Member {
    Member { typ: Type, name: String },

    Padding(Addresses),
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub struct Argument {
    pub typ: Type,
    pub name: Option<String>,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone, Default)]
pub struct Addresses {
    pub win: Option<u64>,
    pub mac: Option<u64>,
    pub ios: Option<u64>,
    pub android: Option<u64>,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone, Default)]
pub struct Modifiers {
    pub is_virtual: bool,
    pub is_static: bool,
    pub is_inline: bool,
    pub is_callback: bool,
}

impl Modifiers {
    pub fn any_true(&self) -> bool {
        self.is_callback || self.is_inline || self.is_static || self.is_virtual
    }
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub struct Method {
    pub modifiers: Modifiers,
    pub name: String,
    pub args: Vec<Argument>,
    pub return_type: Type,
    pub addresses: Addresses,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub struct SpecialMethod {
    pub modifiers: Modifiers,
    pub args: Vec<Argument>,
    pub addresses: Addresses,
    pub default: bool,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub struct Class {
    pub extends: Vec<String>,
    pub depends: Vec<String>,

    pub members: Vec<Member>,
    pub methods: Vec<Method>,

    pub constructor: Option<SpecialMethod>,
    pub destructor: Option<SpecialMethod>,
}

#[cfg_attr(feature = "serde", derive(Serialize, Deserialize))]
#[derive(Debug, Clone)]
pub struct BromaData(pub AHashMap<String, Class>);

impl std::ops::Deref for BromaData {
    type Target = AHashMap<String, Class>;

    fn deref(&self) -> &Self::Target {
        &self.0
    }
}

impl std::ops::DerefMut for BromaData {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.0
    }
}
