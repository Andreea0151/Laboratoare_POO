#include "Inginer_software.hpp"

Inginer_software :: Inginer_software () : Inginer(), companie(NULL), experienta(0) {}

Inginer_software :: Inginer_software (const char* companie, int experienta, int venit_pe_ora, int ore_lucrate) : Inginer(venit_pe_ora, ore_lucrate) //: experienta(experienta)
{
      this->companie = new char[strlen(companie) + 1];
      strcpy(this->companie, companie);
      this->experienta = experienta;
}

Inginer_software :: Inginer_software (const Inginer_software& obj)
{
    companie = NULL;
    *this = obj;
}

Inginer_software& Inginer_software :: operator=(const Inginer_software& obj)
{
      if (companie != NULL)
          delete []companie;
      this->companie = new char[strlen(obj.companie) + 1];
      strcpy(this->companie, obj.companie);
      experienta = obj.experienta;

      return *this;
}

Inginer_software :: ~Inginer_software()
{
    delete []companie;
}

void Inginer_software :: afisare()
{
    cout << "Inginer_software: ";
    cout << "Companie: " << companie << ". Experienta: " << experienta << endl;
}

bool Inginer_software :: isInginer_software()
{
    return true;
}
