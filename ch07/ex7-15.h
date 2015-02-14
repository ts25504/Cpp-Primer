/*
 * Exercise 7.15: Add appropriate constructors to your Person class.
 */

#ifndef EX_7_15_H
#define EX_7_15_H

#include <string>
#include <iostream>

struct Person;
std::istream& read(std::istream& is, const Person& person);

struct Person {
    Person() = default;
    Person(const std::string& n, const std::string& a) : name(n), address(a) { }
    Person(std::istream& is) { read(is, *this); }
    std::string get_name() const { return name };
    std::string get_address() const { return address };

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
