/*
 * Exercise 7.22: Update your Person class to hide its implementation.
 */

#ifndef EX_7_22_H
#define EX_7_22_H

#include <string>
#include <iostream>

class Person {
    friend std::istream& read(std::istream& is, const Person& person);
    friend std::ostream& print(std::ostream& os, const Person& person);
public:
    Person() = default;
    Person(const std::string& n, const std::string& a) : name(n), address(a) { }
    Person(std::istream& is) { read(is, *this); }
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
