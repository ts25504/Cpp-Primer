/*
 * Exercise 13.8: Write the assignment operator for the HasPtr class from exercise 13.5 in § 13.1.1 (p. 499). As with the copy constructor, your assignment operator should copy the object to which ps points.
 *
 * Exercise 13.11: Add a destructor to your HasPtr class from the previous exercises.
 *
 * Exercise 13.22: Assume that we want HasPtr to behave like a value. That is, each object should have its own copy of the string to which the objects point. We’ll show the definitions of the copy-control members in the next section. However, you already know everything you need to know to implement these members. Write the HasPtr copy constructor and copy- assignment operator before reading on.
 *
 * Exercise 13.27: Define your own reference-counted version of HasPtr.
 *
 */

#ifndef HasPtr_h
#define HasPtr_h

#include <string>

class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
    HasPtr(const HasPtr& rhs) :
        ps(new std::string(*hp.ps)), i(hp.i), use(hp.use) { ++use; }
    HasPtr& operator=(const HasPtr& rhs)
    {
        ++*rhs.use;
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }
        auto newp = new std::string(*rhs.ps);
        delete ps;
        ps = newp;
        i = rhs.i;
        use = rhs.use;
        return *this;
    }
    ~HasPtr()
    {
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }
    }
private:
    std::size_t* use;
    std::string* ps;
    int i;
};

#endif
