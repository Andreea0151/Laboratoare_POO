#ifndef CAL_HPP
#define CAL_HPP

#include "Animal.hpp"

class Cal : public Animal
{
    char *nume;
    int nr_cai;
    int cantitate;
    std :: string mancare;
public:
    Cal();
    Cal(const char*, int, int, std :: string);
    ~Cal();

    void afisare();
    std :: string getMancare() { return mancare; }
    int getCantitate() { return cantitate; }
    char* getNume() { return nume; }
    int getCantitateperAnimal() { return cantitate / nr_cai; }
};

#endif
