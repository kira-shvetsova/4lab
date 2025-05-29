#ifndef TIME_H
#define TIME_H
#include <iomanip>
#include <string>


class Time {
public:
    Time(int seconds);
    std::string to_string() const;
    void print_time() const;

private:
    int total_seconds_; 
};

#endif
