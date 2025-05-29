#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>
#include <string>

class Employee; 

class Department {
public:
    Department(const std::string& name);
    const std::string& get_name() const;
    void add_employee(Employee* employee);
    void set_manager(Employee* manager);
    const std::vector<Employee*>& get_employees() const;
    Employee* get_manager() const;

private:
    std::string name_;
    std::vector<Employee*> employees_;
    Employee* manager_;
};

#endif 
