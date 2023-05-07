
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
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_U64

void stdtybridge$std$map$k$u8$v$u64$insert(
    std::map<std::uint8_t, std::uint64_t> *m, std::uint8_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$u8$v$u64$get_unchecked(
    std::map<std::uint8_t, std::uint64_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$u8$v$u64$get_unchecked_mut(
    std::map<std::uint8_t, std::uint64_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$u64$contains_key(
    std::map<std::uint8_t, std::uint64_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$u64$key_by_index(
    std::map<std::uint8_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$u8$v$u64$value_by_index(
    std::map<std::uint8_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$u64$len(
    std::map<std::uint8_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$u64$clear(
    std::map<std::uint8_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$u64$null(std::unique_ptr<std::map<std::uint8_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u64$raw(std::unique_ptr<std::map<std::uint8_t, std::uint64_t>> *ptr,
                                                   std::map<std::uint8_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::uint64_t>>(raw);
}

const std::map<std::uint8_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u64$get(const std::unique_ptr<std::map<std::uint8_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u8$v$u64$release(std::unique_ptr<std::map<std::uint8_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$u64$drop(std::unique_ptr<std::map<std::uint8_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_I8

void stdtybridge$std$map$k$u8$v$i8$insert(
    std::map<std::uint8_t, std::int8_t> *m, std::uint8_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$u8$v$i8$get_unchecked(
    std::map<std::uint8_t, std::int8_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$u8$v$i8$get_unchecked_mut(
    std::map<std::uint8_t, std::int8_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$i8$contains_key(
    std::map<std::uint8_t, std::int8_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$i8$key_by_index(
    std::map<std::uint8_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$u8$v$i8$value_by_index(
    std::map<std::uint8_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$i8$len(
    std::map<std::uint8_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$i8$clear(
    std::map<std::uint8_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$i8$null(std::unique_ptr<std::map<std::uint8_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i8$raw(std::unique_ptr<std::map<std::uint8_t, std::int8_t>> *ptr,
                                                  std::map<std::uint8_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int8_t>>(raw);
}

const std::map<std::uint8_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i8$get(const std::unique_ptr<std::map<std::uint8_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i8$release(std::unique_ptr<std::map<std::uint8_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i8$drop(std::unique_ptr<std::map<std::uint8_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_I16

void stdtybridge$std$map$k$u8$v$i16$insert(
    std::map<std::uint8_t, std::int16_t> *m, std::uint8_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$u8$v$i16$get_unchecked(
    std::map<std::uint8_t, std::int16_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$u8$v$i16$get_unchecked_mut(
    std::map<std::uint8_t, std::int16_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$i16$contains_key(
    std::map<std::uint8_t, std::int16_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$i16$key_by_index(
    std::map<std::uint8_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$u8$v$i16$value_by_index(
    std::map<std::uint8_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$i16$len(
    std::map<std::uint8_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$i16$clear(
    std::map<std::uint8_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$i16$null(std::unique_ptr<std::map<std::uint8_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i16$raw(std::unique_ptr<std::map<std::uint8_t, std::int16_t>> *ptr,
                                                   std::map<std::uint8_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int16_t>>(raw);
}

const std::map<std::uint8_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i16$get(const std::unique_ptr<std::map<std::uint8_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i16$release(std::unique_ptr<std::map<std::uint8_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i16$drop(std::unique_ptr<std::map<std::uint8_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_I32

void stdtybridge$std$map$k$u8$v$i32$insert(
    std::map<std::uint8_t, std::int32_t> *m, std::uint8_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$u8$v$i32$get_unchecked(
    std::map<std::uint8_t, std::int32_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$u8$v$i32$get_unchecked_mut(
    std::map<std::uint8_t, std::int32_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$i32$contains_key(
    std::map<std::uint8_t, std::int32_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$i32$key_by_index(
    std::map<std::uint8_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$u8$v$i32$value_by_index(
    std::map<std::uint8_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$i32$len(
    std::map<std::uint8_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$i32$clear(
    std::map<std::uint8_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$i32$null(std::unique_ptr<std::map<std::uint8_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i32$raw(std::unique_ptr<std::map<std::uint8_t, std::int32_t>> *ptr,
                                                   std::map<std::uint8_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int32_t>>(raw);
}

const std::map<std::uint8_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i32$get(const std::unique_ptr<std::map<std::uint8_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i32$release(std::unique_ptr<std::map<std::uint8_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i32$drop(std::unique_ptr<std::map<std::uint8_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_I64

void stdtybridge$std$map$k$u8$v$i64$insert(
    std::map<std::uint8_t, std::int64_t> *m, std::uint8_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$u8$v$i64$get_unchecked(
    std::map<std::uint8_t, std::int64_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$u8$v$i64$get_unchecked_mut(
    std::map<std::uint8_t, std::int64_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$i64$contains_key(
    std::map<std::uint8_t, std::int64_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$i64$key_by_index(
    std::map<std::uint8_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$u8$v$i64$value_by_index(
    std::map<std::uint8_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$i64$len(
    std::map<std::uint8_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$i64$clear(
    std::map<std::uint8_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$i64$null(std::unique_ptr<std::map<std::uint8_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i64$raw(std::unique_ptr<std::map<std::uint8_t, std::int64_t>> *ptr,
                                                   std::map<std::uint8_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::int64_t>>(raw);
}

const std::map<std::uint8_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i64$get(const std::unique_ptr<std::map<std::uint8_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u8$v$i64$release(std::unique_ptr<std::map<std::uint8_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$i64$drop(std::unique_ptr<std::map<std::uint8_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$u8$v$usize$insert(
    std::map<std::uint8_t, std::size_t> *m, std::uint8_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$u8$v$usize$get_unchecked(
    std::map<std::uint8_t, std::size_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$u8$v$usize$get_unchecked_mut(
    std::map<std::uint8_t, std::size_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$usize$contains_key(
    std::map<std::uint8_t, std::size_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$usize$key_by_index(
    std::map<std::uint8_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$u8$v$usize$value_by_index(
    std::map<std::uint8_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$usize$len(
    std::map<std::uint8_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$usize$clear(
    std::map<std::uint8_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$usize$null(std::unique_ptr<std::map<std::uint8_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$usize$raw(std::unique_ptr<std::map<std::uint8_t, std::size_t>> *ptr,
                                                     std::map<std::uint8_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::size_t>>(raw);
}

const std::map<std::uint8_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u8$v$usize$get(const std::unique_ptr<std::map<std::uint8_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u8$v$usize$release(std::unique_ptr<std::map<std::uint8_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$usize$drop(std::unique_ptr<std::map<std::uint8_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$u8$v$isize$insert(
    std::map<std::uint8_t, rust::isize> *m, std::uint8_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$u8$v$isize$get_unchecked(
    std::map<std::uint8_t, rust::isize> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$u8$v$isize$get_unchecked_mut(
    std::map<std::uint8_t, rust::isize> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$isize$contains_key(
    std::map<std::uint8_t, rust::isize> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$isize$key_by_index(
    std::map<std::uint8_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$u8$v$isize$value_by_index(
    std::map<std::uint8_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$isize$len(
    std::map<std::uint8_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$isize$clear(
    std::map<std::uint8_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$isize$null(std::unique_ptr<std::map<std::uint8_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$isize$raw(std::unique_ptr<std::map<std::uint8_t, rust::isize>> *ptr,
                                                     std::map<std::uint8_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, rust::isize>>(raw);
}

const std::map<std::uint8_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u8$v$isize$get(const std::unique_ptr<std::map<std::uint8_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u8$v$isize$release(std::unique_ptr<std::map<std::uint8_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$isize$drop(std::unique_ptr<std::map<std::uint8_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$u8$v$bool$insert(
    std::map<std::uint8_t, bool> *m, std::uint8_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$u8$v$bool$get_unchecked(
    std::map<std::uint8_t, bool> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$u8$v$bool$get_unchecked_mut(
    std::map<std::uint8_t, bool> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$bool$contains_key(
    std::map<std::uint8_t, bool> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$bool$key_by_index(
    std::map<std::uint8_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$u8$v$bool$value_by_index(
    std::map<std::uint8_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$bool$len(
    std::map<std::uint8_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$bool$clear(
    std::map<std::uint8_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$bool$null(std::unique_ptr<std::map<std::uint8_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$bool$raw(std::unique_ptr<std::map<std::uint8_t, bool>> *ptr,
                                                    std::map<std::uint8_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, bool>>(raw);
}

const std::map<std::uint8_t, bool> *stdtybridge$unique_ptr$std$map$k$u8$v$bool$get(const std::unique_ptr<std::map<std::uint8_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, bool> *stdtybridge$unique_ptr$std$map$k$u8$v$bool$release(std::unique_ptr<std::map<std::uint8_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$bool$drop(std::unique_ptr<std::map<std::uint8_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U8 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$u8$v$string$insert(
    std::map<std::uint8_t, std::string> *m, std::uint8_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$u8$v$string$get_unchecked(
    std::map<std::uint8_t, std::string> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$u8$v$string$get_unchecked_mut(
    std::map<std::uint8_t, std::string> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$string$contains_key(
    std::map<std::uint8_t, std::string> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint8_t &stdtybridge$std$map$k$u8$v$string$key_by_index(
    std::map<std::uint8_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$u8$v$string$value_by_index(
    std::map<std::uint8_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u8$v$string$len(
    std::map<std::uint8_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u8$v$string$clear(
    std::map<std::uint8_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u8$v$string$null(std::unique_ptr<std::map<std::uint8_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$string$raw(std::unique_ptr<std::map<std::uint8_t, std::string>> *ptr,
                                                      std::map<std::uint8_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint8_t, std::string>>(raw);
}

const std::map<std::uint8_t, std::string> *stdtybridge$unique_ptr$std$map$k$u8$v$string$get(const std::unique_ptr<std::map<std::uint8_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint8_t, std::string> *stdtybridge$unique_ptr$std$map$k$u8$v$string$release(std::unique_ptr<std::map<std::uint8_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u8$v$string$drop(std::unique_ptr<std::map<std::uint8_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
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
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_U64

void stdtybridge$std$map$k$u16$v$u64$insert(
    std::map<std::uint16_t, std::uint64_t> *m, std::uint16_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$u16$v$u64$get_unchecked(
    std::map<std::uint16_t, std::uint64_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$u16$v$u64$get_unchecked_mut(
    std::map<std::uint16_t, std::uint64_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$u64$contains_key(
    std::map<std::uint16_t, std::uint64_t> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$u64$key_by_index(
    std::map<std::uint16_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$u16$v$u64$value_by_index(
    std::map<std::uint16_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$u64$len(
    std::map<std::uint16_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$u64$clear(
    std::map<std::uint16_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$u64$null(std::unique_ptr<std::map<std::uint16_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u64$raw(std::unique_ptr<std::map<std::uint16_t, std::uint64_t>> *ptr,
                                                    std::map<std::uint16_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::uint64_t>>(raw);
}

const std::map<std::uint16_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u64$get(const std::unique_ptr<std::map<std::uint16_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u16$v$u64$release(std::unique_ptr<std::map<std::uint16_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$u64$drop(std::unique_ptr<std::map<std::uint16_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_I8

void stdtybridge$std$map$k$u16$v$i8$insert(
    std::map<std::uint16_t, std::int8_t> *m, std::uint16_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$u16$v$i8$get_unchecked(
    std::map<std::uint16_t, std::int8_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$u16$v$i8$get_unchecked_mut(
    std::map<std::uint16_t, std::int8_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$i8$contains_key(
    std::map<std::uint16_t, std::int8_t> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$i8$key_by_index(
    std::map<std::uint16_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$u16$v$i8$value_by_index(
    std::map<std::uint16_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$i8$len(
    std::map<std::uint16_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$i8$clear(
    std::map<std::uint16_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$i8$null(std::unique_ptr<std::map<std::uint16_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i8$raw(std::unique_ptr<std::map<std::uint16_t, std::int8_t>> *ptr,
                                                   std::map<std::uint16_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int8_t>>(raw);
}

const std::map<std::uint16_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i8$get(const std::unique_ptr<std::map<std::uint16_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i8$release(std::unique_ptr<std::map<std::uint16_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i8$drop(std::unique_ptr<std::map<std::uint16_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_I16

void stdtybridge$std$map$k$u16$v$i16$insert(
    std::map<std::uint16_t, std::int16_t> *m, std::uint16_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$u16$v$i16$get_unchecked(
    std::map<std::uint16_t, std::int16_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$u16$v$i16$get_unchecked_mut(
    std::map<std::uint16_t, std::int16_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$i16$contains_key(
    std::map<std::uint16_t, std::int16_t> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$i16$key_by_index(
    std::map<std::uint16_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$u16$v$i16$value_by_index(
    std::map<std::uint16_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$i16$len(
    std::map<std::uint16_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$i16$clear(
    std::map<std::uint16_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$i16$null(std::unique_ptr<std::map<std::uint16_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i16$raw(std::unique_ptr<std::map<std::uint16_t, std::int16_t>> *ptr,
                                                    std::map<std::uint16_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int16_t>>(raw);
}

const std::map<std::uint16_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i16$get(const std::unique_ptr<std::map<std::uint16_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i16$release(std::unique_ptr<std::map<std::uint16_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i16$drop(std::unique_ptr<std::map<std::uint16_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_I32

void stdtybridge$std$map$k$u16$v$i32$insert(
    std::map<std::uint16_t, std::int32_t> *m, std::uint16_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$u16$v$i32$get_unchecked(
    std::map<std::uint16_t, std::int32_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$u16$v$i32$get_unchecked_mut(
    std::map<std::uint16_t, std::int32_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$i32$contains_key(
    std::map<std::uint16_t, std::int32_t> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$i32$key_by_index(
    std::map<std::uint16_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$u16$v$i32$value_by_index(
    std::map<std::uint16_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$i32$len(
    std::map<std::uint16_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$i32$clear(
    std::map<std::uint16_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$i32$null(std::unique_ptr<std::map<std::uint16_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i32$raw(std::unique_ptr<std::map<std::uint16_t, std::int32_t>> *ptr,
                                                    std::map<std::uint16_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int32_t>>(raw);
}

const std::map<std::uint16_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i32$get(const std::unique_ptr<std::map<std::uint16_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i32$release(std::unique_ptr<std::map<std::uint16_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i32$drop(std::unique_ptr<std::map<std::uint16_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_I64

void stdtybridge$std$map$k$u16$v$i64$insert(
    std::map<std::uint16_t, std::int64_t> *m, std::uint16_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$u16$v$i64$get_unchecked(
    std::map<std::uint16_t, std::int64_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$u16$v$i64$get_unchecked_mut(
    std::map<std::uint16_t, std::int64_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$i64$contains_key(
    std::map<std::uint16_t, std::int64_t> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$i64$key_by_index(
    std::map<std::uint16_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$u16$v$i64$value_by_index(
    std::map<std::uint16_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$i64$len(
    std::map<std::uint16_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$i64$clear(
    std::map<std::uint16_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$i64$null(std::unique_ptr<std::map<std::uint16_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i64$raw(std::unique_ptr<std::map<std::uint16_t, std::int64_t>> *ptr,
                                                    std::map<std::uint16_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::int64_t>>(raw);
}

const std::map<std::uint16_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i64$get(const std::unique_ptr<std::map<std::uint16_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u16$v$i64$release(std::unique_ptr<std::map<std::uint16_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$i64$drop(std::unique_ptr<std::map<std::uint16_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$u16$v$usize$insert(
    std::map<std::uint16_t, std::size_t> *m, std::uint16_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$u16$v$usize$get_unchecked(
    std::map<std::uint16_t, std::size_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$u16$v$usize$get_unchecked_mut(
    std::map<std::uint16_t, std::size_t> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$usize$contains_key(
    std::map<std::uint16_t, std::size_t> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$usize$key_by_index(
    std::map<std::uint16_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$u16$v$usize$value_by_index(
    std::map<std::uint16_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$usize$len(
    std::map<std::uint16_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$usize$clear(
    std::map<std::uint16_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$usize$null(std::unique_ptr<std::map<std::uint16_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$usize$raw(std::unique_ptr<std::map<std::uint16_t, std::size_t>> *ptr,
                                                      std::map<std::uint16_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::size_t>>(raw);
}

const std::map<std::uint16_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u16$v$usize$get(const std::unique_ptr<std::map<std::uint16_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u16$v$usize$release(std::unique_ptr<std::map<std::uint16_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$usize$drop(std::unique_ptr<std::map<std::uint16_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$u16$v$isize$insert(
    std::map<std::uint16_t, rust::isize> *m, std::uint16_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$u16$v$isize$get_unchecked(
    std::map<std::uint16_t, rust::isize> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$u16$v$isize$get_unchecked_mut(
    std::map<std::uint16_t, rust::isize> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$isize$contains_key(
    std::map<std::uint16_t, rust::isize> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$isize$key_by_index(
    std::map<std::uint16_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$u16$v$isize$value_by_index(
    std::map<std::uint16_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$isize$len(
    std::map<std::uint16_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$isize$clear(
    std::map<std::uint16_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$isize$null(std::unique_ptr<std::map<std::uint16_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$isize$raw(std::unique_ptr<std::map<std::uint16_t, rust::isize>> *ptr,
                                                      std::map<std::uint16_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, rust::isize>>(raw);
}

const std::map<std::uint16_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u16$v$isize$get(const std::unique_ptr<std::map<std::uint16_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u16$v$isize$release(std::unique_ptr<std::map<std::uint16_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$isize$drop(std::unique_ptr<std::map<std::uint16_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$u16$v$bool$insert(
    std::map<std::uint16_t, bool> *m, std::uint16_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$u16$v$bool$get_unchecked(
    std::map<std::uint16_t, bool> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$u16$v$bool$get_unchecked_mut(
    std::map<std::uint16_t, bool> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$bool$contains_key(
    std::map<std::uint16_t, bool> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$bool$key_by_index(
    std::map<std::uint16_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$u16$v$bool$value_by_index(
    std::map<std::uint16_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$bool$len(
    std::map<std::uint16_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$bool$clear(
    std::map<std::uint16_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$bool$null(std::unique_ptr<std::map<std::uint16_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$bool$raw(std::unique_ptr<std::map<std::uint16_t, bool>> *ptr,
                                                     std::map<std::uint16_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, bool>>(raw);
}

const std::map<std::uint16_t, bool> *stdtybridge$unique_ptr$std$map$k$u16$v$bool$get(const std::unique_ptr<std::map<std::uint16_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, bool> *stdtybridge$unique_ptr$std$map$k$u16$v$bool$release(std::unique_ptr<std::map<std::uint16_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$bool$drop(std::unique_ptr<std::map<std::uint16_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U16 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$u16$v$string$insert(
    std::map<std::uint16_t, std::string> *m, std::uint16_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$u16$v$string$get_unchecked(
    std::map<std::uint16_t, std::string> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$u16$v$string$get_unchecked_mut(
    std::map<std::uint16_t, std::string> *m, std::uint16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u16$v$string$contains_key(
    std::map<std::uint16_t, std::string> *m, std::uint16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint16_t &stdtybridge$std$map$k$u16$v$string$key_by_index(
    std::map<std::uint16_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$u16$v$string$value_by_index(
    std::map<std::uint16_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u16$v$string$len(
    std::map<std::uint16_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u16$v$string$clear(
    std::map<std::uint16_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u16$v$string$null(std::unique_ptr<std::map<std::uint16_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$string$raw(std::unique_ptr<std::map<std::uint16_t, std::string>> *ptr,
                                                       std::map<std::uint16_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint16_t, std::string>>(raw);
}

const std::map<std::uint16_t, std::string> *stdtybridge$unique_ptr$std$map$k$u16$v$string$get(const std::unique_ptr<std::map<std::uint16_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint16_t, std::string> *stdtybridge$unique_ptr$std$map$k$u16$v$string$release(std::unique_ptr<std::map<std::uint16_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u16$v$string$drop(std::unique_ptr<std::map<std::uint16_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
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
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_U64

void stdtybridge$std$map$k$u32$v$u64$insert(
    std::map<std::uint32_t, std::uint64_t> *m, std::uint32_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$u32$v$u64$get_unchecked(
    std::map<std::uint32_t, std::uint64_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$u32$v$u64$get_unchecked_mut(
    std::map<std::uint32_t, std::uint64_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$u64$contains_key(
    std::map<std::uint32_t, std::uint64_t> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$u64$key_by_index(
    std::map<std::uint32_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$u32$v$u64$value_by_index(
    std::map<std::uint32_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$u64$len(
    std::map<std::uint32_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$u64$clear(
    std::map<std::uint32_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$u64$null(std::unique_ptr<std::map<std::uint32_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u64$raw(std::unique_ptr<std::map<std::uint32_t, std::uint64_t>> *ptr,
                                                    std::map<std::uint32_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::uint64_t>>(raw);
}

const std::map<std::uint32_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u64$get(const std::unique_ptr<std::map<std::uint32_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u32$v$u64$release(std::unique_ptr<std::map<std::uint32_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$u64$drop(std::unique_ptr<std::map<std::uint32_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_I8

void stdtybridge$std$map$k$u32$v$i8$insert(
    std::map<std::uint32_t, std::int8_t> *m, std::uint32_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$u32$v$i8$get_unchecked(
    std::map<std::uint32_t, std::int8_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$u32$v$i8$get_unchecked_mut(
    std::map<std::uint32_t, std::int8_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$i8$contains_key(
    std::map<std::uint32_t, std::int8_t> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$i8$key_by_index(
    std::map<std::uint32_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$u32$v$i8$value_by_index(
    std::map<std::uint32_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$i8$len(
    std::map<std::uint32_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$i8$clear(
    std::map<std::uint32_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$i8$null(std::unique_ptr<std::map<std::uint32_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i8$raw(std::unique_ptr<std::map<std::uint32_t, std::int8_t>> *ptr,
                                                   std::map<std::uint32_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int8_t>>(raw);
}

const std::map<std::uint32_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i8$get(const std::unique_ptr<std::map<std::uint32_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i8$release(std::unique_ptr<std::map<std::uint32_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i8$drop(std::unique_ptr<std::map<std::uint32_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_I16

void stdtybridge$std$map$k$u32$v$i16$insert(
    std::map<std::uint32_t, std::int16_t> *m, std::uint32_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$u32$v$i16$get_unchecked(
    std::map<std::uint32_t, std::int16_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$u32$v$i16$get_unchecked_mut(
    std::map<std::uint32_t, std::int16_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$i16$contains_key(
    std::map<std::uint32_t, std::int16_t> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$i16$key_by_index(
    std::map<std::uint32_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$u32$v$i16$value_by_index(
    std::map<std::uint32_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$i16$len(
    std::map<std::uint32_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$i16$clear(
    std::map<std::uint32_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$i16$null(std::unique_ptr<std::map<std::uint32_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i16$raw(std::unique_ptr<std::map<std::uint32_t, std::int16_t>> *ptr,
                                                    std::map<std::uint32_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int16_t>>(raw);
}

const std::map<std::uint32_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i16$get(const std::unique_ptr<std::map<std::uint32_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i16$release(std::unique_ptr<std::map<std::uint32_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i16$drop(std::unique_ptr<std::map<std::uint32_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_I32

void stdtybridge$std$map$k$u32$v$i32$insert(
    std::map<std::uint32_t, std::int32_t> *m, std::uint32_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$u32$v$i32$get_unchecked(
    std::map<std::uint32_t, std::int32_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$u32$v$i32$get_unchecked_mut(
    std::map<std::uint32_t, std::int32_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$i32$contains_key(
    std::map<std::uint32_t, std::int32_t> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$i32$key_by_index(
    std::map<std::uint32_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$u32$v$i32$value_by_index(
    std::map<std::uint32_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$i32$len(
    std::map<std::uint32_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$i32$clear(
    std::map<std::uint32_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$i32$null(std::unique_ptr<std::map<std::uint32_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i32$raw(std::unique_ptr<std::map<std::uint32_t, std::int32_t>> *ptr,
                                                    std::map<std::uint32_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int32_t>>(raw);
}

const std::map<std::uint32_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i32$get(const std::unique_ptr<std::map<std::uint32_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i32$release(std::unique_ptr<std::map<std::uint32_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i32$drop(std::unique_ptr<std::map<std::uint32_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_I64

void stdtybridge$std$map$k$u32$v$i64$insert(
    std::map<std::uint32_t, std::int64_t> *m, std::uint32_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$u32$v$i64$get_unchecked(
    std::map<std::uint32_t, std::int64_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$u32$v$i64$get_unchecked_mut(
    std::map<std::uint32_t, std::int64_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$i64$contains_key(
    std::map<std::uint32_t, std::int64_t> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$i64$key_by_index(
    std::map<std::uint32_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$u32$v$i64$value_by_index(
    std::map<std::uint32_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$i64$len(
    std::map<std::uint32_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$i64$clear(
    std::map<std::uint32_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$i64$null(std::unique_ptr<std::map<std::uint32_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i64$raw(std::unique_ptr<std::map<std::uint32_t, std::int64_t>> *ptr,
                                                    std::map<std::uint32_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::int64_t>>(raw);
}

const std::map<std::uint32_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i64$get(const std::unique_ptr<std::map<std::uint32_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u32$v$i64$release(std::unique_ptr<std::map<std::uint32_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$i64$drop(std::unique_ptr<std::map<std::uint32_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$u32$v$usize$insert(
    std::map<std::uint32_t, std::size_t> *m, std::uint32_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$u32$v$usize$get_unchecked(
    std::map<std::uint32_t, std::size_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$u32$v$usize$get_unchecked_mut(
    std::map<std::uint32_t, std::size_t> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$usize$contains_key(
    std::map<std::uint32_t, std::size_t> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$usize$key_by_index(
    std::map<std::uint32_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$u32$v$usize$value_by_index(
    std::map<std::uint32_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$usize$len(
    std::map<std::uint32_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$usize$clear(
    std::map<std::uint32_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$usize$null(std::unique_ptr<std::map<std::uint32_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$usize$raw(std::unique_ptr<std::map<std::uint32_t, std::size_t>> *ptr,
                                                      std::map<std::uint32_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::size_t>>(raw);
}

const std::map<std::uint32_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u32$v$usize$get(const std::unique_ptr<std::map<std::uint32_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u32$v$usize$release(std::unique_ptr<std::map<std::uint32_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$usize$drop(std::unique_ptr<std::map<std::uint32_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$u32$v$isize$insert(
    std::map<std::uint32_t, rust::isize> *m, std::uint32_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$u32$v$isize$get_unchecked(
    std::map<std::uint32_t, rust::isize> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$u32$v$isize$get_unchecked_mut(
    std::map<std::uint32_t, rust::isize> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$isize$contains_key(
    std::map<std::uint32_t, rust::isize> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$isize$key_by_index(
    std::map<std::uint32_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$u32$v$isize$value_by_index(
    std::map<std::uint32_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$isize$len(
    std::map<std::uint32_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$isize$clear(
    std::map<std::uint32_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$isize$null(std::unique_ptr<std::map<std::uint32_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$isize$raw(std::unique_ptr<std::map<std::uint32_t, rust::isize>> *ptr,
                                                      std::map<std::uint32_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, rust::isize>>(raw);
}

const std::map<std::uint32_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u32$v$isize$get(const std::unique_ptr<std::map<std::uint32_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u32$v$isize$release(std::unique_ptr<std::map<std::uint32_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$isize$drop(std::unique_ptr<std::map<std::uint32_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$u32$v$bool$insert(
    std::map<std::uint32_t, bool> *m, std::uint32_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$u32$v$bool$get_unchecked(
    std::map<std::uint32_t, bool> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$u32$v$bool$get_unchecked_mut(
    std::map<std::uint32_t, bool> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$bool$contains_key(
    std::map<std::uint32_t, bool> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$bool$key_by_index(
    std::map<std::uint32_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$u32$v$bool$value_by_index(
    std::map<std::uint32_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$bool$len(
    std::map<std::uint32_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$bool$clear(
    std::map<std::uint32_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$bool$null(std::unique_ptr<std::map<std::uint32_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$bool$raw(std::unique_ptr<std::map<std::uint32_t, bool>> *ptr,
                                                     std::map<std::uint32_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, bool>>(raw);
}

const std::map<std::uint32_t, bool> *stdtybridge$unique_ptr$std$map$k$u32$v$bool$get(const std::unique_ptr<std::map<std::uint32_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, bool> *stdtybridge$unique_ptr$std$map$k$u32$v$bool$release(std::unique_ptr<std::map<std::uint32_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$bool$drop(std::unique_ptr<std::map<std::uint32_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U32 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$u32$v$string$insert(
    std::map<std::uint32_t, std::string> *m, std::uint32_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$u32$v$string$get_unchecked(
    std::map<std::uint32_t, std::string> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$u32$v$string$get_unchecked_mut(
    std::map<std::uint32_t, std::string> *m, std::uint32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u32$v$string$contains_key(
    std::map<std::uint32_t, std::string> *m, std::uint32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint32_t &stdtybridge$std$map$k$u32$v$string$key_by_index(
    std::map<std::uint32_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$u32$v$string$value_by_index(
    std::map<std::uint32_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u32$v$string$len(
    std::map<std::uint32_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u32$v$string$clear(
    std::map<std::uint32_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u32$v$string$null(std::unique_ptr<std::map<std::uint32_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$string$raw(std::unique_ptr<std::map<std::uint32_t, std::string>> *ptr,
                                                       std::map<std::uint32_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint32_t, std::string>>(raw);
}

const std::map<std::uint32_t, std::string> *stdtybridge$unique_ptr$std$map$k$u32$v$string$get(const std::unique_ptr<std::map<std::uint32_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint32_t, std::string> *stdtybridge$unique_ptr$std$map$k$u32$v$string$release(std::unique_ptr<std::map<std::uint32_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u32$v$string$drop(std::unique_ptr<std::map<std::uint32_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_U8

void stdtybridge$std$map$k$u64$v$u8$insert(
    std::map<std::uint64_t, std::uint8_t> *m, std::uint64_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$u64$v$u8$get_unchecked(
    std::map<std::uint64_t, std::uint8_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$u64$v$u8$get_unchecked_mut(
    std::map<std::uint64_t, std::uint8_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$u8$contains_key(
    std::map<std::uint64_t, std::uint8_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$u8$key_by_index(
    std::map<std::uint64_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$u64$v$u8$value_by_index(
    std::map<std::uint64_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$u8$len(
    std::map<std::uint64_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$u8$clear(
    std::map<std::uint64_t, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$u8$null(std::unique_ptr<std::map<std::uint64_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u8$raw(std::unique_ptr<std::map<std::uint64_t, std::uint8_t>> *ptr,
                                                   std::map<std::uint64_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint8_t>>(raw);
}

const std::map<std::uint64_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u8$get(const std::unique_ptr<std::map<std::uint64_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u8$release(std::unique_ptr<std::map<std::uint64_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u8$drop(std::unique_ptr<std::map<std::uint64_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_U16

void stdtybridge$std$map$k$u64$v$u16$insert(
    std::map<std::uint64_t, std::uint16_t> *m, std::uint64_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$u64$v$u16$get_unchecked(
    std::map<std::uint64_t, std::uint16_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$u64$v$u16$get_unchecked_mut(
    std::map<std::uint64_t, std::uint16_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$u16$contains_key(
    std::map<std::uint64_t, std::uint16_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$u16$key_by_index(
    std::map<std::uint64_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$u64$v$u16$value_by_index(
    std::map<std::uint64_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$u16$len(
    std::map<std::uint64_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$u16$clear(
    std::map<std::uint64_t, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$u16$null(std::unique_ptr<std::map<std::uint64_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u16$raw(std::unique_ptr<std::map<std::uint64_t, std::uint16_t>> *ptr,
                                                    std::map<std::uint64_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint16_t>>(raw);
}

const std::map<std::uint64_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u16$get(const std::unique_ptr<std::map<std::uint64_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u16$release(std::unique_ptr<std::map<std::uint64_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u16$drop(std::unique_ptr<std::map<std::uint64_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_U32

void stdtybridge$std$map$k$u64$v$u32$insert(
    std::map<std::uint64_t, std::uint32_t> *m, std::uint64_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$u64$v$u32$get_unchecked(
    std::map<std::uint64_t, std::uint32_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$u64$v$u32$get_unchecked_mut(
    std::map<std::uint64_t, std::uint32_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$u32$contains_key(
    std::map<std::uint64_t, std::uint32_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$u32$key_by_index(
    std::map<std::uint64_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$u64$v$u32$value_by_index(
    std::map<std::uint64_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$u32$len(
    std::map<std::uint64_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$u32$clear(
    std::map<std::uint64_t, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$u32$null(std::unique_ptr<std::map<std::uint64_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u32$raw(std::unique_ptr<std::map<std::uint64_t, std::uint32_t>> *ptr,
                                                    std::map<std::uint64_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint32_t>>(raw);
}

const std::map<std::uint64_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u32$get(const std::unique_ptr<std::map<std::uint64_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u32$release(std::unique_ptr<std::map<std::uint64_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u32$drop(std::unique_ptr<std::map<std::uint64_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_U64

void stdtybridge$std$map$k$u64$v$u64$insert(
    std::map<std::uint64_t, std::uint64_t> *m, std::uint64_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$u64$v$u64$get_unchecked(
    std::map<std::uint64_t, std::uint64_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$u64$v$u64$get_unchecked_mut(
    std::map<std::uint64_t, std::uint64_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$u64$contains_key(
    std::map<std::uint64_t, std::uint64_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$u64$key_by_index(
    std::map<std::uint64_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$u64$value_by_index(
    std::map<std::uint64_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$u64$len(
    std::map<std::uint64_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$u64$clear(
    std::map<std::uint64_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$u64$null(std::unique_ptr<std::map<std::uint64_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u64$raw(std::unique_ptr<std::map<std::uint64_t, std::uint64_t>> *ptr,
                                                    std::map<std::uint64_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::uint64_t>>(raw);
}

const std::map<std::uint64_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u64$get(const std::unique_ptr<std::map<std::uint64_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$u64$v$u64$release(std::unique_ptr<std::map<std::uint64_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$u64$drop(std::unique_ptr<std::map<std::uint64_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_I8

void stdtybridge$std$map$k$u64$v$i8$insert(
    std::map<std::uint64_t, std::int8_t> *m, std::uint64_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$u64$v$i8$get_unchecked(
    std::map<std::uint64_t, std::int8_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$u64$v$i8$get_unchecked_mut(
    std::map<std::uint64_t, std::int8_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$i8$contains_key(
    std::map<std::uint64_t, std::int8_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$i8$key_by_index(
    std::map<std::uint64_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$u64$v$i8$value_by_index(
    std::map<std::uint64_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$i8$len(
    std::map<std::uint64_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$i8$clear(
    std::map<std::uint64_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$i8$null(std::unique_ptr<std::map<std::uint64_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i8$raw(std::unique_ptr<std::map<std::uint64_t, std::int8_t>> *ptr,
                                                   std::map<std::uint64_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int8_t>>(raw);
}

const std::map<std::uint64_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i8$get(const std::unique_ptr<std::map<std::uint64_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i8$release(std::unique_ptr<std::map<std::uint64_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i8$drop(std::unique_ptr<std::map<std::uint64_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_I16

void stdtybridge$std$map$k$u64$v$i16$insert(
    std::map<std::uint64_t, std::int16_t> *m, std::uint64_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$u64$v$i16$get_unchecked(
    std::map<std::uint64_t, std::int16_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$u64$v$i16$get_unchecked_mut(
    std::map<std::uint64_t, std::int16_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$i16$contains_key(
    std::map<std::uint64_t, std::int16_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$i16$key_by_index(
    std::map<std::uint64_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$u64$v$i16$value_by_index(
    std::map<std::uint64_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$i16$len(
    std::map<std::uint64_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$i16$clear(
    std::map<std::uint64_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$i16$null(std::unique_ptr<std::map<std::uint64_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i16$raw(std::unique_ptr<std::map<std::uint64_t, std::int16_t>> *ptr,
                                                    std::map<std::uint64_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int16_t>>(raw);
}

const std::map<std::uint64_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i16$get(const std::unique_ptr<std::map<std::uint64_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i16$release(std::unique_ptr<std::map<std::uint64_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i16$drop(std::unique_ptr<std::map<std::uint64_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_I32

void stdtybridge$std$map$k$u64$v$i32$insert(
    std::map<std::uint64_t, std::int32_t> *m, std::uint64_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$u64$v$i32$get_unchecked(
    std::map<std::uint64_t, std::int32_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$u64$v$i32$get_unchecked_mut(
    std::map<std::uint64_t, std::int32_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$i32$contains_key(
    std::map<std::uint64_t, std::int32_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$i32$key_by_index(
    std::map<std::uint64_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$u64$v$i32$value_by_index(
    std::map<std::uint64_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$i32$len(
    std::map<std::uint64_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$i32$clear(
    std::map<std::uint64_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$i32$null(std::unique_ptr<std::map<std::uint64_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i32$raw(std::unique_ptr<std::map<std::uint64_t, std::int32_t>> *ptr,
                                                    std::map<std::uint64_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int32_t>>(raw);
}

const std::map<std::uint64_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i32$get(const std::unique_ptr<std::map<std::uint64_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i32$release(std::unique_ptr<std::map<std::uint64_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i32$drop(std::unique_ptr<std::map<std::uint64_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_I64

void stdtybridge$std$map$k$u64$v$i64$insert(
    std::map<std::uint64_t, std::int64_t> *m, std::uint64_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$u64$v$i64$get_unchecked(
    std::map<std::uint64_t, std::int64_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$u64$v$i64$get_unchecked_mut(
    std::map<std::uint64_t, std::int64_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$i64$contains_key(
    std::map<std::uint64_t, std::int64_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$i64$key_by_index(
    std::map<std::uint64_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$u64$v$i64$value_by_index(
    std::map<std::uint64_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$i64$len(
    std::map<std::uint64_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$i64$clear(
    std::map<std::uint64_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$i64$null(std::unique_ptr<std::map<std::uint64_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i64$raw(std::unique_ptr<std::map<std::uint64_t, std::int64_t>> *ptr,
                                                    std::map<std::uint64_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::int64_t>>(raw);
}

const std::map<std::uint64_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i64$get(const std::unique_ptr<std::map<std::uint64_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$u64$v$i64$release(std::unique_ptr<std::map<std::uint64_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$i64$drop(std::unique_ptr<std::map<std::uint64_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$u64$v$usize$insert(
    std::map<std::uint64_t, std::size_t> *m, std::uint64_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$u64$v$usize$get_unchecked(
    std::map<std::uint64_t, std::size_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$u64$v$usize$get_unchecked_mut(
    std::map<std::uint64_t, std::size_t> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$usize$contains_key(
    std::map<std::uint64_t, std::size_t> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$usize$key_by_index(
    std::map<std::uint64_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$u64$v$usize$value_by_index(
    std::map<std::uint64_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$usize$len(
    std::map<std::uint64_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$usize$clear(
    std::map<std::uint64_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$usize$null(std::unique_ptr<std::map<std::uint64_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$usize$raw(std::unique_ptr<std::map<std::uint64_t, std::size_t>> *ptr,
                                                      std::map<std::uint64_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::size_t>>(raw);
}

const std::map<std::uint64_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u64$v$usize$get(const std::unique_ptr<std::map<std::uint64_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$u64$v$usize$release(std::unique_ptr<std::map<std::uint64_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$usize$drop(std::unique_ptr<std::map<std::uint64_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$u64$v$isize$insert(
    std::map<std::uint64_t, rust::isize> *m, std::uint64_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$u64$v$isize$get_unchecked(
    std::map<std::uint64_t, rust::isize> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$u64$v$isize$get_unchecked_mut(
    std::map<std::uint64_t, rust::isize> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$isize$contains_key(
    std::map<std::uint64_t, rust::isize> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$isize$key_by_index(
    std::map<std::uint64_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$u64$v$isize$value_by_index(
    std::map<std::uint64_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$isize$len(
    std::map<std::uint64_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$isize$clear(
    std::map<std::uint64_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$isize$null(std::unique_ptr<std::map<std::uint64_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$isize$raw(std::unique_ptr<std::map<std::uint64_t, rust::isize>> *ptr,
                                                      std::map<std::uint64_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, rust::isize>>(raw);
}

const std::map<std::uint64_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u64$v$isize$get(const std::unique_ptr<std::map<std::uint64_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$u64$v$isize$release(std::unique_ptr<std::map<std::uint64_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$isize$drop(std::unique_ptr<std::map<std::uint64_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$u64$v$bool$insert(
    std::map<std::uint64_t, bool> *m, std::uint64_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$u64$v$bool$get_unchecked(
    std::map<std::uint64_t, bool> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$u64$v$bool$get_unchecked_mut(
    std::map<std::uint64_t, bool> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$bool$contains_key(
    std::map<std::uint64_t, bool> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$bool$key_by_index(
    std::map<std::uint64_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$u64$v$bool$value_by_index(
    std::map<std::uint64_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$bool$len(
    std::map<std::uint64_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$bool$clear(
    std::map<std::uint64_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$bool$null(std::unique_ptr<std::map<std::uint64_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$bool$raw(std::unique_ptr<std::map<std::uint64_t, bool>> *ptr,
                                                     std::map<std::uint64_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, bool>>(raw);
}

const std::map<std::uint64_t, bool> *stdtybridge$unique_ptr$std$map$k$u64$v$bool$get(const std::unique_ptr<std::map<std::uint64_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, bool> *stdtybridge$unique_ptr$std$map$k$u64$v$bool$release(std::unique_ptr<std::map<std::uint64_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$bool$drop(std::unique_ptr<std::map<std::uint64_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_U64 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$u64$v$string$insert(
    std::map<std::uint64_t, std::string> *m, std::uint64_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$u64$v$string$get_unchecked(
    std::map<std::uint64_t, std::string> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$u64$v$string$get_unchecked_mut(
    std::map<std::uint64_t, std::string> *m, std::uint64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u64$v$string$contains_key(
    std::map<std::uint64_t, std::string> *m, std::uint64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::uint64_t &stdtybridge$std$map$k$u64$v$string$key_by_index(
    std::map<std::uint64_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$u64$v$string$value_by_index(
    std::map<std::uint64_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$u64$v$string$len(
    std::map<std::uint64_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$u64$v$string$clear(
    std::map<std::uint64_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$u64$v$string$null(std::unique_ptr<std::map<std::uint64_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$string$raw(std::unique_ptr<std::map<std::uint64_t, std::string>> *ptr,
                                                       std::map<std::uint64_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::uint64_t, std::string>>(raw);
}

const std::map<std::uint64_t, std::string> *stdtybridge$unique_ptr$std$map$k$u64$v$string$get(const std::unique_ptr<std::map<std::uint64_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::uint64_t, std::string> *stdtybridge$unique_ptr$std$map$k$u64$v$string$release(std::unique_ptr<std::map<std::uint64_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$u64$v$string$drop(std::unique_ptr<std::map<std::uint64_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_U8

void stdtybridge$std$map$k$i8$v$u8$insert(
    std::map<std::int8_t, std::uint8_t> *m, std::int8_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$i8$v$u8$get_unchecked(
    std::map<std::int8_t, std::uint8_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$i8$v$u8$get_unchecked_mut(
    std::map<std::int8_t, std::uint8_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$u8$contains_key(
    std::map<std::int8_t, std::uint8_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$u8$key_by_index(
    std::map<std::int8_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$i8$v$u8$value_by_index(
    std::map<std::int8_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$u8$len(
    std::map<std::int8_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$u8$clear(
    std::map<std::int8_t, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$u8$null(std::unique_ptr<std::map<std::int8_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u8$raw(std::unique_ptr<std::map<std::int8_t, std::uint8_t>> *ptr,
                                                  std::map<std::int8_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint8_t>>(raw);
}

const std::map<std::int8_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u8$get(const std::unique_ptr<std::map<std::int8_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u8$release(std::unique_ptr<std::map<std::int8_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u8$drop(std::unique_ptr<std::map<std::int8_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_U16

void stdtybridge$std$map$k$i8$v$u16$insert(
    std::map<std::int8_t, std::uint16_t> *m, std::int8_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$i8$v$u16$get_unchecked(
    std::map<std::int8_t, std::uint16_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$i8$v$u16$get_unchecked_mut(
    std::map<std::int8_t, std::uint16_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$u16$contains_key(
    std::map<std::int8_t, std::uint16_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$u16$key_by_index(
    std::map<std::int8_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$i8$v$u16$value_by_index(
    std::map<std::int8_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$u16$len(
    std::map<std::int8_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$u16$clear(
    std::map<std::int8_t, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$u16$null(std::unique_ptr<std::map<std::int8_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u16$raw(std::unique_ptr<std::map<std::int8_t, std::uint16_t>> *ptr,
                                                   std::map<std::int8_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint16_t>>(raw);
}

const std::map<std::int8_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u16$get(const std::unique_ptr<std::map<std::int8_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u16$release(std::unique_ptr<std::map<std::int8_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u16$drop(std::unique_ptr<std::map<std::int8_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_U32

void stdtybridge$std$map$k$i8$v$u32$insert(
    std::map<std::int8_t, std::uint32_t> *m, std::int8_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$i8$v$u32$get_unchecked(
    std::map<std::int8_t, std::uint32_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$i8$v$u32$get_unchecked_mut(
    std::map<std::int8_t, std::uint32_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$u32$contains_key(
    std::map<std::int8_t, std::uint32_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$u32$key_by_index(
    std::map<std::int8_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$i8$v$u32$value_by_index(
    std::map<std::int8_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$u32$len(
    std::map<std::int8_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$u32$clear(
    std::map<std::int8_t, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$u32$null(std::unique_ptr<std::map<std::int8_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u32$raw(std::unique_ptr<std::map<std::int8_t, std::uint32_t>> *ptr,
                                                   std::map<std::int8_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint32_t>>(raw);
}

const std::map<std::int8_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u32$get(const std::unique_ptr<std::map<std::int8_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u32$release(std::unique_ptr<std::map<std::int8_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u32$drop(std::unique_ptr<std::map<std::int8_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_U64

void stdtybridge$std$map$k$i8$v$u64$insert(
    std::map<std::int8_t, std::uint64_t> *m, std::int8_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$i8$v$u64$get_unchecked(
    std::map<std::int8_t, std::uint64_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$i8$v$u64$get_unchecked_mut(
    std::map<std::int8_t, std::uint64_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$u64$contains_key(
    std::map<std::int8_t, std::uint64_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$u64$key_by_index(
    std::map<std::int8_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$i8$v$u64$value_by_index(
    std::map<std::int8_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$u64$len(
    std::map<std::int8_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$u64$clear(
    std::map<std::int8_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$u64$null(std::unique_ptr<std::map<std::int8_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u64$raw(std::unique_ptr<std::map<std::int8_t, std::uint64_t>> *ptr,
                                                   std::map<std::int8_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::uint64_t>>(raw);
}

const std::map<std::int8_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u64$get(const std::unique_ptr<std::map<std::int8_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i8$v$u64$release(std::unique_ptr<std::map<std::int8_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$u64$drop(std::unique_ptr<std::map<std::int8_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_I8

void stdtybridge$std$map$k$i8$v$i8$insert(
    std::map<std::int8_t, std::int8_t> *m, std::int8_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$i8$v$i8$get_unchecked(
    std::map<std::int8_t, std::int8_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$i8$v$i8$get_unchecked_mut(
    std::map<std::int8_t, std::int8_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$i8$contains_key(
    std::map<std::int8_t, std::int8_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$i8$key_by_index(
    std::map<std::int8_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$i8$value_by_index(
    std::map<std::int8_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$i8$len(
    std::map<std::int8_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$i8$clear(
    std::map<std::int8_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$i8$null(std::unique_ptr<std::map<std::int8_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i8$raw(std::unique_ptr<std::map<std::int8_t, std::int8_t>> *ptr,
                                                  std::map<std::int8_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int8_t>>(raw);
}

const std::map<std::int8_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i8$get(const std::unique_ptr<std::map<std::int8_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i8$release(std::unique_ptr<std::map<std::int8_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i8$drop(std::unique_ptr<std::map<std::int8_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_I16

void stdtybridge$std$map$k$i8$v$i16$insert(
    std::map<std::int8_t, std::int16_t> *m, std::int8_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$i8$v$i16$get_unchecked(
    std::map<std::int8_t, std::int16_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$i8$v$i16$get_unchecked_mut(
    std::map<std::int8_t, std::int16_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$i16$contains_key(
    std::map<std::int8_t, std::int16_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$i16$key_by_index(
    std::map<std::int8_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$i8$v$i16$value_by_index(
    std::map<std::int8_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$i16$len(
    std::map<std::int8_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$i16$clear(
    std::map<std::int8_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$i16$null(std::unique_ptr<std::map<std::int8_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i16$raw(std::unique_ptr<std::map<std::int8_t, std::int16_t>> *ptr,
                                                   std::map<std::int8_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int16_t>>(raw);
}

const std::map<std::int8_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i16$get(const std::unique_ptr<std::map<std::int8_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i16$release(std::unique_ptr<std::map<std::int8_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i16$drop(std::unique_ptr<std::map<std::int8_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_I32

void stdtybridge$std$map$k$i8$v$i32$insert(
    std::map<std::int8_t, std::int32_t> *m, std::int8_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$i8$v$i32$get_unchecked(
    std::map<std::int8_t, std::int32_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$i8$v$i32$get_unchecked_mut(
    std::map<std::int8_t, std::int32_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$i32$contains_key(
    std::map<std::int8_t, std::int32_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$i32$key_by_index(
    std::map<std::int8_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$i8$v$i32$value_by_index(
    std::map<std::int8_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$i32$len(
    std::map<std::int8_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$i32$clear(
    std::map<std::int8_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$i32$null(std::unique_ptr<std::map<std::int8_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i32$raw(std::unique_ptr<std::map<std::int8_t, std::int32_t>> *ptr,
                                                   std::map<std::int8_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int32_t>>(raw);
}

const std::map<std::int8_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i32$get(const std::unique_ptr<std::map<std::int8_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i32$release(std::unique_ptr<std::map<std::int8_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i32$drop(std::unique_ptr<std::map<std::int8_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_I64

void stdtybridge$std$map$k$i8$v$i64$insert(
    std::map<std::int8_t, std::int64_t> *m, std::int8_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$i8$v$i64$get_unchecked(
    std::map<std::int8_t, std::int64_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$i8$v$i64$get_unchecked_mut(
    std::map<std::int8_t, std::int64_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$i64$contains_key(
    std::map<std::int8_t, std::int64_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$i64$key_by_index(
    std::map<std::int8_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$i8$v$i64$value_by_index(
    std::map<std::int8_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$i64$len(
    std::map<std::int8_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$i64$clear(
    std::map<std::int8_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$i64$null(std::unique_ptr<std::map<std::int8_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i64$raw(std::unique_ptr<std::map<std::int8_t, std::int64_t>> *ptr,
                                                   std::map<std::int8_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::int64_t>>(raw);
}

const std::map<std::int8_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i64$get(const std::unique_ptr<std::map<std::int8_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i8$v$i64$release(std::unique_ptr<std::map<std::int8_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$i64$drop(std::unique_ptr<std::map<std::int8_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$i8$v$usize$insert(
    std::map<std::int8_t, std::size_t> *m, std::int8_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$i8$v$usize$get_unchecked(
    std::map<std::int8_t, std::size_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$i8$v$usize$get_unchecked_mut(
    std::map<std::int8_t, std::size_t> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$usize$contains_key(
    std::map<std::int8_t, std::size_t> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$usize$key_by_index(
    std::map<std::int8_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$i8$v$usize$value_by_index(
    std::map<std::int8_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$usize$len(
    std::map<std::int8_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$usize$clear(
    std::map<std::int8_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$usize$null(std::unique_ptr<std::map<std::int8_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$usize$raw(std::unique_ptr<std::map<std::int8_t, std::size_t>> *ptr,
                                                     std::map<std::int8_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::size_t>>(raw);
}

const std::map<std::int8_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i8$v$usize$get(const std::unique_ptr<std::map<std::int8_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i8$v$usize$release(std::unique_ptr<std::map<std::int8_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$usize$drop(std::unique_ptr<std::map<std::int8_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$i8$v$isize$insert(
    std::map<std::int8_t, rust::isize> *m, std::int8_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$i8$v$isize$get_unchecked(
    std::map<std::int8_t, rust::isize> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$i8$v$isize$get_unchecked_mut(
    std::map<std::int8_t, rust::isize> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$isize$contains_key(
    std::map<std::int8_t, rust::isize> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$isize$key_by_index(
    std::map<std::int8_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$i8$v$isize$value_by_index(
    std::map<std::int8_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$isize$len(
    std::map<std::int8_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$isize$clear(
    std::map<std::int8_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$isize$null(std::unique_ptr<std::map<std::int8_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$isize$raw(std::unique_ptr<std::map<std::int8_t, rust::isize>> *ptr,
                                                     std::map<std::int8_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, rust::isize>>(raw);
}

const std::map<std::int8_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i8$v$isize$get(const std::unique_ptr<std::map<std::int8_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i8$v$isize$release(std::unique_ptr<std::map<std::int8_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$isize$drop(std::unique_ptr<std::map<std::int8_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$i8$v$bool$insert(
    std::map<std::int8_t, bool> *m, std::int8_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$i8$v$bool$get_unchecked(
    std::map<std::int8_t, bool> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$i8$v$bool$get_unchecked_mut(
    std::map<std::int8_t, bool> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$bool$contains_key(
    std::map<std::int8_t, bool> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$bool$key_by_index(
    std::map<std::int8_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$i8$v$bool$value_by_index(
    std::map<std::int8_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$bool$len(
    std::map<std::int8_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$bool$clear(
    std::map<std::int8_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$bool$null(std::unique_ptr<std::map<std::int8_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$bool$raw(std::unique_ptr<std::map<std::int8_t, bool>> *ptr,
                                                    std::map<std::int8_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, bool>>(raw);
}

const std::map<std::int8_t, bool> *stdtybridge$unique_ptr$std$map$k$i8$v$bool$get(const std::unique_ptr<std::map<std::int8_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, bool> *stdtybridge$unique_ptr$std$map$k$i8$v$bool$release(std::unique_ptr<std::map<std::int8_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$bool$drop(std::unique_ptr<std::map<std::int8_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I8 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$i8$v$string$insert(
    std::map<std::int8_t, std::string> *m, std::int8_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$i8$v$string$get_unchecked(
    std::map<std::int8_t, std::string> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$i8$v$string$get_unchecked_mut(
    std::map<std::int8_t, std::string> *m, std::int8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i8$v$string$contains_key(
    std::map<std::int8_t, std::string> *m, std::int8_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int8_t &stdtybridge$std$map$k$i8$v$string$key_by_index(
    std::map<std::int8_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$i8$v$string$value_by_index(
    std::map<std::int8_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i8$v$string$len(
    std::map<std::int8_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i8$v$string$clear(
    std::map<std::int8_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i8$v$string$null(std::unique_ptr<std::map<std::int8_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$string$raw(std::unique_ptr<std::map<std::int8_t, std::string>> *ptr,
                                                      std::map<std::int8_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int8_t, std::string>>(raw);
}

const std::map<std::int8_t, std::string> *stdtybridge$unique_ptr$std$map$k$i8$v$string$get(const std::unique_ptr<std::map<std::int8_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int8_t, std::string> *stdtybridge$unique_ptr$std$map$k$i8$v$string$release(std::unique_ptr<std::map<std::int8_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i8$v$string$drop(std::unique_ptr<std::map<std::int8_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_U8

void stdtybridge$std$map$k$i16$v$u8$insert(
    std::map<std::int16_t, std::uint8_t> *m, std::int16_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$i16$v$u8$get_unchecked(
    std::map<std::int16_t, std::uint8_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$i16$v$u8$get_unchecked_mut(
    std::map<std::int16_t, std::uint8_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$u8$contains_key(
    std::map<std::int16_t, std::uint8_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$u8$key_by_index(
    std::map<std::int16_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$i16$v$u8$value_by_index(
    std::map<std::int16_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$u8$len(
    std::map<std::int16_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$u8$clear(
    std::map<std::int16_t, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$u8$null(std::unique_ptr<std::map<std::int16_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u8$raw(std::unique_ptr<std::map<std::int16_t, std::uint8_t>> *ptr,
                                                   std::map<std::int16_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint8_t>>(raw);
}

const std::map<std::int16_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u8$get(const std::unique_ptr<std::map<std::int16_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u8$release(std::unique_ptr<std::map<std::int16_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u8$drop(std::unique_ptr<std::map<std::int16_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_U16

void stdtybridge$std$map$k$i16$v$u16$insert(
    std::map<std::int16_t, std::uint16_t> *m, std::int16_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$i16$v$u16$get_unchecked(
    std::map<std::int16_t, std::uint16_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$i16$v$u16$get_unchecked_mut(
    std::map<std::int16_t, std::uint16_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$u16$contains_key(
    std::map<std::int16_t, std::uint16_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$u16$key_by_index(
    std::map<std::int16_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$i16$v$u16$value_by_index(
    std::map<std::int16_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$u16$len(
    std::map<std::int16_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$u16$clear(
    std::map<std::int16_t, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$u16$null(std::unique_ptr<std::map<std::int16_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u16$raw(std::unique_ptr<std::map<std::int16_t, std::uint16_t>> *ptr,
                                                    std::map<std::int16_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint16_t>>(raw);
}

const std::map<std::int16_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u16$get(const std::unique_ptr<std::map<std::int16_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u16$release(std::unique_ptr<std::map<std::int16_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u16$drop(std::unique_ptr<std::map<std::int16_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_U32

void stdtybridge$std$map$k$i16$v$u32$insert(
    std::map<std::int16_t, std::uint32_t> *m, std::int16_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$i16$v$u32$get_unchecked(
    std::map<std::int16_t, std::uint32_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$i16$v$u32$get_unchecked_mut(
    std::map<std::int16_t, std::uint32_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$u32$contains_key(
    std::map<std::int16_t, std::uint32_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$u32$key_by_index(
    std::map<std::int16_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$i16$v$u32$value_by_index(
    std::map<std::int16_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$u32$len(
    std::map<std::int16_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$u32$clear(
    std::map<std::int16_t, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$u32$null(std::unique_ptr<std::map<std::int16_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u32$raw(std::unique_ptr<std::map<std::int16_t, std::uint32_t>> *ptr,
                                                    std::map<std::int16_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint32_t>>(raw);
}

const std::map<std::int16_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u32$get(const std::unique_ptr<std::map<std::int16_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u32$release(std::unique_ptr<std::map<std::int16_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u32$drop(std::unique_ptr<std::map<std::int16_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_U64

void stdtybridge$std$map$k$i16$v$u64$insert(
    std::map<std::int16_t, std::uint64_t> *m, std::int16_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$i16$v$u64$get_unchecked(
    std::map<std::int16_t, std::uint64_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$i16$v$u64$get_unchecked_mut(
    std::map<std::int16_t, std::uint64_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$u64$contains_key(
    std::map<std::int16_t, std::uint64_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$u64$key_by_index(
    std::map<std::int16_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$i16$v$u64$value_by_index(
    std::map<std::int16_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$u64$len(
    std::map<std::int16_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$u64$clear(
    std::map<std::int16_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$u64$null(std::unique_ptr<std::map<std::int16_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u64$raw(std::unique_ptr<std::map<std::int16_t, std::uint64_t>> *ptr,
                                                    std::map<std::int16_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::uint64_t>>(raw);
}

const std::map<std::int16_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u64$get(const std::unique_ptr<std::map<std::int16_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i16$v$u64$release(std::unique_ptr<std::map<std::int16_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$u64$drop(std::unique_ptr<std::map<std::int16_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_I8

void stdtybridge$std$map$k$i16$v$i8$insert(
    std::map<std::int16_t, std::int8_t> *m, std::int16_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$i16$v$i8$get_unchecked(
    std::map<std::int16_t, std::int8_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$i16$v$i8$get_unchecked_mut(
    std::map<std::int16_t, std::int8_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$i8$contains_key(
    std::map<std::int16_t, std::int8_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$i8$key_by_index(
    std::map<std::int16_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$i16$v$i8$value_by_index(
    std::map<std::int16_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$i8$len(
    std::map<std::int16_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$i8$clear(
    std::map<std::int16_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$i8$null(std::unique_ptr<std::map<std::int16_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i8$raw(std::unique_ptr<std::map<std::int16_t, std::int8_t>> *ptr,
                                                   std::map<std::int16_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int8_t>>(raw);
}

const std::map<std::int16_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i8$get(const std::unique_ptr<std::map<std::int16_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i8$release(std::unique_ptr<std::map<std::int16_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i8$drop(std::unique_ptr<std::map<std::int16_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_I16

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
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_I32

void stdtybridge$std$map$k$i16$v$i32$insert(
    std::map<std::int16_t, std::int32_t> *m, std::int16_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$i16$v$i32$get_unchecked(
    std::map<std::int16_t, std::int32_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$i16$v$i32$get_unchecked_mut(
    std::map<std::int16_t, std::int32_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$i32$contains_key(
    std::map<std::int16_t, std::int32_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$i32$key_by_index(
    std::map<std::int16_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$i16$v$i32$value_by_index(
    std::map<std::int16_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$i32$len(
    std::map<std::int16_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$i32$clear(
    std::map<std::int16_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$i32$null(std::unique_ptr<std::map<std::int16_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i32$raw(std::unique_ptr<std::map<std::int16_t, std::int32_t>> *ptr,
                                                    std::map<std::int16_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int32_t>>(raw);
}

const std::map<std::int16_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i32$get(const std::unique_ptr<std::map<std::int16_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i32$release(std::unique_ptr<std::map<std::int16_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i32$drop(std::unique_ptr<std::map<std::int16_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_I64

void stdtybridge$std$map$k$i16$v$i64$insert(
    std::map<std::int16_t, std::int64_t> *m, std::int16_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$i16$v$i64$get_unchecked(
    std::map<std::int16_t, std::int64_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$i16$v$i64$get_unchecked_mut(
    std::map<std::int16_t, std::int64_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$i64$contains_key(
    std::map<std::int16_t, std::int64_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$i64$key_by_index(
    std::map<std::int16_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$i16$v$i64$value_by_index(
    std::map<std::int16_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$i64$len(
    std::map<std::int16_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$i64$clear(
    std::map<std::int16_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$i64$null(std::unique_ptr<std::map<std::int16_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i64$raw(std::unique_ptr<std::map<std::int16_t, std::int64_t>> *ptr,
                                                    std::map<std::int16_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::int64_t>>(raw);
}

const std::map<std::int16_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i64$get(const std::unique_ptr<std::map<std::int16_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i16$v$i64$release(std::unique_ptr<std::map<std::int16_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$i64$drop(std::unique_ptr<std::map<std::int16_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$i16$v$usize$insert(
    std::map<std::int16_t, std::size_t> *m, std::int16_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$i16$v$usize$get_unchecked(
    std::map<std::int16_t, std::size_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$i16$v$usize$get_unchecked_mut(
    std::map<std::int16_t, std::size_t> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$usize$contains_key(
    std::map<std::int16_t, std::size_t> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$usize$key_by_index(
    std::map<std::int16_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$i16$v$usize$value_by_index(
    std::map<std::int16_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$usize$len(
    std::map<std::int16_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$usize$clear(
    std::map<std::int16_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$usize$null(std::unique_ptr<std::map<std::int16_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$usize$raw(std::unique_ptr<std::map<std::int16_t, std::size_t>> *ptr,
                                                      std::map<std::int16_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, std::size_t>>(raw);
}

const std::map<std::int16_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i16$v$usize$get(const std::unique_ptr<std::map<std::int16_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i16$v$usize$release(std::unique_ptr<std::map<std::int16_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$usize$drop(std::unique_ptr<std::map<std::int16_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$i16$v$isize$insert(
    std::map<std::int16_t, rust::isize> *m, std::int16_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$i16$v$isize$get_unchecked(
    std::map<std::int16_t, rust::isize> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$i16$v$isize$get_unchecked_mut(
    std::map<std::int16_t, rust::isize> *m, std::int16_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i16$v$isize$contains_key(
    std::map<std::int16_t, rust::isize> *m, std::int16_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int16_t &stdtybridge$std$map$k$i16$v$isize$key_by_index(
    std::map<std::int16_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$i16$v$isize$value_by_index(
    std::map<std::int16_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i16$v$isize$len(
    std::map<std::int16_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i16$v$isize$clear(
    std::map<std::int16_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i16$v$isize$null(std::unique_ptr<std::map<std::int16_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$isize$raw(std::unique_ptr<std::map<std::int16_t, rust::isize>> *ptr,
                                                      std::map<std::int16_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int16_t, rust::isize>>(raw);
}

const std::map<std::int16_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i16$v$isize$get(const std::unique_ptr<std::map<std::int16_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int16_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i16$v$isize$release(std::unique_ptr<std::map<std::int16_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i16$v$isize$drop(std::unique_ptr<std::map<std::int16_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_BOOL

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
#endif
#if __STDTY_MAP_I16 && __STDTY_MAP_STRING

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
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_U8

void stdtybridge$std$map$k$i32$v$u8$insert(
    std::map<std::int32_t, std::uint8_t> *m, std::int32_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$i32$v$u8$get_unchecked(
    std::map<std::int32_t, std::uint8_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$i32$v$u8$get_unchecked_mut(
    std::map<std::int32_t, std::uint8_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$u8$contains_key(
    std::map<std::int32_t, std::uint8_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$u8$key_by_index(
    std::map<std::int32_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$i32$v$u8$value_by_index(
    std::map<std::int32_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$u8$len(
    std::map<std::int32_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$u8$clear(
    std::map<std::int32_t, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$u8$null(std::unique_ptr<std::map<std::int32_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u8$raw(std::unique_ptr<std::map<std::int32_t, std::uint8_t>> *ptr,
                                                   std::map<std::int32_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint8_t>>(raw);
}

const std::map<std::int32_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u8$get(const std::unique_ptr<std::map<std::int32_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u8$release(std::unique_ptr<std::map<std::int32_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u8$drop(std::unique_ptr<std::map<std::int32_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_U16

void stdtybridge$std$map$k$i32$v$u16$insert(
    std::map<std::int32_t, std::uint16_t> *m, std::int32_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$i32$v$u16$get_unchecked(
    std::map<std::int32_t, std::uint16_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$i32$v$u16$get_unchecked_mut(
    std::map<std::int32_t, std::uint16_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$u16$contains_key(
    std::map<std::int32_t, std::uint16_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$u16$key_by_index(
    std::map<std::int32_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$i32$v$u16$value_by_index(
    std::map<std::int32_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$u16$len(
    std::map<std::int32_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$u16$clear(
    std::map<std::int32_t, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$u16$null(std::unique_ptr<std::map<std::int32_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u16$raw(std::unique_ptr<std::map<std::int32_t, std::uint16_t>> *ptr,
                                                    std::map<std::int32_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint16_t>>(raw);
}

const std::map<std::int32_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u16$get(const std::unique_ptr<std::map<std::int32_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u16$release(std::unique_ptr<std::map<std::int32_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u16$drop(std::unique_ptr<std::map<std::int32_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_U32

void stdtybridge$std$map$k$i32$v$u32$insert(
    std::map<std::int32_t, std::uint32_t> *m, std::int32_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$i32$v$u32$get_unchecked(
    std::map<std::int32_t, std::uint32_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$i32$v$u32$get_unchecked_mut(
    std::map<std::int32_t, std::uint32_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$u32$contains_key(
    std::map<std::int32_t, std::uint32_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$u32$key_by_index(
    std::map<std::int32_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$i32$v$u32$value_by_index(
    std::map<std::int32_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$u32$len(
    std::map<std::int32_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$u32$clear(
    std::map<std::int32_t, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$u32$null(std::unique_ptr<std::map<std::int32_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u32$raw(std::unique_ptr<std::map<std::int32_t, std::uint32_t>> *ptr,
                                                    std::map<std::int32_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint32_t>>(raw);
}

const std::map<std::int32_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u32$get(const std::unique_ptr<std::map<std::int32_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u32$release(std::unique_ptr<std::map<std::int32_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u32$drop(std::unique_ptr<std::map<std::int32_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_U64

void stdtybridge$std$map$k$i32$v$u64$insert(
    std::map<std::int32_t, std::uint64_t> *m, std::int32_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$i32$v$u64$get_unchecked(
    std::map<std::int32_t, std::uint64_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$i32$v$u64$get_unchecked_mut(
    std::map<std::int32_t, std::uint64_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$u64$contains_key(
    std::map<std::int32_t, std::uint64_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$u64$key_by_index(
    std::map<std::int32_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$i32$v$u64$value_by_index(
    std::map<std::int32_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$u64$len(
    std::map<std::int32_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$u64$clear(
    std::map<std::int32_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$u64$null(std::unique_ptr<std::map<std::int32_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u64$raw(std::unique_ptr<std::map<std::int32_t, std::uint64_t>> *ptr,
                                                    std::map<std::int32_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::uint64_t>>(raw);
}

const std::map<std::int32_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u64$get(const std::unique_ptr<std::map<std::int32_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i32$v$u64$release(std::unique_ptr<std::map<std::int32_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$u64$drop(std::unique_ptr<std::map<std::int32_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_I8

void stdtybridge$std$map$k$i32$v$i8$insert(
    std::map<std::int32_t, std::int8_t> *m, std::int32_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$i32$v$i8$get_unchecked(
    std::map<std::int32_t, std::int8_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$i32$v$i8$get_unchecked_mut(
    std::map<std::int32_t, std::int8_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$i8$contains_key(
    std::map<std::int32_t, std::int8_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$i8$key_by_index(
    std::map<std::int32_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$i32$v$i8$value_by_index(
    std::map<std::int32_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$i8$len(
    std::map<std::int32_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$i8$clear(
    std::map<std::int32_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$i8$null(std::unique_ptr<std::map<std::int32_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i8$raw(std::unique_ptr<std::map<std::int32_t, std::int8_t>> *ptr,
                                                   std::map<std::int32_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int8_t>>(raw);
}

const std::map<std::int32_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i8$get(const std::unique_ptr<std::map<std::int32_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i8$release(std::unique_ptr<std::map<std::int32_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i8$drop(std::unique_ptr<std::map<std::int32_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_I16

void stdtybridge$std$map$k$i32$v$i16$insert(
    std::map<std::int32_t, std::int16_t> *m, std::int32_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$i32$v$i16$get_unchecked(
    std::map<std::int32_t, std::int16_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$i32$v$i16$get_unchecked_mut(
    std::map<std::int32_t, std::int16_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$i16$contains_key(
    std::map<std::int32_t, std::int16_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$i16$key_by_index(
    std::map<std::int32_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$i32$v$i16$value_by_index(
    std::map<std::int32_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$i16$len(
    std::map<std::int32_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$i16$clear(
    std::map<std::int32_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$i16$null(std::unique_ptr<std::map<std::int32_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i16$raw(std::unique_ptr<std::map<std::int32_t, std::int16_t>> *ptr,
                                                    std::map<std::int32_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int16_t>>(raw);
}

const std::map<std::int32_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i16$get(const std::unique_ptr<std::map<std::int32_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i16$release(std::unique_ptr<std::map<std::int32_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i16$drop(std::unique_ptr<std::map<std::int32_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_I32

void stdtybridge$std$map$k$i32$v$i32$insert(
    std::map<std::int32_t, std::int32_t> *m, std::int32_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$i32$v$i32$get_unchecked(
    std::map<std::int32_t, std::int32_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$i32$v$i32$get_unchecked_mut(
    std::map<std::int32_t, std::int32_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$i32$contains_key(
    std::map<std::int32_t, std::int32_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$i32$key_by_index(
    std::map<std::int32_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$i32$value_by_index(
    std::map<std::int32_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$i32$len(
    std::map<std::int32_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$i32$clear(
    std::map<std::int32_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$i32$null(std::unique_ptr<std::map<std::int32_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i32$raw(std::unique_ptr<std::map<std::int32_t, std::int32_t>> *ptr,
                                                    std::map<std::int32_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int32_t>>(raw);
}

const std::map<std::int32_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i32$get(const std::unique_ptr<std::map<std::int32_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i32$release(std::unique_ptr<std::map<std::int32_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i32$drop(std::unique_ptr<std::map<std::int32_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_I64

void stdtybridge$std$map$k$i32$v$i64$insert(
    std::map<std::int32_t, std::int64_t> *m, std::int32_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$i32$v$i64$get_unchecked(
    std::map<std::int32_t, std::int64_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$i32$v$i64$get_unchecked_mut(
    std::map<std::int32_t, std::int64_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$i64$contains_key(
    std::map<std::int32_t, std::int64_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$i64$key_by_index(
    std::map<std::int32_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$i32$v$i64$value_by_index(
    std::map<std::int32_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$i64$len(
    std::map<std::int32_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$i64$clear(
    std::map<std::int32_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$i64$null(std::unique_ptr<std::map<std::int32_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i64$raw(std::unique_ptr<std::map<std::int32_t, std::int64_t>> *ptr,
                                                    std::map<std::int32_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::int64_t>>(raw);
}

const std::map<std::int32_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i64$get(const std::unique_ptr<std::map<std::int32_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i32$v$i64$release(std::unique_ptr<std::map<std::int32_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$i64$drop(std::unique_ptr<std::map<std::int32_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$i32$v$usize$insert(
    std::map<std::int32_t, std::size_t> *m, std::int32_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$i32$v$usize$get_unchecked(
    std::map<std::int32_t, std::size_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$i32$v$usize$get_unchecked_mut(
    std::map<std::int32_t, std::size_t> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$usize$contains_key(
    std::map<std::int32_t, std::size_t> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$usize$key_by_index(
    std::map<std::int32_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$i32$v$usize$value_by_index(
    std::map<std::int32_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$usize$len(
    std::map<std::int32_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$usize$clear(
    std::map<std::int32_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$usize$null(std::unique_ptr<std::map<std::int32_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$usize$raw(std::unique_ptr<std::map<std::int32_t, std::size_t>> *ptr,
                                                      std::map<std::int32_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::size_t>>(raw);
}

const std::map<std::int32_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i32$v$usize$get(const std::unique_ptr<std::map<std::int32_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i32$v$usize$release(std::unique_ptr<std::map<std::int32_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$usize$drop(std::unique_ptr<std::map<std::int32_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$i32$v$isize$insert(
    std::map<std::int32_t, rust::isize> *m, std::int32_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$i32$v$isize$get_unchecked(
    std::map<std::int32_t, rust::isize> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$i32$v$isize$get_unchecked_mut(
    std::map<std::int32_t, rust::isize> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$isize$contains_key(
    std::map<std::int32_t, rust::isize> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$isize$key_by_index(
    std::map<std::int32_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$i32$v$isize$value_by_index(
    std::map<std::int32_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$isize$len(
    std::map<std::int32_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$isize$clear(
    std::map<std::int32_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$isize$null(std::unique_ptr<std::map<std::int32_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$isize$raw(std::unique_ptr<std::map<std::int32_t, rust::isize>> *ptr,
                                                      std::map<std::int32_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, rust::isize>>(raw);
}

const std::map<std::int32_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i32$v$isize$get(const std::unique_ptr<std::map<std::int32_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i32$v$isize$release(std::unique_ptr<std::map<std::int32_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$isize$drop(std::unique_ptr<std::map<std::int32_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$i32$v$bool$insert(
    std::map<std::int32_t, bool> *m, std::int32_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$i32$v$bool$get_unchecked(
    std::map<std::int32_t, bool> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$i32$v$bool$get_unchecked_mut(
    std::map<std::int32_t, bool> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$bool$contains_key(
    std::map<std::int32_t, bool> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$bool$key_by_index(
    std::map<std::int32_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$i32$v$bool$value_by_index(
    std::map<std::int32_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$bool$len(
    std::map<std::int32_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$bool$clear(
    std::map<std::int32_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$bool$null(std::unique_ptr<std::map<std::int32_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$bool$raw(std::unique_ptr<std::map<std::int32_t, bool>> *ptr,
                                                     std::map<std::int32_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, bool>>(raw);
}

const std::map<std::int32_t, bool> *stdtybridge$unique_ptr$std$map$k$i32$v$bool$get(const std::unique_ptr<std::map<std::int32_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, bool> *stdtybridge$unique_ptr$std$map$k$i32$v$bool$release(std::unique_ptr<std::map<std::int32_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$bool$drop(std::unique_ptr<std::map<std::int32_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I32 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$i32$v$string$insert(
    std::map<std::int32_t, std::string> *m, std::int32_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$i32$v$string$get_unchecked(
    std::map<std::int32_t, std::string> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$i32$v$string$get_unchecked_mut(
    std::map<std::int32_t, std::string> *m, std::int32_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i32$v$string$contains_key(
    std::map<std::int32_t, std::string> *m, std::int32_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int32_t &stdtybridge$std$map$k$i32$v$string$key_by_index(
    std::map<std::int32_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$i32$v$string$value_by_index(
    std::map<std::int32_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i32$v$string$len(
    std::map<std::int32_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i32$v$string$clear(
    std::map<std::int32_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i32$v$string$null(std::unique_ptr<std::map<std::int32_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$string$raw(std::unique_ptr<std::map<std::int32_t, std::string>> *ptr,
                                                       std::map<std::int32_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int32_t, std::string>>(raw);
}

const std::map<std::int32_t, std::string> *stdtybridge$unique_ptr$std$map$k$i32$v$string$get(const std::unique_ptr<std::map<std::int32_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int32_t, std::string> *stdtybridge$unique_ptr$std$map$k$i32$v$string$release(std::unique_ptr<std::map<std::int32_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i32$v$string$drop(std::unique_ptr<std::map<std::int32_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_U8

void stdtybridge$std$map$k$i64$v$u8$insert(
    std::map<std::int64_t, std::uint8_t> *m, std::int64_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$i64$v$u8$get_unchecked(
    std::map<std::int64_t, std::uint8_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$i64$v$u8$get_unchecked_mut(
    std::map<std::int64_t, std::uint8_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$u8$contains_key(
    std::map<std::int64_t, std::uint8_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$u8$key_by_index(
    std::map<std::int64_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$i64$v$u8$value_by_index(
    std::map<std::int64_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$u8$len(
    std::map<std::int64_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$u8$clear(
    std::map<std::int64_t, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$u8$null(std::unique_ptr<std::map<std::int64_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u8$raw(std::unique_ptr<std::map<std::int64_t, std::uint8_t>> *ptr,
                                                   std::map<std::int64_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint8_t>>(raw);
}

const std::map<std::int64_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u8$get(const std::unique_ptr<std::map<std::int64_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u8$release(std::unique_ptr<std::map<std::int64_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u8$drop(std::unique_ptr<std::map<std::int64_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_U16

void stdtybridge$std$map$k$i64$v$u16$insert(
    std::map<std::int64_t, std::uint16_t> *m, std::int64_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$i64$v$u16$get_unchecked(
    std::map<std::int64_t, std::uint16_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$i64$v$u16$get_unchecked_mut(
    std::map<std::int64_t, std::uint16_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$u16$contains_key(
    std::map<std::int64_t, std::uint16_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$u16$key_by_index(
    std::map<std::int64_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$i64$v$u16$value_by_index(
    std::map<std::int64_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$u16$len(
    std::map<std::int64_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$u16$clear(
    std::map<std::int64_t, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$u16$null(std::unique_ptr<std::map<std::int64_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u16$raw(std::unique_ptr<std::map<std::int64_t, std::uint16_t>> *ptr,
                                                    std::map<std::int64_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint16_t>>(raw);
}

const std::map<std::int64_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u16$get(const std::unique_ptr<std::map<std::int64_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u16$release(std::unique_ptr<std::map<std::int64_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u16$drop(std::unique_ptr<std::map<std::int64_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_U32

void stdtybridge$std$map$k$i64$v$u32$insert(
    std::map<std::int64_t, std::uint32_t> *m, std::int64_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$i64$v$u32$get_unchecked(
    std::map<std::int64_t, std::uint32_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$i64$v$u32$get_unchecked_mut(
    std::map<std::int64_t, std::uint32_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$u32$contains_key(
    std::map<std::int64_t, std::uint32_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$u32$key_by_index(
    std::map<std::int64_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$i64$v$u32$value_by_index(
    std::map<std::int64_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$u32$len(
    std::map<std::int64_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$u32$clear(
    std::map<std::int64_t, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$u32$null(std::unique_ptr<std::map<std::int64_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u32$raw(std::unique_ptr<std::map<std::int64_t, std::uint32_t>> *ptr,
                                                    std::map<std::int64_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint32_t>>(raw);
}

const std::map<std::int64_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u32$get(const std::unique_ptr<std::map<std::int64_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u32$release(std::unique_ptr<std::map<std::int64_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u32$drop(std::unique_ptr<std::map<std::int64_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_U64

void stdtybridge$std$map$k$i64$v$u64$insert(
    std::map<std::int64_t, std::uint64_t> *m, std::int64_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$i64$v$u64$get_unchecked(
    std::map<std::int64_t, std::uint64_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$i64$v$u64$get_unchecked_mut(
    std::map<std::int64_t, std::uint64_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$u64$contains_key(
    std::map<std::int64_t, std::uint64_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$u64$key_by_index(
    std::map<std::int64_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$i64$v$u64$value_by_index(
    std::map<std::int64_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$u64$len(
    std::map<std::int64_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$u64$clear(
    std::map<std::int64_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$u64$null(std::unique_ptr<std::map<std::int64_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u64$raw(std::unique_ptr<std::map<std::int64_t, std::uint64_t>> *ptr,
                                                    std::map<std::int64_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::uint64_t>>(raw);
}

const std::map<std::int64_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u64$get(const std::unique_ptr<std::map<std::int64_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$i64$v$u64$release(std::unique_ptr<std::map<std::int64_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$u64$drop(std::unique_ptr<std::map<std::int64_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_I8

void stdtybridge$std$map$k$i64$v$i8$insert(
    std::map<std::int64_t, std::int8_t> *m, std::int64_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$i64$v$i8$get_unchecked(
    std::map<std::int64_t, std::int8_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$i64$v$i8$get_unchecked_mut(
    std::map<std::int64_t, std::int8_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$i8$contains_key(
    std::map<std::int64_t, std::int8_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$i8$key_by_index(
    std::map<std::int64_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$i64$v$i8$value_by_index(
    std::map<std::int64_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$i8$len(
    std::map<std::int64_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$i8$clear(
    std::map<std::int64_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$i8$null(std::unique_ptr<std::map<std::int64_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i8$raw(std::unique_ptr<std::map<std::int64_t, std::int8_t>> *ptr,
                                                   std::map<std::int64_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int8_t>>(raw);
}

const std::map<std::int64_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i8$get(const std::unique_ptr<std::map<std::int64_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i8$release(std::unique_ptr<std::map<std::int64_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i8$drop(std::unique_ptr<std::map<std::int64_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_I16

void stdtybridge$std$map$k$i64$v$i16$insert(
    std::map<std::int64_t, std::int16_t> *m, std::int64_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$i64$v$i16$get_unchecked(
    std::map<std::int64_t, std::int16_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$i64$v$i16$get_unchecked_mut(
    std::map<std::int64_t, std::int16_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$i16$contains_key(
    std::map<std::int64_t, std::int16_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$i16$key_by_index(
    std::map<std::int64_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$i64$v$i16$value_by_index(
    std::map<std::int64_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$i16$len(
    std::map<std::int64_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$i16$clear(
    std::map<std::int64_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$i16$null(std::unique_ptr<std::map<std::int64_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i16$raw(std::unique_ptr<std::map<std::int64_t, std::int16_t>> *ptr,
                                                    std::map<std::int64_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int16_t>>(raw);
}

const std::map<std::int64_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i16$get(const std::unique_ptr<std::map<std::int64_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i16$release(std::unique_ptr<std::map<std::int64_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i16$drop(std::unique_ptr<std::map<std::int64_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_I32

void stdtybridge$std$map$k$i64$v$i32$insert(
    std::map<std::int64_t, std::int32_t> *m, std::int64_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$i64$v$i32$get_unchecked(
    std::map<std::int64_t, std::int32_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$i64$v$i32$get_unchecked_mut(
    std::map<std::int64_t, std::int32_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$i32$contains_key(
    std::map<std::int64_t, std::int32_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$i32$key_by_index(
    std::map<std::int64_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$i64$v$i32$value_by_index(
    std::map<std::int64_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$i32$len(
    std::map<std::int64_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$i32$clear(
    std::map<std::int64_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$i32$null(std::unique_ptr<std::map<std::int64_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i32$raw(std::unique_ptr<std::map<std::int64_t, std::int32_t>> *ptr,
                                                    std::map<std::int64_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int32_t>>(raw);
}

const std::map<std::int64_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i32$get(const std::unique_ptr<std::map<std::int64_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i32$release(std::unique_ptr<std::map<std::int64_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i32$drop(std::unique_ptr<std::map<std::int64_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_I64

void stdtybridge$std$map$k$i64$v$i64$insert(
    std::map<std::int64_t, std::int64_t> *m, std::int64_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$i64$v$i64$get_unchecked(
    std::map<std::int64_t, std::int64_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$i64$v$i64$get_unchecked_mut(
    std::map<std::int64_t, std::int64_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$i64$contains_key(
    std::map<std::int64_t, std::int64_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$i64$key_by_index(
    std::map<std::int64_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$i64$value_by_index(
    std::map<std::int64_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$i64$len(
    std::map<std::int64_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$i64$clear(
    std::map<std::int64_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$i64$null(std::unique_ptr<std::map<std::int64_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i64$raw(std::unique_ptr<std::map<std::int64_t, std::int64_t>> *ptr,
                                                    std::map<std::int64_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::int64_t>>(raw);
}

const std::map<std::int64_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i64$get(const std::unique_ptr<std::map<std::int64_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$i64$v$i64$release(std::unique_ptr<std::map<std::int64_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$i64$drop(std::unique_ptr<std::map<std::int64_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$i64$v$usize$insert(
    std::map<std::int64_t, std::size_t> *m, std::int64_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$i64$v$usize$get_unchecked(
    std::map<std::int64_t, std::size_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$i64$v$usize$get_unchecked_mut(
    std::map<std::int64_t, std::size_t> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$usize$contains_key(
    std::map<std::int64_t, std::size_t> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$usize$key_by_index(
    std::map<std::int64_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$i64$v$usize$value_by_index(
    std::map<std::int64_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$usize$len(
    std::map<std::int64_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$usize$clear(
    std::map<std::int64_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$usize$null(std::unique_ptr<std::map<std::int64_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$usize$raw(std::unique_ptr<std::map<std::int64_t, std::size_t>> *ptr,
                                                      std::map<std::int64_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::size_t>>(raw);
}

const std::map<std::int64_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i64$v$usize$get(const std::unique_ptr<std::map<std::int64_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$i64$v$usize$release(std::unique_ptr<std::map<std::int64_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$usize$drop(std::unique_ptr<std::map<std::int64_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$i64$v$isize$insert(
    std::map<std::int64_t, rust::isize> *m, std::int64_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$i64$v$isize$get_unchecked(
    std::map<std::int64_t, rust::isize> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$i64$v$isize$get_unchecked_mut(
    std::map<std::int64_t, rust::isize> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$isize$contains_key(
    std::map<std::int64_t, rust::isize> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$isize$key_by_index(
    std::map<std::int64_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$i64$v$isize$value_by_index(
    std::map<std::int64_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$isize$len(
    std::map<std::int64_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$isize$clear(
    std::map<std::int64_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$isize$null(std::unique_ptr<std::map<std::int64_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$isize$raw(std::unique_ptr<std::map<std::int64_t, rust::isize>> *ptr,
                                                      std::map<std::int64_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, rust::isize>>(raw);
}

const std::map<std::int64_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i64$v$isize$get(const std::unique_ptr<std::map<std::int64_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$i64$v$isize$release(std::unique_ptr<std::map<std::int64_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$isize$drop(std::unique_ptr<std::map<std::int64_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$i64$v$bool$insert(
    std::map<std::int64_t, bool> *m, std::int64_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$i64$v$bool$get_unchecked(
    std::map<std::int64_t, bool> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$i64$v$bool$get_unchecked_mut(
    std::map<std::int64_t, bool> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$bool$contains_key(
    std::map<std::int64_t, bool> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$bool$key_by_index(
    std::map<std::int64_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$i64$v$bool$value_by_index(
    std::map<std::int64_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$bool$len(
    std::map<std::int64_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$bool$clear(
    std::map<std::int64_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$bool$null(std::unique_ptr<std::map<std::int64_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$bool$raw(std::unique_ptr<std::map<std::int64_t, bool>> *ptr,
                                                     std::map<std::int64_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, bool>>(raw);
}

const std::map<std::int64_t, bool> *stdtybridge$unique_ptr$std$map$k$i64$v$bool$get(const std::unique_ptr<std::map<std::int64_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, bool> *stdtybridge$unique_ptr$std$map$k$i64$v$bool$release(std::unique_ptr<std::map<std::int64_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$bool$drop(std::unique_ptr<std::map<std::int64_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_I64 && __STDTY_MAP_STRING

void stdtybridge$std$map$k$i64$v$string$insert(
    std::map<std::int64_t, std::string> *m, std::int64_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$i64$v$string$get_unchecked(
    std::map<std::int64_t, std::string> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$i64$v$string$get_unchecked_mut(
    std::map<std::int64_t, std::string> *m, std::int64_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$i64$v$string$contains_key(
    std::map<std::int64_t, std::string> *m, std::int64_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::int64_t &stdtybridge$std$map$k$i64$v$string$key_by_index(
    std::map<std::int64_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$i64$v$string$value_by_index(
    std::map<std::int64_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$i64$v$string$len(
    std::map<std::int64_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$i64$v$string$clear(
    std::map<std::int64_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$i64$v$string$null(std::unique_ptr<std::map<std::int64_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$string$raw(std::unique_ptr<std::map<std::int64_t, std::string>> *ptr,
                                                       std::map<std::int64_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::int64_t, std::string>>(raw);
}

const std::map<std::int64_t, std::string> *stdtybridge$unique_ptr$std$map$k$i64$v$string$get(const std::unique_ptr<std::map<std::int64_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::int64_t, std::string> *stdtybridge$unique_ptr$std$map$k$i64$v$string$release(std::unique_ptr<std::map<std::int64_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$i64$v$string$drop(std::unique_ptr<std::map<std::int64_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_U8

void stdtybridge$std$map$k$usize$v$u8$insert(
    std::map<std::size_t, std::uint8_t> *m, std::size_t *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$usize$v$u8$get_unchecked(
    std::map<std::size_t, std::uint8_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$usize$v$u8$get_unchecked_mut(
    std::map<std::size_t, std::uint8_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$u8$contains_key(
    std::map<std::size_t, std::uint8_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$u8$key_by_index(
    std::map<std::size_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$usize$v$u8$value_by_index(
    std::map<std::size_t, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$u8$len(
    std::map<std::size_t, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$u8$clear(
    std::map<std::size_t, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$u8$null(std::unique_ptr<std::map<std::size_t, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u8$raw(std::unique_ptr<std::map<std::size_t, std::uint8_t>> *ptr,
                                                     std::map<std::size_t, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint8_t>>(raw);
}

const std::map<std::size_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u8$get(const std::unique_ptr<std::map<std::size_t, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u8$release(std::unique_ptr<std::map<std::size_t, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u8$drop(std::unique_ptr<std::map<std::size_t, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_U16

void stdtybridge$std$map$k$usize$v$u16$insert(
    std::map<std::size_t, std::uint16_t> *m, std::size_t *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$usize$v$u16$get_unchecked(
    std::map<std::size_t, std::uint16_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$usize$v$u16$get_unchecked_mut(
    std::map<std::size_t, std::uint16_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$u16$contains_key(
    std::map<std::size_t, std::uint16_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$u16$key_by_index(
    std::map<std::size_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$usize$v$u16$value_by_index(
    std::map<std::size_t, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$u16$len(
    std::map<std::size_t, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$u16$clear(
    std::map<std::size_t, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$u16$null(std::unique_ptr<std::map<std::size_t, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u16$raw(std::unique_ptr<std::map<std::size_t, std::uint16_t>> *ptr,
                                                      std::map<std::size_t, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint16_t>>(raw);
}

const std::map<std::size_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u16$get(const std::unique_ptr<std::map<std::size_t, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u16$release(std::unique_ptr<std::map<std::size_t, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u16$drop(std::unique_ptr<std::map<std::size_t, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_U32

void stdtybridge$std$map$k$usize$v$u32$insert(
    std::map<std::size_t, std::uint32_t> *m, std::size_t *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$usize$v$u32$get_unchecked(
    std::map<std::size_t, std::uint32_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$usize$v$u32$get_unchecked_mut(
    std::map<std::size_t, std::uint32_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$u32$contains_key(
    std::map<std::size_t, std::uint32_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$u32$key_by_index(
    std::map<std::size_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$usize$v$u32$value_by_index(
    std::map<std::size_t, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$u32$len(
    std::map<std::size_t, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$u32$clear(
    std::map<std::size_t, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$u32$null(std::unique_ptr<std::map<std::size_t, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u32$raw(std::unique_ptr<std::map<std::size_t, std::uint32_t>> *ptr,
                                                      std::map<std::size_t, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint32_t>>(raw);
}

const std::map<std::size_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u32$get(const std::unique_ptr<std::map<std::size_t, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u32$release(std::unique_ptr<std::map<std::size_t, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u32$drop(std::unique_ptr<std::map<std::size_t, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_U64

void stdtybridge$std$map$k$usize$v$u64$insert(
    std::map<std::size_t, std::uint64_t> *m, std::size_t *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$usize$v$u64$get_unchecked(
    std::map<std::size_t, std::uint64_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$usize$v$u64$get_unchecked_mut(
    std::map<std::size_t, std::uint64_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$u64$contains_key(
    std::map<std::size_t, std::uint64_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$u64$key_by_index(
    std::map<std::size_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$usize$v$u64$value_by_index(
    std::map<std::size_t, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$u64$len(
    std::map<std::size_t, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$u64$clear(
    std::map<std::size_t, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$u64$null(std::unique_ptr<std::map<std::size_t, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u64$raw(std::unique_ptr<std::map<std::size_t, std::uint64_t>> *ptr,
                                                      std::map<std::size_t, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::uint64_t>>(raw);
}

const std::map<std::size_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u64$get(const std::unique_ptr<std::map<std::size_t, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$usize$v$u64$release(std::unique_ptr<std::map<std::size_t, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$u64$drop(std::unique_ptr<std::map<std::size_t, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_I8

void stdtybridge$std$map$k$usize$v$i8$insert(
    std::map<std::size_t, std::int8_t> *m, std::size_t *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$usize$v$i8$get_unchecked(
    std::map<std::size_t, std::int8_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$usize$v$i8$get_unchecked_mut(
    std::map<std::size_t, std::int8_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$i8$contains_key(
    std::map<std::size_t, std::int8_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$i8$key_by_index(
    std::map<std::size_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$usize$v$i8$value_by_index(
    std::map<std::size_t, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$i8$len(
    std::map<std::size_t, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$i8$clear(
    std::map<std::size_t, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$i8$null(std::unique_ptr<std::map<std::size_t, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i8$raw(std::unique_ptr<std::map<std::size_t, std::int8_t>> *ptr,
                                                     std::map<std::size_t, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int8_t>>(raw);
}

const std::map<std::size_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i8$get(const std::unique_ptr<std::map<std::size_t, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::int8_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i8$release(std::unique_ptr<std::map<std::size_t, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i8$drop(std::unique_ptr<std::map<std::size_t, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_I16

void stdtybridge$std$map$k$usize$v$i16$insert(
    std::map<std::size_t, std::int16_t> *m, std::size_t *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$usize$v$i16$get_unchecked(
    std::map<std::size_t, std::int16_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$usize$v$i16$get_unchecked_mut(
    std::map<std::size_t, std::int16_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$i16$contains_key(
    std::map<std::size_t, std::int16_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$i16$key_by_index(
    std::map<std::size_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$usize$v$i16$value_by_index(
    std::map<std::size_t, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$i16$len(
    std::map<std::size_t, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$i16$clear(
    std::map<std::size_t, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$i16$null(std::unique_ptr<std::map<std::size_t, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i16$raw(std::unique_ptr<std::map<std::size_t, std::int16_t>> *ptr,
                                                      std::map<std::size_t, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int16_t>>(raw);
}

const std::map<std::size_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i16$get(const std::unique_ptr<std::map<std::size_t, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::int16_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i16$release(std::unique_ptr<std::map<std::size_t, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i16$drop(std::unique_ptr<std::map<std::size_t, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_I32

void stdtybridge$std$map$k$usize$v$i32$insert(
    std::map<std::size_t, std::int32_t> *m, std::size_t *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$usize$v$i32$get_unchecked(
    std::map<std::size_t, std::int32_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$usize$v$i32$get_unchecked_mut(
    std::map<std::size_t, std::int32_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$i32$contains_key(
    std::map<std::size_t, std::int32_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$i32$key_by_index(
    std::map<std::size_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$usize$v$i32$value_by_index(
    std::map<std::size_t, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$i32$len(
    std::map<std::size_t, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$i32$clear(
    std::map<std::size_t, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$i32$null(std::unique_ptr<std::map<std::size_t, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i32$raw(std::unique_ptr<std::map<std::size_t, std::int32_t>> *ptr,
                                                      std::map<std::size_t, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int32_t>>(raw);
}

const std::map<std::size_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i32$get(const std::unique_ptr<std::map<std::size_t, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::int32_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i32$release(std::unique_ptr<std::map<std::size_t, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i32$drop(std::unique_ptr<std::map<std::size_t, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_I64

void stdtybridge$std$map$k$usize$v$i64$insert(
    std::map<std::size_t, std::int64_t> *m, std::size_t *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$usize$v$i64$get_unchecked(
    std::map<std::size_t, std::int64_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$usize$v$i64$get_unchecked_mut(
    std::map<std::size_t, std::int64_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$i64$contains_key(
    std::map<std::size_t, std::int64_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$i64$key_by_index(
    std::map<std::size_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$usize$v$i64$value_by_index(
    std::map<std::size_t, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$i64$len(
    std::map<std::size_t, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$i64$clear(
    std::map<std::size_t, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$i64$null(std::unique_ptr<std::map<std::size_t, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i64$raw(std::unique_ptr<std::map<std::size_t, std::int64_t>> *ptr,
                                                      std::map<std::size_t, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::int64_t>>(raw);
}

const std::map<std::size_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i64$get(const std::unique_ptr<std::map<std::size_t, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::int64_t> *stdtybridge$unique_ptr$std$map$k$usize$v$i64$release(std::unique_ptr<std::map<std::size_t, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$i64$drop(std::unique_ptr<std::map<std::size_t, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$usize$v$usize$insert(
    std::map<std::size_t, std::size_t> *m, std::size_t *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$usize$v$usize$get_unchecked(
    std::map<std::size_t, std::size_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$usize$v$usize$get_unchecked_mut(
    std::map<std::size_t, std::size_t> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$usize$contains_key(
    std::map<std::size_t, std::size_t> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$usize$key_by_index(
    std::map<std::size_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$usize$v$usize$value_by_index(
    std::map<std::size_t, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$usize$len(
    std::map<std::size_t, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$usize$clear(
    std::map<std::size_t, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$usize$null(std::unique_ptr<std::map<std::size_t, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$usize$raw(std::unique_ptr<std::map<std::size_t, std::size_t>> *ptr,
                                                        std::map<std::size_t, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::size_t>>(raw);
}

const std::map<std::size_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$usize$v$usize$get(const std::unique_ptr<std::map<std::size_t, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::size_t> *stdtybridge$unique_ptr$std$map$k$usize$v$usize$release(std::unique_ptr<std::map<std::size_t, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$usize$drop(std::unique_ptr<std::map<std::size_t, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$usize$v$isize$insert(
    std::map<std::size_t, rust::isize> *m, std::size_t *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$usize$v$isize$get_unchecked(
    std::map<std::size_t, rust::isize> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$usize$v$isize$get_unchecked_mut(
    std::map<std::size_t, rust::isize> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$isize$contains_key(
    std::map<std::size_t, rust::isize> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$isize$key_by_index(
    std::map<std::size_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$usize$v$isize$value_by_index(
    std::map<std::size_t, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$isize$len(
    std::map<std::size_t, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$isize$clear(
    std::map<std::size_t, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$isize$null(std::unique_ptr<std::map<std::size_t, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$isize$raw(std::unique_ptr<std::map<std::size_t, rust::isize>> *ptr,
                                                        std::map<std::size_t, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, rust::isize>>(raw);
}

const std::map<std::size_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$usize$v$isize$get(const std::unique_ptr<std::map<std::size_t, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, rust::isize> *stdtybridge$unique_ptr$std$map$k$usize$v$isize$release(std::unique_ptr<std::map<std::size_t, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$isize$drop(std::unique_ptr<std::map<std::size_t, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$usize$v$bool$insert(
    std::map<std::size_t, bool> *m, std::size_t *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$usize$v$bool$get_unchecked(
    std::map<std::size_t, bool> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$usize$v$bool$get_unchecked_mut(
    std::map<std::size_t, bool> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$bool$contains_key(
    std::map<std::size_t, bool> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$bool$key_by_index(
    std::map<std::size_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$usize$v$bool$value_by_index(
    std::map<std::size_t, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$bool$len(
    std::map<std::size_t, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$bool$clear(
    std::map<std::size_t, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$bool$null(std::unique_ptr<std::map<std::size_t, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$bool$raw(std::unique_ptr<std::map<std::size_t, bool>> *ptr,
                                                       std::map<std::size_t, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, bool>>(raw);
}

const std::map<std::size_t, bool> *stdtybridge$unique_ptr$std$map$k$usize$v$bool$get(const std::unique_ptr<std::map<std::size_t, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, bool> *stdtybridge$unique_ptr$std$map$k$usize$v$bool$release(std::unique_ptr<std::map<std::size_t, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$bool$drop(std::unique_ptr<std::map<std::size_t, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_USIZE && __STDTY_MAP_STRING

void stdtybridge$std$map$k$usize$v$string$insert(
    std::map<std::size_t, std::string> *m, std::size_t *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$usize$v$string$get_unchecked(
    std::map<std::size_t, std::string> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$usize$v$string$get_unchecked_mut(
    std::map<std::size_t, std::string> *m, std::size_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$usize$v$string$contains_key(
    std::map<std::size_t, std::string> *m, std::size_t *key) noexcept {
    return m->count(*key) > 0;
}

const std::size_t &stdtybridge$std$map$k$usize$v$string$key_by_index(
    std::map<std::size_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$usize$v$string$value_by_index(
    std::map<std::size_t, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$usize$v$string$len(
    std::map<std::size_t, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$usize$v$string$clear(
    std::map<std::size_t, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$usize$v$string$null(std::unique_ptr<std::map<std::size_t, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$string$raw(std::unique_ptr<std::map<std::size_t, std::string>> *ptr,
                                                         std::map<std::size_t, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::size_t, std::string>>(raw);
}

const std::map<std::size_t, std::string> *stdtybridge$unique_ptr$std$map$k$usize$v$string$get(const std::unique_ptr<std::map<std::size_t, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::size_t, std::string> *stdtybridge$unique_ptr$std$map$k$usize$v$string$release(std::unique_ptr<std::map<std::size_t, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$usize$v$string$drop(std::unique_ptr<std::map<std::size_t, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_U8

void stdtybridge$std$map$k$isize$v$u8$insert(
    std::map<rust::isize, std::uint8_t> *m, rust::isize *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$isize$v$u8$get_unchecked(
    std::map<rust::isize, std::uint8_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$isize$v$u8$get_unchecked_mut(
    std::map<rust::isize, std::uint8_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$u8$contains_key(
    std::map<rust::isize, std::uint8_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$u8$key_by_index(
    std::map<rust::isize, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$isize$v$u8$value_by_index(
    std::map<rust::isize, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$u8$len(
    std::map<rust::isize, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$u8$clear(
    std::map<rust::isize, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$u8$null(std::unique_ptr<std::map<rust::isize, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u8$raw(std::unique_ptr<std::map<rust::isize, std::uint8_t>> *ptr,
                                                     std::map<rust::isize, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint8_t>>(raw);
}

const std::map<rust::isize, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u8$get(const std::unique_ptr<std::map<rust::isize, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u8$release(std::unique_ptr<std::map<rust::isize, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u8$drop(std::unique_ptr<std::map<rust::isize, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_U16

void stdtybridge$std$map$k$isize$v$u16$insert(
    std::map<rust::isize, std::uint16_t> *m, rust::isize *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$isize$v$u16$get_unchecked(
    std::map<rust::isize, std::uint16_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$isize$v$u16$get_unchecked_mut(
    std::map<rust::isize, std::uint16_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$u16$contains_key(
    std::map<rust::isize, std::uint16_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$u16$key_by_index(
    std::map<rust::isize, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$isize$v$u16$value_by_index(
    std::map<rust::isize, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$u16$len(
    std::map<rust::isize, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$u16$clear(
    std::map<rust::isize, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$u16$null(std::unique_ptr<std::map<rust::isize, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u16$raw(std::unique_ptr<std::map<rust::isize, std::uint16_t>> *ptr,
                                                      std::map<rust::isize, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint16_t>>(raw);
}

const std::map<rust::isize, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u16$get(const std::unique_ptr<std::map<rust::isize, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u16$release(std::unique_ptr<std::map<rust::isize, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u16$drop(std::unique_ptr<std::map<rust::isize, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_U32

void stdtybridge$std$map$k$isize$v$u32$insert(
    std::map<rust::isize, std::uint32_t> *m, rust::isize *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$isize$v$u32$get_unchecked(
    std::map<rust::isize, std::uint32_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$isize$v$u32$get_unchecked_mut(
    std::map<rust::isize, std::uint32_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$u32$contains_key(
    std::map<rust::isize, std::uint32_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$u32$key_by_index(
    std::map<rust::isize, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$isize$v$u32$value_by_index(
    std::map<rust::isize, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$u32$len(
    std::map<rust::isize, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$u32$clear(
    std::map<rust::isize, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$u32$null(std::unique_ptr<std::map<rust::isize, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u32$raw(std::unique_ptr<std::map<rust::isize, std::uint32_t>> *ptr,
                                                      std::map<rust::isize, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint32_t>>(raw);
}

const std::map<rust::isize, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u32$get(const std::unique_ptr<std::map<rust::isize, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u32$release(std::unique_ptr<std::map<rust::isize, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u32$drop(std::unique_ptr<std::map<rust::isize, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_U64

void stdtybridge$std$map$k$isize$v$u64$insert(
    std::map<rust::isize, std::uint64_t> *m, rust::isize *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$isize$v$u64$get_unchecked(
    std::map<rust::isize, std::uint64_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$isize$v$u64$get_unchecked_mut(
    std::map<rust::isize, std::uint64_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$u64$contains_key(
    std::map<rust::isize, std::uint64_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$u64$key_by_index(
    std::map<rust::isize, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$isize$v$u64$value_by_index(
    std::map<rust::isize, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$u64$len(
    std::map<rust::isize, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$u64$clear(
    std::map<rust::isize, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$u64$null(std::unique_ptr<std::map<rust::isize, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u64$raw(std::unique_ptr<std::map<rust::isize, std::uint64_t>> *ptr,
                                                      std::map<rust::isize, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::uint64_t>>(raw);
}

const std::map<rust::isize, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u64$get(const std::unique_ptr<std::map<rust::isize, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$isize$v$u64$release(std::unique_ptr<std::map<rust::isize, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$u64$drop(std::unique_ptr<std::map<rust::isize, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_I8

void stdtybridge$std$map$k$isize$v$i8$insert(
    std::map<rust::isize, std::int8_t> *m, rust::isize *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$isize$v$i8$get_unchecked(
    std::map<rust::isize, std::int8_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$isize$v$i8$get_unchecked_mut(
    std::map<rust::isize, std::int8_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$i8$contains_key(
    std::map<rust::isize, std::int8_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$i8$key_by_index(
    std::map<rust::isize, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$isize$v$i8$value_by_index(
    std::map<rust::isize, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$i8$len(
    std::map<rust::isize, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$i8$clear(
    std::map<rust::isize, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$i8$null(std::unique_ptr<std::map<rust::isize, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i8$raw(std::unique_ptr<std::map<rust::isize, std::int8_t>> *ptr,
                                                     std::map<rust::isize, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int8_t>>(raw);
}

const std::map<rust::isize, std::int8_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i8$get(const std::unique_ptr<std::map<rust::isize, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::int8_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i8$release(std::unique_ptr<std::map<rust::isize, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i8$drop(std::unique_ptr<std::map<rust::isize, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_I16

void stdtybridge$std$map$k$isize$v$i16$insert(
    std::map<rust::isize, std::int16_t> *m, rust::isize *key, std::int16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int16_t &stdtybridge$std$map$k$isize$v$i16$get_unchecked(
    std::map<rust::isize, std::int16_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::int16_t &stdtybridge$std$map$k$isize$v$i16$get_unchecked_mut(
    std::map<rust::isize, std::int16_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$i16$contains_key(
    std::map<rust::isize, std::int16_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$i16$key_by_index(
    std::map<rust::isize, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int16_t &stdtybridge$std$map$k$isize$v$i16$value_by_index(
    std::map<rust::isize, std::int16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$i16$len(
    std::map<rust::isize, std::int16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$i16$clear(
    std::map<rust::isize, std::int16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$i16$null(std::unique_ptr<std::map<rust::isize, std::int16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i16$raw(std::unique_ptr<std::map<rust::isize, std::int16_t>> *ptr,
                                                      std::map<rust::isize, std::int16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int16_t>>(raw);
}

const std::map<rust::isize, std::int16_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i16$get(const std::unique_ptr<std::map<rust::isize, std::int16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::int16_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i16$release(std::unique_ptr<std::map<rust::isize, std::int16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i16$drop(std::unique_ptr<std::map<rust::isize, std::int16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_I32

void stdtybridge$std$map$k$isize$v$i32$insert(
    std::map<rust::isize, std::int32_t> *m, rust::isize *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$isize$v$i32$get_unchecked(
    std::map<rust::isize, std::int32_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$isize$v$i32$get_unchecked_mut(
    std::map<rust::isize, std::int32_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$i32$contains_key(
    std::map<rust::isize, std::int32_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$i32$key_by_index(
    std::map<rust::isize, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$isize$v$i32$value_by_index(
    std::map<rust::isize, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$i32$len(
    std::map<rust::isize, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$i32$clear(
    std::map<rust::isize, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$i32$null(std::unique_ptr<std::map<rust::isize, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i32$raw(std::unique_ptr<std::map<rust::isize, std::int32_t>> *ptr,
                                                      std::map<rust::isize, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int32_t>>(raw);
}

const std::map<rust::isize, std::int32_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i32$get(const std::unique_ptr<std::map<rust::isize, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::int32_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i32$release(std::unique_ptr<std::map<rust::isize, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i32$drop(std::unique_ptr<std::map<rust::isize, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_I64

void stdtybridge$std$map$k$isize$v$i64$insert(
    std::map<rust::isize, std::int64_t> *m, rust::isize *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$isize$v$i64$get_unchecked(
    std::map<rust::isize, std::int64_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$isize$v$i64$get_unchecked_mut(
    std::map<rust::isize, std::int64_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$i64$contains_key(
    std::map<rust::isize, std::int64_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$i64$key_by_index(
    std::map<rust::isize, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$isize$v$i64$value_by_index(
    std::map<rust::isize, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$i64$len(
    std::map<rust::isize, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$i64$clear(
    std::map<rust::isize, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$i64$null(std::unique_ptr<std::map<rust::isize, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i64$raw(std::unique_ptr<std::map<rust::isize, std::int64_t>> *ptr,
                                                      std::map<rust::isize, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::int64_t>>(raw);
}

const std::map<rust::isize, std::int64_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i64$get(const std::unique_ptr<std::map<rust::isize, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::int64_t> *stdtybridge$unique_ptr$std$map$k$isize$v$i64$release(std::unique_ptr<std::map<rust::isize, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$i64$drop(std::unique_ptr<std::map<rust::isize, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$isize$v$usize$insert(
    std::map<rust::isize, std::size_t> *m, rust::isize *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$isize$v$usize$get_unchecked(
    std::map<rust::isize, std::size_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$isize$v$usize$get_unchecked_mut(
    std::map<rust::isize, std::size_t> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$usize$contains_key(
    std::map<rust::isize, std::size_t> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$usize$key_by_index(
    std::map<rust::isize, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$isize$v$usize$value_by_index(
    std::map<rust::isize, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$usize$len(
    std::map<rust::isize, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$usize$clear(
    std::map<rust::isize, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$usize$null(std::unique_ptr<std::map<rust::isize, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$usize$raw(std::unique_ptr<std::map<rust::isize, std::size_t>> *ptr,
                                                        std::map<rust::isize, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::size_t>>(raw);
}

const std::map<rust::isize, std::size_t> *stdtybridge$unique_ptr$std$map$k$isize$v$usize$get(const std::unique_ptr<std::map<rust::isize, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::size_t> *stdtybridge$unique_ptr$std$map$k$isize$v$usize$release(std::unique_ptr<std::map<rust::isize, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$usize$drop(std::unique_ptr<std::map<rust::isize, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$isize$v$isize$insert(
    std::map<rust::isize, rust::isize> *m, rust::isize *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$isize$v$isize$get_unchecked(
    std::map<rust::isize, rust::isize> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$isize$v$isize$get_unchecked_mut(
    std::map<rust::isize, rust::isize> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$isize$contains_key(
    std::map<rust::isize, rust::isize> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$isize$key_by_index(
    std::map<rust::isize, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$isize$v$isize$value_by_index(
    std::map<rust::isize, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$isize$len(
    std::map<rust::isize, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$isize$clear(
    std::map<rust::isize, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$isize$null(std::unique_ptr<std::map<rust::isize, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$isize$raw(std::unique_ptr<std::map<rust::isize, rust::isize>> *ptr,
                                                        std::map<rust::isize, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, rust::isize>>(raw);
}

const std::map<rust::isize, rust::isize> *stdtybridge$unique_ptr$std$map$k$isize$v$isize$get(const std::unique_ptr<std::map<rust::isize, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, rust::isize> *stdtybridge$unique_ptr$std$map$k$isize$v$isize$release(std::unique_ptr<std::map<rust::isize, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$isize$drop(std::unique_ptr<std::map<rust::isize, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_BOOL

void stdtybridge$std$map$k$isize$v$bool$insert(
    std::map<rust::isize, bool> *m, rust::isize *key, bool *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

bool &stdtybridge$std$map$k$isize$v$bool$get_unchecked(
    std::map<rust::isize, bool> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool &stdtybridge$std$map$k$isize$v$bool$get_unchecked_mut(
    std::map<rust::isize, bool> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$bool$contains_key(
    std::map<rust::isize, bool> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$bool$key_by_index(
    std::map<rust::isize, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const bool &stdtybridge$std$map$k$isize$v$bool$value_by_index(
    std::map<rust::isize, bool> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$bool$len(
    std::map<rust::isize, bool> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$bool$clear(
    std::map<rust::isize, bool> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$bool$null(std::unique_ptr<std::map<rust::isize, bool>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, bool>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$bool$raw(std::unique_ptr<std::map<rust::isize, bool>> *ptr,
                                                       std::map<rust::isize, bool> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, bool>>(raw);
}

const std::map<rust::isize, bool> *stdtybridge$unique_ptr$std$map$k$isize$v$bool$get(const std::unique_ptr<std::map<rust::isize, bool>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, bool> *stdtybridge$unique_ptr$std$map$k$isize$v$bool$release(std::unique_ptr<std::map<rust::isize, bool>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$bool$drop(std::unique_ptr<std::map<rust::isize, bool>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_ISIZE && __STDTY_MAP_STRING

void stdtybridge$std$map$k$isize$v$string$insert(
    std::map<rust::isize, std::string> *m, rust::isize *key, std::string *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::string &stdtybridge$std$map$k$isize$v$string$get_unchecked(
    std::map<rust::isize, std::string> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

std::string &stdtybridge$std$map$k$isize$v$string$get_unchecked_mut(
    std::map<rust::isize, std::string> *m, rust::isize *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$isize$v$string$contains_key(
    std::map<rust::isize, std::string> *m, rust::isize *key) noexcept {
    return m->count(*key) > 0;
}

const rust::isize &stdtybridge$std$map$k$isize$v$string$key_by_index(
    std::map<rust::isize, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::string &stdtybridge$std$map$k$isize$v$string$value_by_index(
    std::map<rust::isize, std::string> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$isize$v$string$len(
    std::map<rust::isize, std::string> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$isize$v$string$clear(
    std::map<rust::isize, std::string> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$isize$v$string$null(std::unique_ptr<std::map<rust::isize, std::string>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::string>>();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$string$raw(std::unique_ptr<std::map<rust::isize, std::string>> *ptr,
                                                         std::map<rust::isize, std::string> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<rust::isize, std::string>>(raw);
}

const std::map<rust::isize, std::string> *stdtybridge$unique_ptr$std$map$k$isize$v$string$get(const std::unique_ptr<std::map<rust::isize, std::string>> &ptr) noexcept {
    return ptr.get();
}

std::map<rust::isize, std::string> *stdtybridge$unique_ptr$std$map$k$isize$v$string$release(std::unique_ptr<std::map<rust::isize, std::string>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$isize$v$string$drop(std::unique_ptr<std::map<rust::isize, std::string>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_U8

void stdtybridge$std$map$k$bool$v$u8$insert(
    std::map<bool, std::uint8_t> *m, bool *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$bool$v$u8$get_unchecked(
    std::map<bool, std::uint8_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$bool$v$u8$get_unchecked_mut(
    std::map<bool, std::uint8_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$u8$contains_key(
    std::map<bool, std::uint8_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$u8$key_by_index(
    std::map<bool, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$bool$v$u8$value_by_index(
    std::map<bool, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$u8$len(
    std::map<bool, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$u8$clear(
    std::map<bool, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$u8$null(std::unique_ptr<std::map<bool, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u8$raw(std::unique_ptr<std::map<bool, std::uint8_t>> *ptr,
                                                    std::map<bool, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint8_t>>(raw);
}

const std::map<bool, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u8$get(const std::unique_ptr<std::map<bool, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u8$release(std::unique_ptr<std::map<bool, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u8$drop(std::unique_ptr<std::map<bool, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_U16

void stdtybridge$std$map$k$bool$v$u16$insert(
    std::map<bool, std::uint16_t> *m, bool *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$bool$v$u16$get_unchecked(
    std::map<bool, std::uint16_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$bool$v$u16$get_unchecked_mut(
    std::map<bool, std::uint16_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$u16$contains_key(
    std::map<bool, std::uint16_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$u16$key_by_index(
    std::map<bool, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$bool$v$u16$value_by_index(
    std::map<bool, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$u16$len(
    std::map<bool, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$u16$clear(
    std::map<bool, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$u16$null(std::unique_ptr<std::map<bool, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u16$raw(std::unique_ptr<std::map<bool, std::uint16_t>> *ptr,
                                                     std::map<bool, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint16_t>>(raw);
}

const std::map<bool, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u16$get(const std::unique_ptr<std::map<bool, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u16$release(std::unique_ptr<std::map<bool, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u16$drop(std::unique_ptr<std::map<bool, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_U32

void stdtybridge$std$map$k$bool$v$u32$insert(
    std::map<bool, std::uint32_t> *m, bool *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$bool$v$u32$get_unchecked(
    std::map<bool, std::uint32_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$bool$v$u32$get_unchecked_mut(
    std::map<bool, std::uint32_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$u32$contains_key(
    std::map<bool, std::uint32_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$u32$key_by_index(
    std::map<bool, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$bool$v$u32$value_by_index(
    std::map<bool, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$u32$len(
    std::map<bool, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$u32$clear(
    std::map<bool, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$u32$null(std::unique_ptr<std::map<bool, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u32$raw(std::unique_ptr<std::map<bool, std::uint32_t>> *ptr,
                                                     std::map<bool, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint32_t>>(raw);
}

const std::map<bool, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u32$get(const std::unique_ptr<std::map<bool, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u32$release(std::unique_ptr<std::map<bool, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u32$drop(std::unique_ptr<std::map<bool, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_U64

void stdtybridge$std$map$k$bool$v$u64$insert(
    std::map<bool, std::uint64_t> *m, bool *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$bool$v$u64$get_unchecked(
    std::map<bool, std::uint64_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$bool$v$u64$get_unchecked_mut(
    std::map<bool, std::uint64_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$u64$contains_key(
    std::map<bool, std::uint64_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$u64$key_by_index(
    std::map<bool, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$bool$v$u64$value_by_index(
    std::map<bool, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$u64$len(
    std::map<bool, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$u64$clear(
    std::map<bool, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$u64$null(std::unique_ptr<std::map<bool, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u64$raw(std::unique_ptr<std::map<bool, std::uint64_t>> *ptr,
                                                     std::map<bool, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::uint64_t>>(raw);
}

const std::map<bool, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u64$get(const std::unique_ptr<std::map<bool, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$bool$v$u64$release(std::unique_ptr<std::map<bool, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$u64$drop(std::unique_ptr<std::map<bool, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_I8

void stdtybridge$std$map$k$bool$v$i8$insert(
    std::map<bool, std::int8_t> *m, bool *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$bool$v$i8$get_unchecked(
    std::map<bool, std::int8_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$bool$v$i8$get_unchecked_mut(
    std::map<bool, std::int8_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$i8$contains_key(
    std::map<bool, std::int8_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$i8$key_by_index(
    std::map<bool, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$bool$v$i8$value_by_index(
    std::map<bool, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$i8$len(
    std::map<bool, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$i8$clear(
    std::map<bool, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$i8$null(std::unique_ptr<std::map<bool, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i8$raw(std::unique_ptr<std::map<bool, std::int8_t>> *ptr,
                                                    std::map<bool, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int8_t>>(raw);
}

const std::map<bool, std::int8_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i8$get(const std::unique_ptr<std::map<bool, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::int8_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i8$release(std::unique_ptr<std::map<bool, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i8$drop(std::unique_ptr<std::map<bool, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_I16

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
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_I32

void stdtybridge$std$map$k$bool$v$i32$insert(
    std::map<bool, std::int32_t> *m, bool *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$bool$v$i32$get_unchecked(
    std::map<bool, std::int32_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$bool$v$i32$get_unchecked_mut(
    std::map<bool, std::int32_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$i32$contains_key(
    std::map<bool, std::int32_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$i32$key_by_index(
    std::map<bool, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$bool$v$i32$value_by_index(
    std::map<bool, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$i32$len(
    std::map<bool, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$i32$clear(
    std::map<bool, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$i32$null(std::unique_ptr<std::map<bool, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i32$raw(std::unique_ptr<std::map<bool, std::int32_t>> *ptr,
                                                     std::map<bool, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int32_t>>(raw);
}

const std::map<bool, std::int32_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i32$get(const std::unique_ptr<std::map<bool, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::int32_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i32$release(std::unique_ptr<std::map<bool, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i32$drop(std::unique_ptr<std::map<bool, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_I64

void stdtybridge$std$map$k$bool$v$i64$insert(
    std::map<bool, std::int64_t> *m, bool *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$bool$v$i64$get_unchecked(
    std::map<bool, std::int64_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$bool$v$i64$get_unchecked_mut(
    std::map<bool, std::int64_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$i64$contains_key(
    std::map<bool, std::int64_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$i64$key_by_index(
    std::map<bool, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$bool$v$i64$value_by_index(
    std::map<bool, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$i64$len(
    std::map<bool, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$i64$clear(
    std::map<bool, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$i64$null(std::unique_ptr<std::map<bool, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i64$raw(std::unique_ptr<std::map<bool, std::int64_t>> *ptr,
                                                     std::map<bool, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::int64_t>>(raw);
}

const std::map<bool, std::int64_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i64$get(const std::unique_ptr<std::map<bool, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::int64_t> *stdtybridge$unique_ptr$std$map$k$bool$v$i64$release(std::unique_ptr<std::map<bool, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$i64$drop(std::unique_ptr<std::map<bool, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$bool$v$usize$insert(
    std::map<bool, std::size_t> *m, bool *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$bool$v$usize$get_unchecked(
    std::map<bool, std::size_t> *m, bool *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$bool$v$usize$get_unchecked_mut(
    std::map<bool, std::size_t> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$usize$contains_key(
    std::map<bool, std::size_t> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$usize$key_by_index(
    std::map<bool, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$bool$v$usize$value_by_index(
    std::map<bool, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$usize$len(
    std::map<bool, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$usize$clear(
    std::map<bool, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$usize$null(std::unique_ptr<std::map<bool, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$usize$raw(std::unique_ptr<std::map<bool, std::size_t>> *ptr,
                                                       std::map<bool, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, std::size_t>>(raw);
}

const std::map<bool, std::size_t> *stdtybridge$unique_ptr$std$map$k$bool$v$usize$get(const std::unique_ptr<std::map<bool, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, std::size_t> *stdtybridge$unique_ptr$std$map$k$bool$v$usize$release(std::unique_ptr<std::map<bool, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$usize$drop(std::unique_ptr<std::map<bool, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$bool$v$isize$insert(
    std::map<bool, rust::isize> *m, bool *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$bool$v$isize$get_unchecked(
    std::map<bool, rust::isize> *m, bool *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$bool$v$isize$get_unchecked_mut(
    std::map<bool, rust::isize> *m, bool *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$bool$v$isize$contains_key(
    std::map<bool, rust::isize> *m, bool *key) noexcept {
    return m->count(*key) > 0;
}

const bool &stdtybridge$std$map$k$bool$v$isize$key_by_index(
    std::map<bool, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$bool$v$isize$value_by_index(
    std::map<bool, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$bool$v$isize$len(
    std::map<bool, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$bool$v$isize$clear(
    std::map<bool, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$bool$v$isize$null(std::unique_ptr<std::map<bool, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$isize$raw(std::unique_ptr<std::map<bool, rust::isize>> *ptr,
                                                       std::map<bool, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<bool, rust::isize>>(raw);
}

const std::map<bool, rust::isize> *stdtybridge$unique_ptr$std$map$k$bool$v$isize$get(const std::unique_ptr<std::map<bool, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<bool, rust::isize> *stdtybridge$unique_ptr$std$map$k$bool$v$isize$release(std::unique_ptr<std::map<bool, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$bool$v$isize$drop(std::unique_ptr<std::map<bool, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_BOOL

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
#endif
#if __STDTY_MAP_BOOL && __STDTY_MAP_STRING

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
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_U8

void stdtybridge$std$map$k$string$v$u8$insert(
    std::map<std::string, std::uint8_t> *m, std::string *key, std::uint8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint8_t &stdtybridge$std$map$k$string$v$u8$get_unchecked(
    std::map<std::string, std::uint8_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::uint8_t &stdtybridge$std$map$k$string$v$u8$get_unchecked_mut(
    std::map<std::string, std::uint8_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$u8$contains_key(
    std::map<std::string, std::uint8_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$u8$key_by_index(
    std::map<std::string, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint8_t &stdtybridge$std$map$k$string$v$u8$value_by_index(
    std::map<std::string, std::uint8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$u8$len(
    std::map<std::string, std::uint8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$u8$clear(
    std::map<std::string, std::uint8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$u8$null(std::unique_ptr<std::map<std::string, std::uint8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u8$raw(std::unique_ptr<std::map<std::string, std::uint8_t>> *ptr,
                                                      std::map<std::string, std::uint8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint8_t>>(raw);
}

const std::map<std::string, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$string$v$u8$get(const std::unique_ptr<std::map<std::string, std::uint8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::uint8_t> *stdtybridge$unique_ptr$std$map$k$string$v$u8$release(std::unique_ptr<std::map<std::string, std::uint8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u8$drop(std::unique_ptr<std::map<std::string, std::uint8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_U16

void stdtybridge$std$map$k$string$v$u16$insert(
    std::map<std::string, std::uint16_t> *m, std::string *key, std::uint16_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint16_t &stdtybridge$std$map$k$string$v$u16$get_unchecked(
    std::map<std::string, std::uint16_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::uint16_t &stdtybridge$std$map$k$string$v$u16$get_unchecked_mut(
    std::map<std::string, std::uint16_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$u16$contains_key(
    std::map<std::string, std::uint16_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$u16$key_by_index(
    std::map<std::string, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint16_t &stdtybridge$std$map$k$string$v$u16$value_by_index(
    std::map<std::string, std::uint16_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$u16$len(
    std::map<std::string, std::uint16_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$u16$clear(
    std::map<std::string, std::uint16_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$u16$null(std::unique_ptr<std::map<std::string, std::uint16_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint16_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u16$raw(std::unique_ptr<std::map<std::string, std::uint16_t>> *ptr,
                                                       std::map<std::string, std::uint16_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint16_t>>(raw);
}

const std::map<std::string, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$string$v$u16$get(const std::unique_ptr<std::map<std::string, std::uint16_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::uint16_t> *stdtybridge$unique_ptr$std$map$k$string$v$u16$release(std::unique_ptr<std::map<std::string, std::uint16_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u16$drop(std::unique_ptr<std::map<std::string, std::uint16_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_U32

void stdtybridge$std$map$k$string$v$u32$insert(
    std::map<std::string, std::uint32_t> *m, std::string *key, std::uint32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint32_t &stdtybridge$std$map$k$string$v$u32$get_unchecked(
    std::map<std::string, std::uint32_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::uint32_t &stdtybridge$std$map$k$string$v$u32$get_unchecked_mut(
    std::map<std::string, std::uint32_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$u32$contains_key(
    std::map<std::string, std::uint32_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$u32$key_by_index(
    std::map<std::string, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint32_t &stdtybridge$std$map$k$string$v$u32$value_by_index(
    std::map<std::string, std::uint32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$u32$len(
    std::map<std::string, std::uint32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$u32$clear(
    std::map<std::string, std::uint32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$u32$null(std::unique_ptr<std::map<std::string, std::uint32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u32$raw(std::unique_ptr<std::map<std::string, std::uint32_t>> *ptr,
                                                       std::map<std::string, std::uint32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint32_t>>(raw);
}

const std::map<std::string, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$string$v$u32$get(const std::unique_ptr<std::map<std::string, std::uint32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::uint32_t> *stdtybridge$unique_ptr$std$map$k$string$v$u32$release(std::unique_ptr<std::map<std::string, std::uint32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u32$drop(std::unique_ptr<std::map<std::string, std::uint32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_U64

void stdtybridge$std$map$k$string$v$u64$insert(
    std::map<std::string, std::uint64_t> *m, std::string *key, std::uint64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::uint64_t &stdtybridge$std$map$k$string$v$u64$get_unchecked(
    std::map<std::string, std::uint64_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::uint64_t &stdtybridge$std$map$k$string$v$u64$get_unchecked_mut(
    std::map<std::string, std::uint64_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$u64$contains_key(
    std::map<std::string, std::uint64_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$u64$key_by_index(
    std::map<std::string, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::uint64_t &stdtybridge$std$map$k$string$v$u64$value_by_index(
    std::map<std::string, std::uint64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$u64$len(
    std::map<std::string, std::uint64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$u64$clear(
    std::map<std::string, std::uint64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$u64$null(std::unique_ptr<std::map<std::string, std::uint64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u64$raw(std::unique_ptr<std::map<std::string, std::uint64_t>> *ptr,
                                                       std::map<std::string, std::uint64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::uint64_t>>(raw);
}

const std::map<std::string, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$string$v$u64$get(const std::unique_ptr<std::map<std::string, std::uint64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::uint64_t> *stdtybridge$unique_ptr$std$map$k$string$v$u64$release(std::unique_ptr<std::map<std::string, std::uint64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$u64$drop(std::unique_ptr<std::map<std::string, std::uint64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_I8

void stdtybridge$std$map$k$string$v$i8$insert(
    std::map<std::string, std::int8_t> *m, std::string *key, std::int8_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int8_t &stdtybridge$std$map$k$string$v$i8$get_unchecked(
    std::map<std::string, std::int8_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::int8_t &stdtybridge$std$map$k$string$v$i8$get_unchecked_mut(
    std::map<std::string, std::int8_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$i8$contains_key(
    std::map<std::string, std::int8_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$i8$key_by_index(
    std::map<std::string, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int8_t &stdtybridge$std$map$k$string$v$i8$value_by_index(
    std::map<std::string, std::int8_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$i8$len(
    std::map<std::string, std::int8_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$i8$clear(
    std::map<std::string, std::int8_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$i8$null(std::unique_ptr<std::map<std::string, std::int8_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int8_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i8$raw(std::unique_ptr<std::map<std::string, std::int8_t>> *ptr,
                                                      std::map<std::string, std::int8_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int8_t>>(raw);
}

const std::map<std::string, std::int8_t> *stdtybridge$unique_ptr$std$map$k$string$v$i8$get(const std::unique_ptr<std::map<std::string, std::int8_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::int8_t> *stdtybridge$unique_ptr$std$map$k$string$v$i8$release(std::unique_ptr<std::map<std::string, std::int8_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i8$drop(std::unique_ptr<std::map<std::string, std::int8_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_I16

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
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_I32

void stdtybridge$std$map$k$string$v$i32$insert(
    std::map<std::string, std::int32_t> *m, std::string *key, std::int32_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int32_t &stdtybridge$std$map$k$string$v$i32$get_unchecked(
    std::map<std::string, std::int32_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::int32_t &stdtybridge$std$map$k$string$v$i32$get_unchecked_mut(
    std::map<std::string, std::int32_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$i32$contains_key(
    std::map<std::string, std::int32_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$i32$key_by_index(
    std::map<std::string, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int32_t &stdtybridge$std$map$k$string$v$i32$value_by_index(
    std::map<std::string, std::int32_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$i32$len(
    std::map<std::string, std::int32_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$i32$clear(
    std::map<std::string, std::int32_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$i32$null(std::unique_ptr<std::map<std::string, std::int32_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int32_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i32$raw(std::unique_ptr<std::map<std::string, std::int32_t>> *ptr,
                                                       std::map<std::string, std::int32_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int32_t>>(raw);
}

const std::map<std::string, std::int32_t> *stdtybridge$unique_ptr$std$map$k$string$v$i32$get(const std::unique_ptr<std::map<std::string, std::int32_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::int32_t> *stdtybridge$unique_ptr$std$map$k$string$v$i32$release(std::unique_ptr<std::map<std::string, std::int32_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i32$drop(std::unique_ptr<std::map<std::string, std::int32_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_I64

void stdtybridge$std$map$k$string$v$i64$insert(
    std::map<std::string, std::int64_t> *m, std::string *key, std::int64_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::int64_t &stdtybridge$std$map$k$string$v$i64$get_unchecked(
    std::map<std::string, std::int64_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::int64_t &stdtybridge$std$map$k$string$v$i64$get_unchecked_mut(
    std::map<std::string, std::int64_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$i64$contains_key(
    std::map<std::string, std::int64_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$i64$key_by_index(
    std::map<std::string, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::int64_t &stdtybridge$std$map$k$string$v$i64$value_by_index(
    std::map<std::string, std::int64_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$i64$len(
    std::map<std::string, std::int64_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$i64$clear(
    std::map<std::string, std::int64_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$i64$null(std::unique_ptr<std::map<std::string, std::int64_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int64_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i64$raw(std::unique_ptr<std::map<std::string, std::int64_t>> *ptr,
                                                       std::map<std::string, std::int64_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::int64_t>>(raw);
}

const std::map<std::string, std::int64_t> *stdtybridge$unique_ptr$std$map$k$string$v$i64$get(const std::unique_ptr<std::map<std::string, std::int64_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::int64_t> *stdtybridge$unique_ptr$std$map$k$string$v$i64$release(std::unique_ptr<std::map<std::string, std::int64_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$i64$drop(std::unique_ptr<std::map<std::string, std::int64_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_USIZE

void stdtybridge$std$map$k$string$v$usize$insert(
    std::map<std::string, std::size_t> *m, std::string *key, std::size_t *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

std::size_t &stdtybridge$std$map$k$string$v$usize$get_unchecked(
    std::map<std::string, std::size_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

std::size_t &stdtybridge$std$map$k$string$v$usize$get_unchecked_mut(
    std::map<std::string, std::size_t> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$usize$contains_key(
    std::map<std::string, std::size_t> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$usize$key_by_index(
    std::map<std::string, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const std::size_t &stdtybridge$std$map$k$string$v$usize$value_by_index(
    std::map<std::string, std::size_t> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$usize$len(
    std::map<std::string, std::size_t> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$usize$clear(
    std::map<std::string, std::size_t> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$usize$null(std::unique_ptr<std::map<std::string, std::size_t>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::size_t>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$usize$raw(std::unique_ptr<std::map<std::string, std::size_t>> *ptr,
                                                         std::map<std::string, std::size_t> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, std::size_t>>(raw);
}

const std::map<std::string, std::size_t> *stdtybridge$unique_ptr$std$map$k$string$v$usize$get(const std::unique_ptr<std::map<std::string, std::size_t>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, std::size_t> *stdtybridge$unique_ptr$std$map$k$string$v$usize$release(std::unique_ptr<std::map<std::string, std::size_t>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$usize$drop(std::unique_ptr<std::map<std::string, std::size_t>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_ISIZE

void stdtybridge$std$map$k$string$v$isize$insert(
    std::map<std::string, rust::isize> *m, std::string *key, rust::isize *value) noexcept {
    m->insert({std::move(*key), std::move(*value)});
    destroy(key);
    destroy(value);
}

rust::isize &stdtybridge$std$map$k$string$v$isize$get_unchecked(
    std::map<std::string, rust::isize> *m, std::string *key) noexcept {
    return m->at(*key);
}

rust::isize &stdtybridge$std$map$k$string$v$isize$get_unchecked_mut(
    std::map<std::string, rust::isize> *m, std::string *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$string$v$isize$contains_key(
    std::map<std::string, rust::isize> *m, std::string *key) noexcept {
    return m->count(*key) > 0;
}

const std::string &stdtybridge$std$map$k$string$v$isize$key_by_index(
    std::map<std::string, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}

const rust::isize &stdtybridge$std$map$k$string$v$isize$value_by_index(
    std::map<std::string, rust::isize> *m, std::size_t index) noexcept {
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}

std::size_t stdtybridge$std$map$k$string$v$isize$len(
    std::map<std::string, rust::isize> *m) noexcept {
    return m->size();
}

void stdtybridge$std$map$k$string$v$isize$clear(
    std::map<std::string, rust::isize> *m) noexcept {
    m->clear();
}

// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k$string$v$isize$null(std::unique_ptr<std::map<std::string, rust::isize>> *ptr) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, rust::isize>>();
}

void stdtybridge$unique_ptr$std$map$k$string$v$isize$raw(std::unique_ptr<std::map<std::string, rust::isize>> *ptr,
                                                         std::map<std::string, rust::isize> *raw) noexcept {
    new (ptr) std::unique_ptr<std::map<std::string, rust::isize>>(raw);
}

const std::map<std::string, rust::isize> *stdtybridge$unique_ptr$std$map$k$string$v$isize$get(const std::unique_ptr<std::map<std::string, rust::isize>> &ptr) noexcept {
    return ptr.get();
}

std::map<std::string, rust::isize> *stdtybridge$unique_ptr$std$map$k$string$v$isize$release(std::unique_ptr<std::map<std::string, rust::isize>> &ptr) noexcept {
    return ptr.release();
}

void stdtybridge$unique_ptr$std$map$k$string$v$isize$drop(std::unique_ptr<std::map<std::string, rust::isize>> *ptr) noexcept {
    ptr->~unique_ptr();
}
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_BOOL

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
#endif
#if __STDTY_MAP_STRING && __STDTY_MAP_STRING

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
#endif
}
