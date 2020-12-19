#ifndef MASINA_CU_REMORCA_HPP
#define MASINA_CU_REMORCA_HPP

#include "Masina.hpp"
#include "Remorca.hpp"

class Masina_cu_Remorca: public Masina, public Remorca
{
    int masa_totala; //fara incarcatura
public:
    Masina_cu_Remorca();
    Masina_cu_Remorca(int, int*, const char*, int*, int, const char*, int);

    virtual void afisare ();
    virtual void arataClasa();

    int operator+ (const Masina_cu_Remorca&);
    int operator- (const Masina_cu_Remorca&);
    bool operator< (const Masina_cu_Remorca&);
    bool operator> (const Masina_cu_Remorca&);
};

#endif
