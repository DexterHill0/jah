
#pragma once
#include <array>
#include <map>
#include <memory>
#include <string>

#include "../target/cxxbridge/rust/cxx.h"

namespace entries {

struct __Ki16Vi16MapEntry {
    std::int16_t key;
    std::int16_t value;
};

struct __Ki16VboolMapEntry {
    std::int16_t key;
    bool value;
};

struct __Ki16VstringMapEntry {
    std::int16_t key;
    rust::string value;
};

struct __KboolVi16MapEntry {
    bool key;
    std::int16_t value;
};

struct __KboolVboolMapEntry {
    bool key;
    bool value;
};

struct __KboolVstringMapEntry {
    bool key;
    rust::string value;
};

struct __KstringVi16MapEntry {
    rust::string key;
    std::int16_t value;
};

struct __KstringVboolMapEntry {
    rust::string key;
    bool value;
};

struct __KstringVstringMapEntry {
    rust::string key;
    rust::string value;
};

}  // namespace entries

namespace rust2 {
inline namespace stdtybridge {

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

    // for size and alignment (verified in rust2_map.rs)
    std::array<std::uintptr_t, 3> repr;
};

template <typename K, typename V, typename Entry>
Map<K, V, Entry>::~Map() noexcept {
    this->drop();
}

}  // namespace stdtybridge
}  // namespace rust2
