#include "Time.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cassert>

Time::Time(int seconds) {
    assert(seconds >= 0 && "Секунды не могут быть отрицательными");
    total_seconds_ = seconds % 86400;
}

std::string Time::to_string() const {
    int hours = total_seconds_ / 3600;
    int minutes = (total_seconds_ % 3600) / 60;
    int seconds = total_seconds_ % 60;

    std::ostringstream oss;
    oss << std::setfill('0')
        << std::setw(2) << hours << ":"
        << std::setw(2) << minutes << ":"
        << std::setw(2) << seconds;
    return oss.str();
}

void Time::print_time() const {
    std::cout << to_string() << std::endl;
