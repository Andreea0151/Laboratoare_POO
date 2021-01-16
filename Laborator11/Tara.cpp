#include "Tara.hpp"

Tara :: Tara() : v(NULL) {}

Tara :: Tara(const Tara& obj) { *this = obj; } // tara2(tara1)

void Tara :: AdaugareLocalitate(Localitate* localitate)
{
    int nr = 0;
    if (v != NULL)  // a nu se dereferentia pointer NULL
    for (int i = 0; v[i] != NULL; i++)
        nr++; // cati pointeri de localitati sunt in vect v

    // alocare un vector nou de marimea vect vechi + 1(spatiu pt noua loc) + NULL
    Localitate** nou = new Localitate* [nr + 2];

    if (v != NULL)
    for (int i = 0; v[i] != NULL; i++)
    {
        nou[i] = v[i];  // s-au copiat pointerii din v
    }
    nou[nr] = localitate; // pe spatiul gol(NULL vechi) se adauga localitatea
    nou[nr + 1] = NULL;  // se pune NULL pe ultimul spatiu al vectorului

    delete []v; // stergere vect vechi de pointerii
    v = nou;    // copiere in v a pointerului catre vectorul nou
}

Tara :: ~Tara()
{
    if (v != NULL)
    for (int i = 0; v[i] != NULL; i++)
        delete v[i];
    delete []v;
}

void Tara :: AfisareTara()
{
    for (int i = 0; v[i] != NULL; i++)
          v[i]->afisare();
}

void Tara :: AfisareNumeTara()
{
    for (int i = 0; v[i] != NULL; i++)
        v[i]->afisare_nume_tara();
}

int Tara :: NrLocuitori()
{
    int nr = 0;
    for (int i = 0; v[i] != NULL; i++)
        nr += v[i]->getNrLocuitori();
    return nr;
}

void Tara :: interschimbare(Tara& obj)
{
    Localitate** aux;
    aux = this->v;
    this->v = obj.v;
    obj.v = aux;
}

double Tara :: getVenitMediu()
{
  float venit = 0;
  int nr = 0;
    for (int i = 0; v[i] != NULL; i++)
    {
      nr ++;
      venit += v[i]->getVenit();
    }
    return venit/nr;
}
