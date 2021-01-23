#include "Vaca.hpp"

Vaca :: Vaca() : nume(NULL), nr_vaci(0), cantitate(0) {}

Vaca :: Vaca(const char* nume, int nr_vaci, int cantitate, std :: string mancare) : nr_vaci(nr_vaci), cantitate(cantitate)
{
    this->nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->mancare = mancare;
}

Vaca :: ~Vaca()
{
    delete []nume;
}

void Vaca :: afisare()
{
    std :: cout << "Nume: " << nume << ". Nr vaci: " << nr_vaci << ". Cantitate: "
    << cantitate << "kg. Mancare consumata: " << mancare;
}
