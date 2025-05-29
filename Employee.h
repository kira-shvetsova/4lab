#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
class Department; 

class Employee {
public:
    Employee(const std::string& name, Department* department, bool manager = false);
    std::string to_string() const;
    void print_time() const;
    Department* get_department() const;

private:
    std::string name_;
    Department* department_;
    bool manager_;
};

#endif 
