#include "Masina_cu_Remorca.hpp"

Masina_cu_Remorca :: Masina_cu_Remorca() :  Masina(), Remorca(), masa_totala(0) {}

Masina_cu_Remorca :: Masina_cu_Remorca(int masa_totala, int dimensiuni1[],
  const char* marca, int dimensiuni2[], int greutate_maxima, const char* proprietar, int pret) :
  masa_totala(masa_totala), Masina(dimensiuni1, marca, proprietar, pret),
  Remorca(dimensiuni2, greutate_maxima, proprietar, pret),
  Vehicul(proprietar, pret) {}

void Masina_cu_Remorca :: arataClasa()
{
    cout << "Masina_cu_Remorca:\n";
}

void Masina_cu_Remorca :: afisare()
{
    cout << "Masa totala masina cu remorca: " << this->masa_totala << "\n";
    cout << "Dimensiuni remorca: ";
    for (int i = 0; i < 3; i++)
        cout << this->getVectDim()[i] << " ";
    cout << "\n";
    cout << "Greutate_maxima remorca: " << this->getGreutate()<< "\n";
    this->Masina :: afisare();
}

int Masina_cu_Remorca :: operator+ (const Masina_cu_Remorca& obj)
{
     return this->getPret() + obj.getPret();
}

int Masina_cu_Remorca :: operator- (const Masina_cu_Remorca& obj)
{
     return this->getPret() - obj.getPret();
}

bool Masina_cu_Remorca :: operator< (const Masina_cu_Remorca& obj)
{
     return this->getPret() < obj.getPret();
}

bool Masina_cu_Remorca :: operator> (const Masina_cu_Remorca& obj)
{
     return this->getPret() > obj.getPret();
}
