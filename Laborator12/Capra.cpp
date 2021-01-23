#include "Capra.hpp"

Capra :: Capra() : nume(NULL), nr_capre(0), cantitate(0) {}

Capra :: Capra(const char* nume, int nr_capre, int cantitate, std :: string mancare) :
         nr_capre(nr_capre), cantitate(cantitate)
{
    this->nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->mancare = mancare;
}

Capra :: ~Capra()
{
    delete []nume;
}

void Capra :: afisare()
{
  std :: cout << "Nume: " << nume << ". Nr capre: " << nr_capre << ". Cantitate: "
  << cantitate << "kg. Mancare consumata: " << mancare;
}
