#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Vehicul
{
    char *proprietar;
    int pret;
public:
    Vehicul();
    Vehicul(const char*, int);
    Vehicul(const Vehicul&);
    ~Vehicul();

    int getPret() const { return pret; }

    virtual void afisare();
    virtual void arataClasa();
};

#endif
