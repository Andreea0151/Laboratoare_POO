#include "Porc.hpp"

Porc :: Porc() : nume(NULL), nr_porci(0), cantitate1(0), cantitate2(0) {}

Porc :: Porc(const char* nume, int nr_porci, int cantitate1, int cantitate2,
             std :: string mancare1, std :: string mancare2) : nr_porci(nr_porci),
             cantitate1(cantitate1), cantitate2(cantitate2)
{
    this->nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->mancare1 = mancare1;
    this->mancare2 = mancare2;
}

Porc :: ~Porc()
{
    delete []nume;
}

void Porc:: afisare()
{
  std :: cout << "Nume: " << nume << ". Nr porci: " << nr_porci << ". Cantitate1: "
  << cantitate1 << "kg. Mancare consumata1: " << mancare1 << ". Cantitate2: "
  << cantitate2 << "kg. Mancare consumata2: " << mancare2;
}
