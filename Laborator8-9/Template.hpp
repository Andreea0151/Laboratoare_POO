#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include "Fractie.hpp"
#include "Nr_complex.hpp"
using namespace std;

template <class X>
class Vector
{
    int dim;
    X *buf;
public:
    Vector();
    Vector(int, X*);
    Vector(const Vector&);
    ~Vector();

    Vector& operator =(const Vector&);
    void afisare();
    void addElem(int, X&);
    void sortare();
};

#endif
