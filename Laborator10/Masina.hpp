#ifndef MASINA_HPP
#define MASINA_HPP

#include "Vehicul.hpp"

class Masina: virtual public Vehicul
{
    int dimensiuni[3]; //lungime, latime si inaltime
    char *marca;
public:
    Masina();
    Masina(int*, const char*, const char*, int);
    Masina(const Masina&);
    ~Masina();

    virtual void afisare ();
    virtual void arataClasa();
};

#endif
