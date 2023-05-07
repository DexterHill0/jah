#pragma once
#include <array>
#include <map>
#include <memory>

namespace rust {
#ifndef STDTYBRIDGE1_RUST_MAP
template <typename K, typename V>
class Map final {
   public:
    using key_type = K;
    using value_type = V;

    ~Map() noexcept;

    std::size_t size() const noexcept;

   private:
    void drop() noexcept;

    // for size and alignment (verified in rust_map.rs)
    std::array<std::uintptr_t, 3> repr;
};
#endif  // STDTYBRIDGE1_RUST_MAP

#ifndef STDTYBRIDGE1_RUST_MAP
#define STDTYBRIDGE1_RUST_MAP
// template <typename K, typename V>
// Map<K, V>::Map(std::map<K, V> init) : Map{} {
//     this->reserve_total(init.size());
//     std::move(init.begin(), init.end(), std::back_inserter(*this));
// }

// template <typename K, typename V>
// Map<K, V>::Map(const Map &other) : Map() {
//     this->reserve_total(other.size());
//     std::copy(other.begin(), other.end(), std::back_inserter(*this));
// }

// template <typename K, typename V>
// Map<K, V>::Map(Map &&other) noexcept : repr(other.repr) {
//     new (&other) Map();
// }


template <typename K, typename V>
Map<K, V>::~Map() noexcept {
    this->drop();
}
#endif  // STDTYBRIDGE1_RUST_MAP
}  // namespace rust