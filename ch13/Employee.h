/*
 * Exercise 13.18: Define an Employee class that contains an employee name and a unique employee identifier. Give the class a default constructor and a constructor that takes a string representing the employee’s name. Each constructor should generate a unique ID by incrementing a static data member.
 *
 * Exercise 13.19: Does your Employee class need to define its own versions of the copy-control members? If so, why? If not, why not? Implement whatever copy-control members you think Employee needs.
 */

#ifndef Employee_h
#define Employee_h

#include <string>

struct Employee {
    Employee() { }
    Employee(std::string n) : name(n), id(id_generator()) { }
    Employee(const Employee& e) : name(e.name), id(id_generator()) { }
    Employee& operator=(const Employee& e)
    {
        name = e.name;
        id = id_generator();
        return *this;
    }

    unsigned id_generator();
    std::string name;
    unsigned id;
};

inline unsigned Employee::id_generator()
{
    static unsigned i = 0;
    return ++i;
}
#endif
