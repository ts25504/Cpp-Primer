/*
 * Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer
 * to Y, and Y has an object of type X.
 */

#ifndef EX_7_31_H
#define EX_7_31_H

class Y;

class X {
    Y* y = nullptr;
};

class Y {
    X x;
};

#endif
