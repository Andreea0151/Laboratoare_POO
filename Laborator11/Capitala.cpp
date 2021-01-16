#include "Capitala.hpp"

Capitala :: Capitala() : tara(NULL) {}

Capitala :: Capitala(const char* tara, int bonus_venit, const char* nume,
                     int nr_locuitori, int venit_mediu)
          : Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala :: Capitala(const Capitala& obj) { tara = NULL, *this = obj; }

Capitala :: ~Capitala() { delete []tara; }

void Capitala :: afisare()
{
    std :: cout << "Tara: " << tara;
    Oras :: afisare();
}

void Capitala :: afisare_nume_tara()
{
    std :: cout << "Tara: " << tara << std :: endl;
}
