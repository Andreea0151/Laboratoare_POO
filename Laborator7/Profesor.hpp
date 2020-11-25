#ifndef PROFESOR_HPP
#define PROFESOR_HPP

#include "Baza.hpp"

class Profesor : public Baza
{
    int venit_pe_ora;
    int cursuri;  // 1 curs = 2 ore lucrate
public:
    Profesor();
    Profesor(int, int);

    void afisare();
    void venit_Profesor();
    float venit_total();
    bool isInginer_software();
};

#endif
