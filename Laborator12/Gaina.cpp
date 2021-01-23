#include "Gaina.hpp"

Gaina :: Gaina() : nume(NULL), nr_gaini(0), cantitate(0) {}

Gaina :: Gaina(const char* nume, int nr_gaini, int cantitate, std :: string mancare) : nr_gaini(nr_gaini), cantitate(cantitate)
{
    this->nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->mancare = mancare;
}

Gaina :: ~Gaina()
{
    delete []nume;
}

void Gaina :: afisare()
{
  std :: cout << "Nume: " << nume << ". Nr gaini: " << nr_gaini << ". Cantitate: "
  << cantitate << "kg. Mancare consumata: " << mancare;
}
