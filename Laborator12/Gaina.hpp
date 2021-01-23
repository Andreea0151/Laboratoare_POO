#ifndef GAINA_HPP
#define GAINA_HPP

#include "Animal.hpp"

class Gaina : public Animal
{
    char *nume;
    int nr_gaini;
    int cantitate;
    std :: string mancare;
public:

    Gaina();
    Gaina(const char*, int, int, std :: string);
    ~Gaina();

    void afisare();
    std :: string getMancare() { return mancare; }
    int getCantitate() { return cantitate; }
    char* getNume() { return nume; }
    int getCantitateperAnimal() { return cantitate / nr_gaini; }
};

#endif
