#include "Oras.hpp"

Oras :: Oras() : bonus_venit(0) {}

Oras :: Oras(int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu) :
bonus_venit(bonus_venit), Localitate(nume, nr_locuitori, venit_mediu) {}

void Oras :: afisare()
{
    Localitate :: afisare();
    std :: cout << ". Bonus venit: " << bonus_venit;
}
