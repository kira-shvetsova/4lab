#include "Employee.h"
#include "Department.h"
#include <iostream>

Employee::Employee(const std::string& name, Department* department, bool manager)
    : name_(name), department_(department), manager_(manager) {
    department->add_employee(this);
    if (manager) {
        department->set_manager(this);
    }
}

std::string Employee::to_string() const {
    if (manager_) {
        return name_ + " - начальник отдела " + department_->get_name();
    }
    else {
        return name_ + " работает в отделе " + department_->get_name();
    }
}

void Employee::print_time() const {
    std::cout << to_string() << std::endl;
}

Department* Employee::get_department() const {
    return department_;
}
