#include "Department.h"
#include "Employee.h"

Department::Department(const std::string& name)
    : name_(name), manager_(nullptr) {}

const std::string& Department::get_name() const {
    return name_;
}

void Department::add_employee(Employee* employee) {
    employees_.push_back(employee);
}

void Department::set_manager(Employee* manager) {
    this->manager_ = manager;
}

const std::vector<Employee*>& Department::get_employees() const {
    return employees_;
}

Employee* Department::get_manager() const {
    return manager_;
}
