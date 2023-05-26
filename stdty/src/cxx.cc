
#include "../include/cxx.h"

template <typename T>
void destroy(T *ptr) {
    ptr->~T();
}  

extern "C" {
    
void stdtybridge$std$map$k$i16$v$i16$insert(
    std::map<std::int16_t, std::int16_t> *m, std::int16_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$i16$v$i16$get_unchecked(
    std::map<std::int16_t, std::int16_t> *m, std::int16_t *key) noexcept {
        return m->at(*key);
    }
    
std::int16_t &stdtybridge$std$map$k$i16$v$i16$get_unchecked_mut(
    std::map<std::int16_t, std::int16_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$i16$v$i16$contains_key(
    std::map<std::int16_t, std::int16_t> *m, std::int16_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::int16_t &stdtybridge$std$map$k$i16$v$i16$key_by_index(
    std::map<std::int16_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::int16_t &stdtybridge$std$map$k$i16$v$i16$value_by_index(
    std::map<std::int16_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$i16$v$i16$len(
    std::map<std::int16_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$i16$clear(
    std::map<std::int16_t, std::int16_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$i16$null(std::unique_ptr<std::map<std::int16_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i16$raw(std::unique_ptr<std::map<std::int16_t, std::int16_t>> *ptr,
    std::map<std::int16_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int16_t>>(raw);
}

const std::map<std::int16_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i16$get(const std::unique_ptr<std::map<std::int16_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i16$release(std::unique_ptr<std::map<std::int16_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i16$drop(std::unique_ptr<std::map<std::int16_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$i16$v$bool$insert(
    std::map<std::int16_t, bool> *m, std::int16_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$i16$v$bool$get_unchecked(
    std::map<std::int16_t, bool> *m, std::int16_t *key) noexcept {
        return m->at(*key);
    }
    
bool &stdtybridge$std$map$k$i16$v$bool$get_unchecked_mut(
    std::map<std::int16_t, bool> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$i16$v$bool$contains_key(
    std::map<std::int16_t, bool> *m, std::int16_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::int16_t &stdtybridge$std$map$k$i16$v$bool$key_by_index(
    std::map<std::int16_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const bool &stdtybridge$std$map$k$i16$v$bool$value_by_index(
    std::map<std::int16_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$i16$v$bool$len(
    std::map<std::int16_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$bool$clear(
    std::map<std::int16_t, bool> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$bool$null(std::unique_ptr<std::map<std::int16_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$bool$raw(std::unique_ptr<std::map<std::int16_t, bool>> *ptr,
    std::map<std::int16_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, bool>>(raw);
}

const std::map<std::int16_t, bool> *stdtybridge$unique_ptr$std$map$k$i16$v$bool$get(const std::unique_ptr<std::map<std::int16_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, bool> *stdtybridge$unique_ptr$std$map$k$i16$v$bool$release(std::unique_ptr<std::map<std::int16_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$bool$drop(std::unique_ptr<std::map<std::int16_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$i16$v$string$insert(
    std::map<std::int16_t, std::string> *m, std::int16_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$i16$v$string$get_unchecked(
    std::map<std::int16_t, std::string> *m, std::int16_t *key) noexcept {
        return m->at(*key);
    }
    
std::string &stdtybridge$std$map$k$i16$v$string$get_unchecked_mut(
    std::map<std::int16_t, std::string> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$i16$v$string$contains_key(
    std::map<std::int16_t, std::string> *m, std::int16_t *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::int16_t &stdtybridge$std$map$k$i16$v$string$key_by_index(
    std::map<std::int16_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::string &stdtybridge$std$map$k$i16$v$string$value_by_index(
    std::map<std::int16_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$i16$v$string$len(
    std::map<std::int16_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$string$clear(
    std::map<std::int16_t, std::string> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$string$null(std::unique_ptr<std::map<std::int16_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$string$raw(std::unique_ptr<std::map<std::int16_t, std::string>> *ptr,
    std::map<std::int16_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::string>>(raw);
}

const std::map<std::int16_t, std::string> *stdtybridge$unique_ptr$std$map$k$i16$v$string$get(const std::unique_ptr<std::map<std::int16_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::string> *stdtybridge$unique_ptr$std$map$k$i16$v$string$release(std::unique_ptr<std::map<std::int16_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$string$drop(std::unique_ptr<std::map<std::int16_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$bool$v$i16$insert(
    std::map<bool, std::int16_t> *m, bool *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$bool$v$i16$get_unchecked(
    std::map<bool, std::int16_t> *m, bool *key) noexcept {
        return m->at(*key);
    }
    
std::int16_t &stdtybridge$std$map$k$bool$v$i16$get_unchecked_mut(
    std::map<bool, std::int16_t> *m, bool *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$bool$v$i16$contains_key(
    std::map<bool, std::int16_t> *m, bool *key) noexcept {
        return m->count(*key) > 0;
}
        
const bool &stdtybridge$std$map$k$bool$v$i16$key_by_index(
    std::map<bool, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::int16_t &stdtybridge$std$map$k$bool$v$i16$value_by_index(
    std::map<bool, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$bool$v$i16$len(
    std::map<bool, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$i16$clear(
    std::map<bool, std::int16_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$i16$null(std::unique_ptr<std::map<bool, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i16$raw(std::unique_ptr<std::map<bool, std::int16_t>> *ptr,
    std::map<bool, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int16_t>>(raw);
}

const std::map<bool, std::int16_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i16$get(const std::unique_ptr<std::map<bool, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::int16_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i16$release(std::unique_ptr<std::map<bool, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i16$drop(std::unique_ptr<std::map<bool, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$bool$v$bool$insert(
    std::map<bool, bool> *m, bool *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$bool$v$bool$get_unchecked(
    std::map<bool, bool> *m, bool *key) noexcept {
        return m->at(*key);
    }
    
bool &stdtybridge$std$map$k$bool$v$bool$get_unchecked_mut(
    std::map<bool, bool> *m, bool *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$bool$v$bool$contains_key(
    std::map<bool, bool> *m, bool *key) noexcept {
        return m->count(*key) > 0;
}
        
const bool &stdtybridge$std$map$k$bool$v$bool$key_by_index(
    std::map<bool, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const bool &stdtybridge$std$map$k$bool$v$bool$value_by_index(
    std::map<bool, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$bool$v$bool$len(
    std::map<bool, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$bool$clear(
    std::map<bool, bool> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$bool$null(std::unique_ptr<std::map<bool, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$bool$raw(std::unique_ptr<std::map<bool, bool>> *ptr,
    std::map<bool, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, bool>>(raw);
}

const std::map<bool, bool> *stdtybridge$unique_ptr$std$map$k$bool$v$bool$get(const std::unique_ptr<std::map<bool, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, bool> *stdtybridge$unique_ptr$std$map$k$bool$v$bool$release(std::unique_ptr<std::map<bool, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$bool$drop(std::unique_ptr<std::map<bool, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$bool$v$string$insert(
    std::map<bool, std::string> *m, bool *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$bool$v$string$get_unchecked(
    std::map<bool, std::string> *m, bool *key) noexcept {
        return m->at(*key);
    }
    
std::string &stdtybridge$std$map$k$bool$v$string$get_unchecked_mut(
    std::map<bool, std::string> *m, bool *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$bool$v$string$contains_key(
    std::map<bool, std::string> *m, bool *key) noexcept {
        return m->count(*key) > 0;
}
        
const bool &stdtybridge$std$map$k$bool$v$string$key_by_index(
    std::map<bool, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::string &stdtybridge$std$map$k$bool$v$string$value_by_index(
    std::map<bool, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$bool$v$string$len(
    std::map<bool, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$string$clear(
    std::map<bool, std::string> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$string$null(std::unique_ptr<std::map<bool, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$string$raw(std::unique_ptr<std::map<bool, std::string>> *ptr,
    std::map<bool, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::string>>(raw);
}

const std::map<bool, std::string> *stdtybridge$unique_ptr$std$map$k$bool$v$string$get(const std::unique_ptr<std::map<bool, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::string> *stdtybridge$unique_ptr$std$map$k$bool$v$string$release(std::unique_ptr<std::map<bool, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$string$drop(std::unique_ptr<std::map<bool, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$string$v$i16$insert(
    std::map<std::string, std::int16_t> *m, std::string *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$string$v$i16$get_unchecked(
    std::map<std::string, std::int16_t> *m, std::string *key) noexcept {
        return m->at(*key);
    }
    
std::int16_t &stdtybridge$std$map$k$string$v$i16$get_unchecked_mut(
    std::map<std::string, std::int16_t> *m, std::string *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$string$v$i16$contains_key(
    std::map<std::string, std::int16_t> *m, std::string *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::string &stdtybridge$std$map$k$string$v$i16$key_by_index(
    std::map<std::string, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::int16_t &stdtybridge$std$map$k$string$v$i16$value_by_index(
    std::map<std::string, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$string$v$i16$len(
    std::map<std::string, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$i16$clear(
    std::map<std::string, std::int16_t> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$i16$null(std::unique_ptr<std::map<std::string, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i16$raw(std::unique_ptr<std::map<std::string, std::int16_t>> *ptr,
    std::map<std::string, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int16_t>>(raw);
}

const std::map<std::string, std::int16_t> *stdtybridge$unique_ptr$std$map$k$string$v$i16$get(const std::unique_ptr<std::map<std::string, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::int16_t> *stdtybridge$unique_ptr$std$map$k$string$v$i16$release(std::unique_ptr<std::map<std::string, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i16$drop(std::unique_ptr<std::map<std::string, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$string$v$bool$insert(
    std::map<std::string, bool> *m, std::string *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$string$v$bool$get_unchecked(
    std::map<std::string, bool> *m, std::string *key) noexcept {
        return m->at(*key);
    }
    
bool &stdtybridge$std$map$k$string$v$bool$get_unchecked_mut(
    std::map<std::string, bool> *m, std::string *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$string$v$bool$contains_key(
    std::map<std::string, bool> *m, std::string *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::string &stdtybridge$std$map$k$string$v$bool$key_by_index(
    std::map<std::string, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const bool &stdtybridge$std$map$k$string$v$bool$value_by_index(
    std::map<std::string, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$string$v$bool$len(
    std::map<std::string, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$bool$clear(
    std::map<std::string, bool> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$bool$null(std::unique_ptr<std::map<std::string, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$bool$raw(std::unique_ptr<std::map<std::string, bool>> *ptr,
    std::map<std::string, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, bool>>(raw);
}

const std::map<std::string, bool> *stdtybridge$unique_ptr$std$map$k$string$v$bool$get(const std::unique_ptr<std::map<std::string, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, bool> *stdtybridge$unique_ptr$std$map$k$string$v$bool$release(std::unique_ptr<std::map<std::string, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$bool$drop(std::unique_ptr<std::map<std::string, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$std$map$k$string$v$string$insert(
    std::map<std::string, std::string> *m, std::string *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$string$v$string$get_unchecked(
    std::map<std::string, std::string> *m, std::string *key) noexcept {
        return m->at(*key);
    }
    
std::string &stdtybridge$std$map$k$string$v$string$get_unchecked_mut(
    std::map<std::string, std::string> *m, std::string *key) noexcept {
    return m->at(*key);
}
    
bool stdtybridge$std$map$k$string$v$string$contains_key(
    std::map<std::string, std::string> *m, std::string *key) noexcept {
        return m->count(*key) > 0;
}
        
const std::string &stdtybridge$std$map$k$string$v$string$key_by_index(
    std::map<std::string, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}
            
const std::string &stdtybridge$std$map$k$string$v$string$value_by_index(
    std::map<std::string, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}
                
std::size_t stdtybridge$std$map$k$string$v$string$len(
    std::map<std::string, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$string$clear(
    std::map<std::string, std::string> *m) noexcept {
    m->clear();
}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$string$null(std::unique_ptr<std::map<std::string, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$string$raw(std::unique_ptr<std::map<std::string, std::string>> *ptr,
    std::map<std::string, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::string>>(raw);
}

const std::map<std::string, std::string> *stdtybridge$unique_ptr$std$map$k$string$v$string$get(const std::unique_ptr<std::map<std::string, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::string> *stdtybridge$unique_ptr$std$map$k$string$v$string$release(std::unique_ptr<std::map<std::string, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$string$drop(std::unique_ptr<std::map<std::string, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}

void stdtybridge$rust_map$k$i16$v$i16$drop(rust::Map<std::int16_t, std::int16_t, entries::__Ki16Vi16MapEntry> *ptr) noexcept;

entries::__Ki16Vi16MapEntry stdtybridge$rust_map$k$i16$v$i16$pop_first(const rust::Map<std::int16_t, std::int16_t, entries::__Ki16Vi16MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$i16$v$i16$len(const rust::Map<std::int16_t, std::int16_t, entries::__Ki16Vi16MapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$i16$v$bool$drop(rust::Map<std::int16_t, bool, entries::__Ki16VboolMapEntry> *ptr) noexcept;

entries::__Ki16VboolMapEntry stdtybridge$rust_map$k$i16$v$bool$pop_first(const rust::Map<std::int16_t, bool, entries::__Ki16VboolMapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$i16$v$bool$len(const rust::Map<std::int16_t, bool, entries::__Ki16VboolMapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$i16$v$string$drop(rust::Map<std::int16_t, rust::string, entries::__Ki16VstringMapEntry> *ptr) noexcept;

entries::__Ki16VstringMapEntry stdtybridge$rust_map$k$i16$v$string$pop_first(const rust::Map<std::int16_t, rust::string, entries::__Ki16VstringMapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$i16$v$string$len(const rust::Map<std::int16_t, rust::string, entries::__Ki16VstringMapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$bool$v$i16$drop(rust::Map<bool, std::int16_t, entries::__KboolVi16MapEntry> *ptr) noexcept;

entries::__KboolVi16MapEntry stdtybridge$rust_map$k$bool$v$i16$pop_first(const rust::Map<bool, std::int16_t, entries::__KboolVi16MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$bool$v$i16$len(const rust::Map<bool, std::int16_t, entries::__KboolVi16MapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$bool$v$bool$drop(rust::Map<bool, bool, entries::__KboolVboolMapEntry> *ptr) noexcept;

entries::__KboolVboolMapEntry stdtybridge$rust_map$k$bool$v$bool$pop_first(const rust::Map<bool, bool, entries::__KboolVboolMapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$bool$v$bool$len(const rust::Map<bool, bool, entries::__KboolVboolMapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$bool$v$string$drop(rust::Map<bool, rust::string, entries::__KboolVstringMapEntry> *ptr) noexcept;

entries::__KboolVstringMapEntry stdtybridge$rust_map$k$bool$v$string$pop_first(const rust::Map<bool, rust::string, entries::__KboolVstringMapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$bool$v$string$len(const rust::Map<bool, rust::string, entries::__KboolVstringMapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$string$v$i16$drop(rust::Map<rust::string, std::int16_t, entries::__KstringVi16MapEntry> *ptr) noexcept;

entries::__KstringVi16MapEntry stdtybridge$rust_map$k$string$v$i16$pop_first(const rust::Map<rust::string, std::int16_t, entries::__KstringVi16MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$string$v$i16$len(const rust::Map<rust::string, std::int16_t, entries::__KstringVi16MapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$string$v$bool$drop(rust::Map<rust::string, bool, entries::__KstringVboolMapEntry> *ptr) noexcept;

entries::__KstringVboolMapEntry stdtybridge$rust_map$k$string$v$bool$pop_first(const rust::Map<rust::string, bool, entries::__KstringVboolMapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$string$v$bool$len(const rust::Map<rust::string, bool, entries::__KstringVboolMapEntry> *ptr) noexcept;
            
void stdtybridge$rust_map$k$string$v$string$drop(rust::Map<rust::string, rust::string, entries::__KstringVstringMapEntry> *ptr) noexcept;

entries::__KstringVstringMapEntry stdtybridge$rust_map$k$string$v$string$pop_first(const rust::Map<rust::string, rust::string, entries::__KstringVstringMapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k$string$v$string$len(const rust::Map<rust::string, rust::string, entries::__KstringVstringMapEntry> *ptr) noexcept;
            
}

namespace rust {
inline namespace stdtybridge {


template <>
void Map<std::int16_t, std::int16_t, entries::__Ki16Vi16MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$i16$v$i16$drop(this);
}

template <>
entries::__Ki16Vi16MapEntry Map<std::int16_t, std::int16_t, entries::__Ki16Vi16MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$i16$v$i16$pop_first(this);
}

template <>
std::size_t Map<std::int16_t, std::int16_t, entries::__Ki16Vi16MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$i16$v$i16$len(this);
}


template <>
void Map<std::int16_t, bool, entries::__Ki16VboolMapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$i16$v$bool$drop(this);
}

template <>
entries::__Ki16VboolMapEntry Map<std::int16_t, bool, entries::__Ki16VboolMapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$i16$v$bool$pop_first(this);
}

template <>
std::size_t Map<std::int16_t, bool, entries::__Ki16VboolMapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$i16$v$bool$len(this);
}


template <>
void Map<std::int16_t, rust::string, entries::__Ki16VstringMapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$i16$v$string$drop(this);
}

template <>
entries::__Ki16VstringMapEntry Map<std::int16_t, rust::string, entries::__Ki16VstringMapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$i16$v$string$pop_first(this);
}

template <>
std::size_t Map<std::int16_t, rust::string, entries::__Ki16VstringMapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$i16$v$string$len(this);
}


template <>
void Map<bool, std::int16_t, entries::__KboolVi16MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$bool$v$i16$drop(this);
}

template <>
entries::__KboolVi16MapEntry Map<bool, std::int16_t, entries::__KboolVi16MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$bool$v$i16$pop_first(this);
}

template <>
std::size_t Map<bool, std::int16_t, entries::__KboolVi16MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$bool$v$i16$len(this);
}


template <>
void Map<bool, bool, entries::__KboolVboolMapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$bool$v$bool$drop(this);
}

template <>
entries::__KboolVboolMapEntry Map<bool, bool, entries::__KboolVboolMapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$bool$v$bool$pop_first(this);
}

template <>
std::size_t Map<bool, bool, entries::__KboolVboolMapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$bool$v$bool$len(this);
}


template <>
void Map<bool, rust::string, entries::__KboolVstringMapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$bool$v$string$drop(this);
}

template <>
entries::__KboolVstringMapEntry Map<bool, rust::string, entries::__KboolVstringMapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$bool$v$string$pop_first(this);
}

template <>
std::size_t Map<bool, rust::string, entries::__KboolVstringMapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$bool$v$string$len(this);
}


template <>
void Map<rust::string, std::int16_t, entries::__KstringVi16MapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$string$v$i16$drop(this);
}

template <>
entries::__KstringVi16MapEntry Map<rust::string, std::int16_t, entries::__KstringVi16MapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$string$v$i16$pop_first(this);
}

template <>
std::size_t Map<rust::string, std::int16_t, entries::__KstringVi16MapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$string$v$i16$len(this);
}


template <>
void Map<rust::string, bool, entries::__KstringVboolMapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$string$v$bool$drop(this);
}

template <>
entries::__KstringVboolMapEntry Map<rust::string, bool, entries::__KstringVboolMapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$string$v$bool$pop_first(this);
}

template <>
std::size_t Map<rust::string, bool, entries::__KstringVboolMapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$string$v$bool$len(this);
}


template <>
void Map<rust::string, rust::string, entries::__KstringVstringMapEntry>::drop() noexcept {
    return stdtybridge$rust_map$k$string$v$string$drop(this);
}

template <>
entries::__KstringVstringMapEntry Map<rust::string, rust::string, entries::__KstringVstringMapEntry>::pop_first() noexcept {
    return stdtybridge$rust_map$k$string$v$string$pop_first(this);
}

template <>
std::size_t Map<rust::string, rust::string, entries::__KstringVstringMapEntry>::size() const noexcept {
    return stdtybridge$rust_map$k$string$v$string$len(this);
}

}
}

    