/*
 * Exercise 7.9: Add operations to read and print Person objects to the code you wrote for the exercises in § 7.1.2 (p. 260).
 */

#ifndef EX_7_9_H
#define EX_7_9_H

#include <string>
#include <iostream>

class Person {
public:
    std::string get_name() const { return name };
    std::string get_address() const { return address };
private:
    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, const Person& person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name << person.address << std::endl;
    return os;
}

#endif
