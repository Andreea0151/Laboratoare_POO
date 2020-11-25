#ifndef INGINER_HPP
#define INGINER_HPP

#include "Baza.hpp"

class Inginer : public Baza
{
protected:
    int venit_pe_ora;
    int ore_lucrate;
public:
    Inginer();
    Inginer(int, int);

    void afisare();
    float venit_total();
    bool isInginer_software();
};

#endif
