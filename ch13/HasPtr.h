/*
 * Exercise 13.8: Write the assignment operator for the HasPtr class from exercise 13.5 in § 13.1.1 (p. 499). As with the copy constructor, your assignment operator should copy the object to which ps points.
 *
 * Exercise 13.11: Add a destructor to your HasPtr class from the previous exercises.
 *
 * Exercise 13.22: Assume that we want HasPtr to behave like a value. That is, each object should have its own copy of the string to which the objects point. We’ll show the definitions of the copy-control members in the next section. However, you already know everything you need to know to implement these members. Write the HasPtr copy constructor and copy- assignment operator before reading on.
 *
 */

#ifndef HasPtr_h
#define HasPtr_h

#include <string>

class HasPtr {
public:
    HasPtr(const std::string& s = std::string())
        : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& rhs) : ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr& operator=(const HasPtr& rhs)
    {
        *ps = *rhs.ps;
        i = rhs.i;
        return *this;
    }
    ~HasPtr()
    {
        if (ps)
        {
            delete ps;
            ps = NULL;
        }
    }
private:
    std::string* ps;
    int i;
};

#endif
