#ifndef GUN_H
#define GUN_H

class Gun {
public:
    Gun(int bullets = 5);
    void shoot();
    void print_time() const;

private:
    int bullets_;
};

#endif 
