#include "Gun.h"
#include <iostream> 
using namespace std;


Gun::Gun(int bullets) : bullets_(bullets) {
}

void Gun::shoot() {
    if (bullets_ > 0) {
        cout << "Бах!" << endl; 
        bullets_--;
    }
    else {
        cout << "Клац!" << endl; 
    }
}

void Gun::print_time() const {
    cout << "Количество патронов: " << bullets_ << endl; 
}
