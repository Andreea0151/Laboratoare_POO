#ifndef REMORCA_HPP
#define REMORCA_HPP

#include "Vehicul.hpp"

class Remorca: virtual public Vehicul
{
    int dimensiuni[3]; //lungime, latime si inaltime
    int greutate_maxima;
public:
    Remorca();
    Remorca(int*, int, const char*, int);

    int getGreutate() const { return greutate_maxima; }
    int* getVectDim()  { return dimensiuni; }

    virtual void afisare ();
    virtual void arataClasa();
};

#endif
