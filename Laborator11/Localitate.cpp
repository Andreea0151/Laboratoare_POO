#include "Localitate.hpp"

Localitate :: Localitate() : nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate :: Localitate(const char* nume, int nr_locuitori, int venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate :: Localitate(const Localitate& obj) : nr_locuitori(obj.nr_locuitori),
                                                  venit_mediu(obj.venit_mediu)
{
    nume = NULL;
    *this = obj;
}

Localitate :: ~Localitate() { delete []nume; }

void Localitate :: afisare()
{
    std :: cout << "\nNume: " << nume << ". Nr locuitori: " << nr_locuitori <<
    ". Venit mediu: " << venit_mediu;
}
