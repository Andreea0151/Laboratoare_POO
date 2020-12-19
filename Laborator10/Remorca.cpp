#include "Remorca.hpp"

Remorca :: Remorca() : Vehicul(), greutate_maxima(0)
{
    for (int i = 0; i < 3; i++)
        dimensiuni[i] = 0;
}

Remorca :: Remorca(int dimensiuni[], int g_m, const char* prop, int pret) : Vehicul(prop, pret)
{
    for (int i = 0; i < 3; i++)
        this->dimensiuni[i] = dimensiuni[i];
    this->greutate_maxima = g_m;
}

void Remorca :: arataClasa()
{
    cout << "Remorca:\n";
}

void Remorca :: afisare()
{
    cout << "Dimensiuni remorca: ";
    for (int i = 0; i < 3; i++)
        cout << this->dimensiuni[i] << " ";
    cout << "\n";
    cout << "Greutate_maxima remorca: " << this->greutate_maxima << "\n";

    this->Vehicul :: afisare();
}
