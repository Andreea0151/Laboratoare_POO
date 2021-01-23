#include "Cal.hpp"

Cal :: Cal() : nume(NULL), nr_cai(0), cantitate(0) {}

Cal :: Cal(const char* nume, int nr_cai, int cantitate, std :: string mancare) : nr_cai(nr_cai), cantitate(cantitate)
{
    this->nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->mancare = mancare;
}

Cal :: ~Cal()
{
    delete []nume;
}

void Cal :: afisare()
{
  std :: cout << "Nume: " << nume << ". Nr cai: " << nr_cai << ". Cantitate: "
  << cantitate << "kg. Mancare consumata: " << mancare;
}
