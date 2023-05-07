#include <map>
#include <memory>
#include <vector>

#include "./include/cxx.h"

using Map = std::map<uint8_t, uint8_t>;

// using Map2 = rust::Map<uint8_t, uint8_t>;

Map *get();

// void pass(Map2& map);

// std::vector<uint8_t>* get_vec();