#ifndef HOUSE_H
#define HOUSE_H

#include <string>


// Класс House для описания дома
class House {
private:
    int floors; 

public:

    House(int n);
    void print_time() const;
    std::string to_text() const;
    int get_floors() const;
};

#endif
