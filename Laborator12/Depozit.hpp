#ifndef DEPOZIT_HPP
#define DEPOZIT_HPP

#include "Animal.hpp"

class Depozit
{
public:
// se retine cantitatea consumata intr-o zi
    int capacitate;
    int nutret;
    int graunte;
    int iarba;
public:
    Depozit();
    Depozit(int, int, int, int);
};

#endif
