#include "../include/cxx.h"

#include <iostream>;

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
    std::map<uint8_t, uint8_t> *m, std::uint8_t *key) noexcept {
    return m->at(*key);
}

bool stdtybridge$std$map$k$u8$v$u8$contains_key(
    std::map<uint8_t, uint8_t> *m, std::uint8_t *key) noexcept {
    return m->count(*key) > 0;
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


