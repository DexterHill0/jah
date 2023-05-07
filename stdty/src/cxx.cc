#include "../include/cxx.h"

#include <iostream>

template <typename T>
void destroy(T *ptr) {
    ptr->~T();
}

extern "C" {
// std::map
void stdtybridge$std$map$k$u8$v$u8$insert(
    std::map<uint8_t, uint8_t> *m, std::uint8_t *key, std::uint8_t *value) noexcept {
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
    std::map<uint8_t, uint8_t> *m) noexcept {
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
}

// rust::RustMap

//! EXTERNS
extern "C" {
void stdtybridge$rust_map$k$u8$v$u8$drop(
    rust::Map<std::uint8_t, std::uint8_t> *ptr) noexcept;

std::size_t stdtybridge$rust_map$k$u8$v$u8$len(
    const rust::Map<std::uint8_t, std::uint8_t> *ptr) noexcept;
}

//! FNS}
template <>
void rust::Map<std::uint8_t, std::uint8_t>::drop() noexcept {
    return stdtybridge$rust_map$k$u8$v$u8$drop(this);
}
template <>
std::size_t rust::Map<std::uint8_t, std::uint8_t>::size() const noexcept {
    return stdtybridge$rust_map$k$u8$v$u8$len(this);
}

// template <>
// std::size_t rust::Map<std::uint8_t, std::uint8_t>::capacity() const noexcept {
//     return stdtybridge$rust_map$k$u8$v$u8$capacity(this);
// }