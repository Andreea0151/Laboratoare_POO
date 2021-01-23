#ifndef VACA_HPP
#define VACA_HPP

#include "Animal.hpp"

class Vaca : public Animal
{
    char *nume;
    int nr_vaci;
    int cantitate;
    std :: string mancare;
public:
    Vaca();
    Vaca(const char*, int, int, std :: string);
    ~Vaca();

    void afisare();
    std :: string getMancare() { return mancare; }
    int getCantitate() { return cantitate; }
    char* getNume() { return nume; }
    int getCantitateperAnimal() {return cantitate / nr_vaci; }
};

#endif
