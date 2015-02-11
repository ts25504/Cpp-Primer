/*
 * Exercise 7.5: Provide operations in your Person class to return the name and address. Should these functions be const? Explain your choice.
 */

#ifndef EX_7_5_H
#define EX_7_5_H

#include <string>

class Person {
public:
    std::string get_name() const { return name };
    std::string get_address() const { return address };
private:
    std::string name;
    std::string address;
};

#endif
