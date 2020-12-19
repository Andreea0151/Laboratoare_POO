#include "Masina.hpp"

Masina :: Masina() : Vehicul(), marca(NULL)
{
    for (int i = 0; i < 3; i++)
        dimensiuni[i] = 0;
}

Masina :: Masina(int dimensiuni[], const char* marca, const char* prop, int pret) : Vehicul(prop, pret)
{
    for (int i = 0; i < 3; i++)
        this->dimensiuni[i] = dimensiuni[i];
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
}

Masina :: Masina(const Masina& obj)
{
    marca = NULL;
    *this = obj;
}

Masina :: ~Masina()
{
    delete []marca;
}

void Masina :: arataClasa()
{
    cout << "Masina:\n";
}

void Masina ::  afisare()
{
    cout << "Marca masina: " << this->marca << "\n";
    cout << "Dimensiuni masina: ";
    for (int i = 0; i < 3; i++)
        cout << this->dimensiuni[i] << " ";
    cout << "\n";

    this->Vehicul :: afisare();
}
