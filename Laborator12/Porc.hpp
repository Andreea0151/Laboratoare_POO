#ifndef PORC_HPP
#define PORC_HPP

#include "Animal.hpp"

class Porc : public Animal
{
    char *nume;
    int nr_porci;
    int cantitate1;
    int cantitate2;
    std :: string mancare1;
    std :: string mancare2;
public:
    Porc();
    Porc(const char*, int, int, int, std :: string, std :: string);
    ~Porc();

    void afisare();
    std :: string getMancare() { return mancare1; }
    std :: string getMancare2() { return mancare2; }
    int getCantitate() { return cantitate1; }
    int getCantitate2() { return cantitate2; }
    char* getNume() { return nume; }
    int getCantitateperAnimal() { return (cantitate1 + cantitate2) / nr_porci; }
};

#endif
