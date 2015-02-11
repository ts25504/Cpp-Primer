/*
 * Exercise 7.23: Write your own version of the Screen class.
 */

#ifndef EX_7_23_H
#define EX_7_23_H

#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd),
                                     contents(ht * wd, c) { }
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen& move(pos r, pos c);
    void some_member() const { ++access_ctr; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;
};

inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Scrren::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

#endif
