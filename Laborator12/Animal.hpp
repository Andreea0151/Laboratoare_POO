#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class Animal
{
public:
    virtual std :: string getMancare() = 0;
    virtual int getCantitate() = 0;
    virtual char* getNume() = 0;
    virtual void afisare() = 0;
    virtual int getCantitateperAnimal() = 0;
    virtual ~Animal() = 0;
};

#endif
