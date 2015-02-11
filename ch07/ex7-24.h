/*
 * Exercise 7.24: Give your Screen class three constructors: a default constructor; a constructor that takes values for height and width and initializes the contents to hold the given number of blanks; and a constructor that takes values for height, width, and a character to use as the contents of the screen.
 */

#ifndef EX_7_24_H
#define EX_7_24_H

#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
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
