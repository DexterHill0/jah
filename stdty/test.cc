
#include "test.h"

#include <iostream>

// Map *get() {
//     std::map<uint8_t, uint8_t> map{{20, 10}, {200, 100}, {60, 15}, {69, 69}};
//     std::unique_ptr<Map> x = std::make_unique<Map>(map);

//     return x.release();
// }

Map pass_intermediary(RustMap& map) {
    auto new_map = Map{};

    for (std::size_t i = 0; i < map.size(); i++) {
        // auto pair = map.pop_first();

        // new_map.insert(std::make_pair(pair.key, pair.value));
    }

    return new_map;
}

void pass(RustMap& mmap) {
    auto map = pass_intermediary(mmap);

    std::cout << map.size() << std::endl;
    std::cout << map["aaa"] << std::endl;
}

// std::unique_ptr<std::vector<uint8_t>> __get_vec() {
//     std::vector<uint8_t> vec = {
//         10,
//         20,
//         30,
//         40,
//         50,
//         60,
//         70,
//         80,
//     };
//     std::unique_ptr<std::vector<uint8_t>> x = std::make_unique<std::vector<uint8_t>>(vec);

//     return x;
// }

// std::vector<uint8_t>* get_vec() {
//     std::unique_ptr<std::vector<::std::uint8_t>> (*get_vec_)() = __get_vec;

//     return get_vec_().release();
// }