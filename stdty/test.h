
#include <bitset>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "./include/cxx.h"

// struct Fake {};

using Map = std::map<std::string, std::uint8_t>;
using RustMap = rust::Map<rust::String, std::uint8_t, entries::__KstringVboolMapEntry>;

// // // // using Map2 = rust::Map<uint8_t, uint8_t>;

// // Map *get();

// void pass(RustMap& map);

// Map pass_intermediary(RustMap& map);

class Test {
   public:
    bool b;
    std::vector<uint8_t>* x;
    uint8_t y;

    Test() : b(false), y(69) {
        auto bx = std::make_unique<std::vector<uint8_t>>(std::vector<uint8_t>({10, 20, 30}));
        this->x = bx.release();
    }
};

std::vector<uint8_t> get();
Test* get_test();
