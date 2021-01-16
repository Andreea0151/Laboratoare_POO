#include "Municipiu.hpp"

Municipiu :: Municipiu() : regiune(NULL) {}

Municipiu :: Municipiu(const char* regiune, int bonus_venit, const char* nume,
                       int nr_locuitori, int venit_mediu)
          : Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu :: Municipiu(const Municipiu& obj) { regiune = NULL, *this = obj; }

Municipiu :: ~Municipiu() { delete []regiune; }

void Municipiu :: afisare()
{
    Localitate :: afisare();
    std :: cout << ". Regiune: " << regiune;
}
