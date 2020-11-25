#ifndef INGINER_SOFTWARE_HPP
#define INGINER_SOFTWARE_HPP

#include "Inginer.hpp"

class Inginer_software: public Inginer
{
    char* companie;
    int experienta;
public:
    Inginer_software();
    Inginer_software(const char*, int, int, int);
    Inginer_software(const Inginer_software&);
    ~Inginer_software();

    Inginer_software& operator=(const Inginer_software&);
    void afisare();
    void venit_Inginer_software();  //?
    bool isInginer_software();
};

#endif
