#ifndef FERMIER_HPP
#define FERMIER_HPP

#include "Baza.hpp"

class Fermier : public Baza
{
    int venit_pe_ora;
    int suprafata;  // fiecare 1000 m^2 = 10 ore lucrate
public:
    Fermier();
    Fermier(int, int);

    void afisare();
    float venit_total();
    bool isInginer_software();
};

#endif
