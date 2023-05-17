
#include <bitset>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "./include/cxx.h"

// struct Fake {};

using Map = std::map<std::string, std::uint8_t>;
using RustMap = rust2::Map<rust::String, std::uint8_t, entries::__KstringVboolMapEntry>;

// // // // using Map2 = rust::Map<uint8_t, uint8_t>;

// // Map *get();

void pass(RustMap& map);

Map pass_intermediary(RustMap& map);

// std::vector<uint8_t>* get_vec();
