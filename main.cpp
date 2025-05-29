#include <iostream>
#include "Time.h"
#include "House.h"
#include <limits>
#include <Windows.h>
#include "Employee.h"
#include <vector>
#include <memory>
#include "Department.h"
#include "Gun.h"
#include <limits>
using namespace std;

vector<unique_ptr<Department>> departments;
vector<unique_ptr<Employee>> employees;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int count;

    cout << "Лабораторная работа № 3." << endl;

    while (true) {
        cout << "Введите номер задания от 1 до 6. Введите 0, чтобы закончить." << endl;
        cin >> count;

        if (count == 0) {
            break;
        }

        switch (count) {
        case 1: {
            cout << "1. Время" << endl;
            cout << "Необходимо создать и вывести на экран текстовую форму для следующих вариантов времени: 10 секунд, 10000 секунд, 100000 секунд" << endl;
            
            Time time1(10);
            cout << "10 секунд:" << endl;
            time1.print_time();

            Time time2(10000);
            cout << "10000 секунд:" << endl;
            time2.print_time();

            Time time3(100000);
            cout << "100000 секунд:" << endl;
            time3.print_time();
            break;
        }
        case 2: {
            cout << "2. Этажи" << endl;
            cout << "Создать и вывести на экран дома с 1, 5, 23 этажами." << endl;
            House house1(1);
            house1.print_time();

            House house2(5);
            house2.print_time();

            House house3(23);
            house3.print_time();
            break;
        }
        case 3: {
            cout << "3. Сотрудники" << endl;
            cout << "Необходимо выполнить следующие задачи: 1. Создать Сотрудников Петрова, Козлова, Сидорова работающих в отделе IT. 2. Сделать Козлова начальником IT отдела. 3. Вывести на экран текстовое представление всех трех Сотрудников(у всех троих должен один и тот же отдел и начальник)." << endl;

            departments.push_back(make_unique<Department>("IT"));
            Department* itDepartment = departments.back().get();

            employees.push_back(make_unique<Employee>("Петров", itDepartment));
            employees.push_back(make_unique<Employee>("Козлов", itDepartment, true));
            employees.push_back(make_unique<Employee>("Сидоров", itDepartment));

            for (const auto& emp : employees) {
                cout << emp->to_string() << endl;
            }
            break;
        }
        case 4: {
            cout << "4. Сотрудники и отделы" << endl;
            cout << "Измените решение, полученное в задаче 2.4 таким образом, чтобы имея ссылку на сотрудника, можно было бы узнать список всех сотрудников этого отдела." << endl;

            if (departments.empty()) {
                cout << "Ошибка: отделы не созданы. Сначала выполните задание 3." << endl;
                break;
            }

            Department* dep = departments[0].get();
            cout << "Сотрудники отдела " << dep->get_name() << ":" << endl;

            for (const auto& emp : dep->get_employees()) {
                cout << " - " << emp->to_string() << endl;
            }

            if (auto manager = dep->get_manager()) {
                cout << "Начальник отдела: " << manager->to_string() << endl;
            }
            else {
                cout << "Начальник не назначен" << endl;
            }
            break;
        }
        case 5: {
            cout << "5. Этажи" << endl;
            cout << "Создать и вывести на экран дома с 2, 35, 91 этажами." << endl;
            House house1(2);
            house1.print_time();

            House house2(35);
            house2.print_time();

            House house3(91);
            house3.print_time();
            break;
        }
        case 6: {
            Gun gun(3);
            gun.print_time();

            for (int i = 0; i < 5; ++i) {
                gun.shoot();
            }

            gun.print_time();
            break;
        }
        default:
            cout << "Неверный номер задания. Пожалуйста, попробуйте снова." << endl;
            break;
        }
    }

    return 0;
}
