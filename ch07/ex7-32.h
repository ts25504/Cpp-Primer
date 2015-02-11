/*
 * Exercise 7.32: Define your own versions of Screen and Window_mgr in
 * which clear is a member of Window_mgr and a friend of Screen.
 */

#ifndef EX_7_32_H
#define EX_7_32_H

#include <string>
#include <iostream>
#include <vector>

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screen{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

class Screen {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    friend void Window_mgr::clear(ScreenIndex i);
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd),
                                     contents(ht * wd, c) { }
    inline char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen& move(pos r, pos c);
    inline void some_member() const { ++access_ctr; }
    Screen& set(char c);
    Screen& set(pos r, pos c, char ch);
    const Screen& display(std::ostream& os) const { do_display(os); return *this; }
    Screen& display(std::ostream& os) { do_display(os); return *this; }
private:
    void do_display(std::ostream& os) const { os << contents; }

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

inline char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r*width+c] = ch;
    return *this;
}

#endif
