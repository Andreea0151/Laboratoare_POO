#ifndef CAPRA_HPP
#define CAPRA_HPP

#include "Animal.hpp"

 class Capra : public Animal
{
    char* nume;
    int nr_capre;
    int cantitate;
    std :: string mancare;
public:
    Capra();
    Capra(const char*, int, int, std :: string);
    ~Capra();

    void afisare();
    std :: string getMancare() { return mancare; }
    int getCantitate() { return cantitate; }
    char* getNume() { return nume; }
    int getCantitateperAnimal() { return cantitate / nr_capre; }
};

#endif
