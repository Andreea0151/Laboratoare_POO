#ifndef MASINA_HPP
#define MASINA_HPP

#include "Remorca.hpp"

#include <iostream>
#include <cstring>
using namespace std;

class Masina : public Remorca
{
        char *marca;
        int valoare;
public:
        Masina ();
        Masina (const char*, int, const char*, int);
        Masina (const Masina&);
        ~Masina();

        Masina &operator=(const Masina &);
        friend istream& operator>>(istream&, Masina&);
        friend ostream& operator<<(ostream&, const Masina&);
        void interschimbare(Masina&);
        int getValoare();
};
void sortare(Masina *v, int n);
void afisare(Masina *v, int n);

#endif
