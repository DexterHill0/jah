
#pragma once
#include <array>
#include <map>
#include <memory>
#include <string>
#if defined(_WIN32)
#include <basetsd.h>
#else
#include <sys/types.h>
#endif

namespace entries {

    struct __Ku8Vu8MapEntry {
        std::uint8_t key;
        std::uint8_t value;
    };    
    
    struct __Ku8Vu16MapEntry {
        std::uint8_t key;
        std::uint16_t value;
    };    
    
    struct __Ku8Vu32MapEntry {
        std::uint8_t key;
        std::uint32_t value;
    };    
    
    struct __Ku16Vu8MapEntry {
        std::uint16_t key;
        std::uint8_t value;
    };    
    
    struct __Ku16Vu16MapEntry {
        std::uint16_t key;
        std::uint16_t value;
    };    
    
    struct __Ku16Vu32MapEntry {
        std::uint16_t key;
        std::uint32_t value;
    };    
    
    struct __Ku32Vu8MapEntry {
        std::uint32_t key;
        std::uint8_t value;
    };    
    
    struct __Ku32Vu16MapEntry {
        std::uint32_t key;
        std::uint16_t value;
    };    
    
    struct __Ku32Vu32MapEntry {
        std::uint32_t key;
        std::uint32_t value;
    };    
    
}

namespace rust {
inline namespace stdtybridge {
#ifndef STDTYBRIDGE_RUST_ISIZE
#define STDTYBRIDGE_RUST_ISIZE
#if defined(_WIN32)
using isize = SSIZE_T;
#else
using isize = ssize_t;
#endif
#endif  // STDTYBRIDGE_RUST_ISIZE

#ifndef STDTYBRIDGE_RUST_MAP
template <typename K, typename V, typename Entry>
class Map final {
public:
using key_type = K;
using value_type = V;
using entry_type = Entry;

Entry pop_first() noexcept;
std::size_t size() const noexcept;

~Map() noexcept;

private:
void drop() noexcept;

// for size and alignment (verified in rust_map.rs)
std::array<std::uintptr_t, 3> repr;
};
#endif

#ifndef STDTYBRIDGE_RUST_MAP
#define STDTYBRIDGE_RUST_MAP

template <typename K, typename V, typename Entry>
Map<K, V, Entry>::~Map() noexcept {
this->drop();
}

#endif  // STDTYBRIDGE1_RUST_MAP
}  // namespace stdtybridge
}  // namespace rust
    