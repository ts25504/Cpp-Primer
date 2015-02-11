/*
 * Exercise 7.27: Add the move, set, and display operations to your version
 * of Screen. Test your class by executing the following code: 
 * Code:
 * Screen myScreen(5, 5, 'X');
 * myScreen.move(4,0).set('#').display(cout);
 * cout << "\n";
 * myScreen.display(cout);
 * cout << "\n";
 */

#ifndef EX_7_27_H
#define EX_7_27_H

#include <string>
#include <iostream>

class Screen {
public:
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
