#include <iostream>
#include "Employee.h"

int main()
{
    Employee e1;
    Employee e2("ts");

    e1 = e2;
    std::cout << e1.id << " " << e1.name << std::endl;
    std::cout << e2.id << " " << e2.name << std::endl;

    return 0;
}
