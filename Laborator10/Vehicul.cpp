#include "Vehicul.hpp"

Vehicul :: Vehicul() : proprietar(NULL), pret(0) {}

Vehicul :: Vehicul(const char* proprietar, int pret) : pret(pret)
{
    this->proprietar = new char[strlen(proprietar) + 1];
    strcpy(this->proprietar, proprietar);
}

Vehicul :: Vehicul(const Vehicul& obj) : pret(obj.pret)
{
      proprietar = NULL;
      *this = obj;
}

Vehicul :: ~Vehicul()
{
    delete []proprietar;
}

void Vehicul :: arataClasa()
{
    cout << "Vehicul\n";
}

void Vehicul :: afisare()
{
    cout << "Proprietar: " << this->proprietar << "\n";
    cout << "Pret: " << this->pret << "\n";
}
