#include "House.h"
#include <iostream>
#include <cassert>

House::House(int n) : floors(n) {
    assert(n > 0 && "Количество этажей должно быть положительным");
}


std::string House::to_text() const {
    std::string ending;
    if (floors % 10 == 1 && floors % 100 != 11) {
        ending = "этажом";
    }
    else {
        ending = "этажами";
    }

    return "Дом с " + std::to_string(floors) + " " + ending;
}

int House::get_floors() const {
    return floors;
}

void House::print_time() const {
    std::cout << to_text() << std::endl;
}
