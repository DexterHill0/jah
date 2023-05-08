
#include "../include/cxx.h"

template <typename T>
void destroy(T *ptr) {
    ptr->~T();
}  

extern "C" {
    
#if __STDTY_MAP_U8 && __STDTY_MAP_U8

void stdtybridge$std$map$k$u8$v$u8$insert(
    std::map<std::uint8_t, std::uint8_t> *m, std::uint8_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$u8$v$u8$get_unchecked(
    std::map<std::uint8_t, std::uint8_t> *m, std::uint8_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint8_t &stdtybridge$std$map$k$u8$v$u8$get_unchecked_mut(
    std::map<std::uint8_t, std::uint8_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u8$v$u8$contains_key(
    std::map<std::uint8_t, std::uint8_t> *m, std::uint8_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint8_t &stdtybridge$std$map$k$u8$v$u8$key_by_index(
    std::map<std::uint8_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint8_t &stdtybridge$std$map$k$u8$v$u8$value_by_index(
    std::map<std::uint8_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u8$v$u8$len(
    std::map<std::uint8_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$u8$clear(
    std::map<std::uint8_t, std::uint8_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$u8$null(std::unique_ptr<std::map<std::uint8_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u8$raw(std::unique_ptr<std::map<std::uint8_t, std::uint8_t>> *ptr,
    std::map<std::uint8_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint8_t>>(raw);
}

const std::map<std::uint8_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u8$get(const std::unique_ptr<std::map<std::uint8_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u8$release(std::unique_ptr<std::map<std::uint8_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u8$drop(std::unique_ptr<std::map<std::uint8_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u8$v$u8$drop(rust::Map<std::uint8_t, std::uint8_t, entries::__Ku8Vu8MapEntry> *ptr) noexcept;

entries::__Ku8Vu8MapEntry stdtybridge$rust_map$k$u8$v$u8$pop_first(const rust::Map<std::uint8_t, std::uint8_t, entries::__Ku8Vu8MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u8$v$u8$len(const rust::Map<std::uint8_t, std::uint8_t, entries::__Ku8Vu8MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_U16

void stdtybridge$std$map$k$u8$v$u16$insert(
    std::map<std::uint8_t, std::uint16_t> *m, std::uint8_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$u8$v$u16$get_unchecked(
    std::map<std::uint8_t, std::uint16_t> *m, std::uint8_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint16_t &stdtybridge$std$map$k$u8$v$u16$get_unchecked_mut(
    std::map<std::uint8_t, std::uint16_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u8$v$u16$contains_key(
    std::map<std::uint8_t, std::uint16_t> *m, std::uint8_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint8_t &stdtybridge$std$map$k$u8$v$u16$key_by_index(
    std::map<std::uint8_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint16_t &stdtybridge$std$map$k$u8$v$u16$value_by_index(
    std::map<std::uint8_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u8$v$u16$len(
    std::map<std::uint8_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$u16$clear(
    std::map<std::uint8_t, std::uint16_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$u16$null(std::unique_ptr<std::map<std::uint8_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u16$raw(std::unique_ptr<std::map<std::uint8_t, std::uint16_t>> *ptr,
    std::map<std::uint8_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint16_t>>(raw);
}

const std::map<std::uint8_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u16$get(const std::unique_ptr<std::map<std::uint8_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u16$release(std::unique_ptr<std::map<std::uint8_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u16$drop(std::unique_ptr<std::map<std::uint8_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u8$v$u16$drop(rust::Map<std::uint8_t, std::uint16_t, entries::__Ku8Vu16MapEntry> *ptr) noexcept;

entries::__Ku8Vu16MapEntry stdtybridge$rust_map$k$u8$v$u16$pop_first(const rust::Map<std::uint8_t, std::uint16_t, entries::__Ku8Vu16MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u8$v$u16$len(const rust::Map<std::uint8_t, std::uint16_t, entries::__Ku8Vu16MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_U32

void stdtybridge$std$map$k$u8$v$u32$insert(
    std::map<std::uint8_t, std::uint32_t> *m, std::uint8_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$u8$v$u32$get_unchecked(
    std::map<std::uint8_t, std::uint32_t> *m, std::uint8_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint32_t &stdtybridge$std$map$k$u8$v$u32$get_unchecked_mut(
    std::map<std::uint8_t, std::uint32_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u8$v$u32$contains_key(
    std::map<std::uint8_t, std::uint32_t> *m, std::uint8_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint8_t &stdtybridge$std$map$k$u8$v$u32$key_by_index(
    std::map<std::uint8_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint32_t &stdtybridge$std$map$k$u8$v$u32$value_by_index(
    std::map<std::uint8_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u8$v$u32$len(
    std::map<std::uint8_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$u32$clear(
    std::map<std::uint8_t, std::uint32_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$u32$null(std::unique_ptr<std::map<std::uint8_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u32$raw(std::unique_ptr<std::map<std::uint8_t, std::uint32_t>> *ptr,
    std::map<std::uint8_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint32_t>>(raw);
}

const std::map<std::uint8_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u32$get(const std::unique_ptr<std::map<std::uint8_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u32$release(std::unique_ptr<std::map<std::uint8_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u32$drop(std::unique_ptr<std::map<std::uint8_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u8$v$u32$drop(rust::Map<std::uint8_t, std::uint32_t, entries::__Ku8Vu32MapEntry> *ptr) noexcept;

entries::__Ku8Vu32MapEntry stdtybridge$rust_map$k$u8$v$u32$pop_first(const rust::Map<std::uint8_t, std::uint32_t, entries::__Ku8Vu32MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u8$v$u32$len(const rust::Map<std::uint8_t, std::uint32_t, entries::__Ku8Vu32MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_U8

void stdtybridge$std$map$k$u16$v$u8$insert(
    std::map<std::uint16_t, std::uint8_t> *m, std::uint16_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$u16$v$u8$get_unchecked(
    std::map<std::uint16_t, std::uint8_t> *m, std::uint16_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint8_t &stdtybridge$std$map$k$u16$v$u8$get_unchecked_mut(
    std::map<std::uint16_t, std::uint8_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u16$v$u8$contains_key(
    std::map<std::uint16_t, std::uint8_t> *m, std::uint16_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint16_t &stdtybridge$std$map$k$u16$v$u8$key_by_index(
    std::map<std::uint16_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint8_t &stdtybridge$std$map$k$u16$v$u8$value_by_index(
    std::map<std::uint16_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u16$v$u8$len(
    std::map<std::uint16_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$u8$clear(
    std::map<std::uint16_t, std::uint8_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$u8$null(std::unique_ptr<std::map<std::uint16_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u8$raw(std::unique_ptr<std::map<std::uint16_t, std::uint8_t>> *ptr,
    std::map<std::uint16_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint8_t>>(raw);
}

const std::map<std::uint16_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u8$get(const std::unique_ptr<std::map<std::uint16_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u8$release(std::unique_ptr<std::map<std::uint16_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u8$drop(std::unique_ptr<std::map<std::uint16_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u16$v$u8$drop(rust::Map<std::uint16_t, std::uint8_t, entries::__Ku16Vu8MapEntry> *ptr) noexcept;

entries::__Ku16Vu8MapEntry stdtybridge$rust_map$k$u16$v$u8$pop_first(const rust::Map<std::uint16_t, std::uint8_t, entries::__Ku16Vu8MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u16$v$u8$len(const rust::Map<std::uint16_t, std::uint8_t, entries::__Ku16Vu8MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_U16

void stdtybridge$std$map$k$u16$v$u16$insert(
    std::map<std::uint16_t, std::uint16_t> *m, std::uint16_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$u16$v$u16$get_unchecked(
    std::map<std::uint16_t, std::uint16_t> *m, std::uint16_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint16_t &stdtybridge$std$map$k$u16$v$u16$get_unchecked_mut(
    std::map<std::uint16_t, std::uint16_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u16$v$u16$contains_key(
    std::map<std::uint16_t, std::uint16_t> *m, std::uint16_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint16_t &stdtybridge$std$map$k$u16$v$u16$key_by_index(
    std::map<std::uint16_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint16_t &stdtybridge$std$map$k$u16$v$u16$value_by_index(
    std::map<std::uint16_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u16$v$u16$len(
    std::map<std::uint16_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$u16$clear(
    std::map<std::uint16_t, std::uint16_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$u16$null(std::unique_ptr<std::map<std::uint16_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u16$raw(std::unique_ptr<std::map<std::uint16_t, std::uint16_t>> *ptr,
    std::map<std::uint16_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint16_t>>(raw);
}

const std::map<std::uint16_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u16$get(const std::unique_ptr<std::map<std::uint16_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u16$release(std::unique_ptr<std::map<std::uint16_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u16$drop(std::unique_ptr<std::map<std::uint16_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u16$v$u16$drop(rust::Map<std::uint16_t, std::uint16_t, entries::__Ku16Vu16MapEntry> *ptr) noexcept;

entries::__Ku16Vu16MapEntry stdtybridge$rust_map$k$u16$v$u16$pop_first(const rust::Map<std::uint16_t, std::uint16_t, entries::__Ku16Vu16MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u16$v$u16$len(const rust::Map<std::uint16_t, std::uint16_t, entries::__Ku16Vu16MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_U32

void stdtybridge$std$map$k$u16$v$u32$insert(
    std::map<std::uint16_t, std::uint32_t> *m, std::uint16_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$u16$v$u32$get_unchecked(
    std::map<std::uint16_t, std::uint32_t> *m, std::uint16_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint32_t &stdtybridge$std$map$k$u16$v$u32$get_unchecked_mut(
    std::map<std::uint16_t, std::uint32_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u16$v$u32$contains_key(
    std::map<std::uint16_t, std::uint32_t> *m, std::uint16_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint16_t &stdtybridge$std$map$k$u16$v$u32$key_by_index(
    std::map<std::uint16_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint32_t &stdtybridge$std$map$k$u16$v$u32$value_by_index(
    std::map<std::uint16_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u16$v$u32$len(
    std::map<std::uint16_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$u32$clear(
    std::map<std::uint16_t, std::uint32_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$u32$null(std::unique_ptr<std::map<std::uint16_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u32$raw(std::unique_ptr<std::map<std::uint16_t, std::uint32_t>> *ptr,
    std::map<std::uint16_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint32_t>>(raw);
}

const std::map<std::uint16_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u32$get(const std::unique_ptr<std::map<std::uint16_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u32$release(std::unique_ptr<std::map<std::uint16_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u32$drop(std::unique_ptr<std::map<std::uint16_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u16$v$u32$drop(rust::Map<std::uint16_t, std::uint32_t, entries::__Ku16Vu32MapEntry> *ptr) noexcept;

entries::__Ku16Vu32MapEntry stdtybridge$rust_map$k$u16$v$u32$pop_first(const rust::Map<std::uint16_t, std::uint32_t, entries::__Ku16Vu32MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u16$v$u32$len(const rust::Map<std::uint16_t, std::uint32_t, entries::__Ku16Vu32MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_U8

void stdtybridge$std$map$k$u32$v$u8$insert(
    std::map<std::uint32_t, std::uint8_t> *m, std::uint32_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$u32$v$u8$get_unchecked(
    std::map<std::uint32_t, std::uint8_t> *m, std::uint32_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint8_t &stdtybridge$std$map$k$u32$v$u8$get_unchecked_mut(
    std::map<std::uint32_t, std::uint8_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u32$v$u8$contains_key(
    std::map<std::uint32_t, std::uint8_t> *m, std::uint32_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint32_t &stdtybridge$std$map$k$u32$v$u8$key_by_index(
    std::map<std::uint32_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint8_t &stdtybridge$std$map$k$u32$v$u8$value_by_index(
    std::map<std::uint32_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u32$v$u8$len(
    std::map<std::uint32_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$u8$clear(
    std::map<std::uint32_t, std::uint8_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$u8$null(std::unique_ptr<std::map<std::uint32_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u8$raw(std::unique_ptr<std::map<std::uint32_t, std::uint8_t>> *ptr,
    std::map<std::uint32_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint8_t>>(raw);
}

const std::map<std::uint32_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u8$get(const std::unique_ptr<std::map<std::uint32_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u8$release(std::unique_ptr<std::map<std::uint32_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u8$drop(std::unique_ptr<std::map<std::uint32_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u32$v$u8$drop(rust::Map<std::uint32_t, std::uint8_t, entries::__Ku32Vu8MapEntry> *ptr) noexcept;

entries::__Ku32Vu8MapEntry stdtybridge$rust_map$k$u32$v$u8$pop_first(const rust::Map<std::uint32_t, std::uint8_t, entries::__Ku32Vu8MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u32$v$u8$len(const rust::Map<std::uint32_t, std::uint8_t, entries::__Ku32Vu8MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_U16

void stdtybridge$std$map$k$u32$v$u16$insert(
    std::map<std::uint32_t, std::uint16_t> *m, std::uint32_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$u32$v$u16$get_unchecked(
    std::map<std::uint32_t, std::uint16_t> *m, std::uint32_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint16_t &stdtybridge$std$map$k$u32$v$u16$get_unchecked_mut(
    std::map<std::uint32_t, std::uint16_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u32$v$u16$contains_key(
    std::map<std::uint32_t, std::uint16_t> *m, std::uint32_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint32_t &stdtybridge$std$map$k$u32$v$u16$key_by_index(
    std::map<std::uint32_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint16_t &stdtybridge$std$map$k$u32$v$u16$value_by_index(
    std::map<std::uint32_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u32$v$u16$len(
    std::map<std::uint32_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$u16$clear(
    std::map<std::uint32_t, std::uint16_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$u16$null(std::unique_ptr<std::map<std::uint32_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u16$raw(std::unique_ptr<std::map<std::uint32_t, std::uint16_t>> *ptr,
    std::map<std::uint32_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint16_t>>(raw);
}

const std::map<std::uint32_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u16$get(const std::unique_ptr<std::map<std::uint32_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u16$release(std::unique_ptr<std::map<std::uint32_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u16$drop(std::unique_ptr<std::map<std::uint32_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u32$v$u16$drop(rust::Map<std::uint32_t, std::uint16_t, entries::__Ku32Vu16MapEntry> *ptr) noexcept;

entries::__Ku32Vu16MapEntry stdtybridge$rust_map$k$u32$v$u16$pop_first(const rust::Map<std::uint32_t, std::uint16_t, entries::__Ku32Vu16MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u32$v$u16$len(const rust::Map<std::uint32_t, std::uint16_t, entries::__Ku32Vu16MapEntry> *ptr) noexcept;



#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_U32

void stdtybridge$std$map$k$u32$v$u32$insert(
    std::map<std::uint32_t, std::uint32_t> *m, std::uint32_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$u32$v$u32$get_unchecked(
    std::map<std::uint32_t, std::uint32_t> *m, std::uint32_t *key) noexcept {
        return m->at(*key);
    }
    
std::uint32_t &stdtybridge$std$map$k$u32$v$u32$get_unchecked_mut(
    std::map<std::uint32_t, std::uint32_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$u32$v$u32$contains_key(
    std::map<std::uint32_t, std::uint32_t> *m, std::uint32_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::uint32_t &stdtybridge$std$map$k$u32$v$u32$key_by_index(
    std::map<std::uint32_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::uint32_t &stdtybridge$std$map$k$u32$v$u32$value_by_index(
    std::map<std::uint32_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$u32$v$u32$len(
    std::map<std::uint32_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$u32$clear(
    std::map<std::uint32_t, std::uint32_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$u32$null(std::unique_ptr<std::map<std::uint32_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u32$raw(std::unique_ptr<std::map<std::uint32_t, std::uint32_t>> *ptr,
    std::map<std::uint32_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint32_t>>(raw);
}

const std::map<std::uint32_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u32$get(const std::unique_ptr<std::map<std::uint32_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u32$release(std::unique_ptr<std::map<std::uint32_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u32$drop(std::unique_ptr<std::map<std::uint32_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}


// rust::map shims
void stdtybridge$rust_map$k$u32$v$u32$drop(rust::Map<std::uint32_t, std::uint32_t, entries::__Ku32Vu32MapEntry> *ptr) noexcept;

entries::__Ku32Vu32MapEntry stdtybridge$rust_map$k$u32$v$u32$pop_first(const rust::Map<std::uint32_t, std::uint32_t, entries::__Ku32Vu32MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$u32$v$u32$len(const rust::Map<std::uint32_t, std::uint32_t, entries::__Ku32Vu32MapEntry> *ptr) noexcept;



#endif
}

namespace rust {
inline namespace stdtybridge {

#if __STDTY_MAP_U8 && __STDTY_MAP_U8

template <>
void Map<std::uint8_t, std::uint8_t, entries::__Ku8Vu8MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u8$v$u8$drop(this);
}

template <>
entries::__Ku8Vu8MapEntry Map<std::uint8_t, std::uint8_t, entries::__Ku8Vu8MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u8$v$u8$pop_first(this);
}

template <>
std::size_t Map<std::uint8_t, std::uint8_t, entries::__Ku8Vu8MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u8$v$u8$len(this);
}
#endif

#if __STDTY_MAP_U8 && __STDTY_MAP_U16

template <>
void Map<std::uint8_t, std::uint16_t, entries::__Ku8Vu16MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u8$v$u16$drop(this);
}

template <>
entries::__Ku8Vu16MapEntry Map<std::uint8_t, std::uint16_t, entries::__Ku8Vu16MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u8$v$u16$pop_first(this);
}

template <>
std::size_t Map<std::uint8_t, std::uint16_t, entries::__Ku8Vu16MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u8$v$u16$len(this);
}
#endif

#if __STDTY_MAP_U8 && __STDTY_MAP_U32

template <>
void Map<std::uint8_t, std::uint32_t, entries::__Ku8Vu32MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u8$v$u32$drop(this);
}

template <>
entries::__Ku8Vu32MapEntry Map<std::uint8_t, std::uint32_t, entries::__Ku8Vu32MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u8$v$u32$pop_first(this);
}

template <>
std::size_t Map<std::uint8_t, std::uint32_t, entries::__Ku8Vu32MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u8$v$u32$len(this);
}
#endif

#if __STDTY_MAP_U16 && __STDTY_MAP_U8

template <>
void Map<std::uint16_t, std::uint8_t, entries::__Ku16Vu8MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u16$v$u8$drop(this);
}

template <>
entries::__Ku16Vu8MapEntry Map<std::uint16_t, std::uint8_t, entries::__Ku16Vu8MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u16$v$u8$pop_first(this);
}

template <>
std::size_t Map<std::uint16_t, std::uint8_t, entries::__Ku16Vu8MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u16$v$u8$len(this);
}
#endif

#if __STDTY_MAP_U16 && __STDTY_MAP_U16

template <>
void Map<std::uint16_t, std::uint16_t, entries::__Ku16Vu16MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u16$v$u16$drop(this);
}

template <>
entries::__Ku16Vu16MapEntry Map<std::uint16_t, std::uint16_t, entries::__Ku16Vu16MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u16$v$u16$pop_first(this);
}

template <>
std::size_t Map<std::uint16_t, std::uint16_t, entries::__Ku16Vu16MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u16$v$u16$len(this);
}
#endif

#if __STDTY_MAP_U16 && __STDTY_MAP_U32

template <>
void Map<std::uint16_t, std::uint32_t, entries::__Ku16Vu32MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u16$v$u32$drop(this);
}

template <>
entries::__Ku16Vu32MapEntry Map<std::uint16_t, std::uint32_t, entries::__Ku16Vu32MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u16$v$u32$pop_first(this);
}

template <>
std::size_t Map<std::uint16_t, std::uint32_t, entries::__Ku16Vu32MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u16$v$u32$len(this);
}
#endif

#if __STDTY_MAP_U32 && __STDTY_MAP_U8

template <>
void Map<std::uint32_t, std::uint8_t, entries::__Ku32Vu8MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u32$v$u8$drop(this);
}

template <>
entries::__Ku32Vu8MapEntry Map<std::uint32_t, std::uint8_t, entries::__Ku32Vu8MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u32$v$u8$pop_first(this);
}

template <>
std::size_t Map<std::uint32_t, std::uint8_t, entries::__Ku32Vu8MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u32$v$u8$len(this);
}
#endif

#if __STDTY_MAP_U32 && __STDTY_MAP_U16

template <>
void Map<std::uint32_t, std::uint16_t, entries::__Ku32Vu16MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u32$v$u16$drop(this);
}

template <>
entries::__Ku32Vu16MapEntry Map<std::uint32_t, std::uint16_t, entries::__Ku32Vu16MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u32$v$u16$pop_first(this);
}

template <>
std::size_t Map<std::uint32_t, std::uint16_t, entries::__Ku32Vu16MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u32$v$u16$len(this);
}
#endif

#if __STDTY_MAP_U32 && __STDTY_MAP_U32

template <>
void Map<std::uint32_t, std::uint32_t, entries::__Ku32Vu32MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$u32$v$u32$drop(this);
}

template <>
entries::__Ku32Vu32MapEntry Map<std::uint32_t, std::uint32_t, entries::__Ku32Vu32MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$u32$v$u32$pop_first(this);
}

template <>
std::size_t Map<std::uint32_t, std::uint32_t, entries::__Ku32Vu32MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$u32$v$u32$len(this);
}
#endif

}
}

    