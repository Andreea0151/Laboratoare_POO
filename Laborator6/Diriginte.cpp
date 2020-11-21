#include "Diriginte.hpp"

Diriginte :: Diriginte () : nume(NULL), grupa (" ") {}

Diriginte :: Diriginte (const char* nume, const char grupa[])
{
    this-> nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);
    strcpy (this->grupa, grupa);
}

Diriginte :: Diriginte (const Diriginte& obj)
{
    nume = NULL;
    strcpy (grupa, " ");
    *this = obj;
}

Diriginte :: ~Diriginte ()
{
  delete []nume;
}

Diriginte& Diriginte :: operator= (const Diriginte& obj)
{
	  if (nume != NULL)  delete []nume;
	  nume = new char[strlen(obj.nume) + 1];
	  strcpy(nume, obj.nume);
    strcpy(grupa, obj.grupa);

    return *this;
}

ostream& operator<< (ostream& out, const Diriginte& obj)
{
    if(obj.nume != NULL && strcmp (obj.nume, " ") != 0)
    {
      int x = strlen(obj.nume);
        if (obj.nume[x - 1] != 'a')
          out << "\nDiriginte: " << obj.nume;
        else
          out << "\nDiriginta: " << obj.nume;
    }
    else
        out << "Nu exista nume.\n";
    out << "\nGrupa: " << obj.grupa << "\n";

    return out;
}

char* Diriginte :: getNumeDiriginte()
{
    return nume;
}

void Diriginte :: schimbare_nume (const char* nume_nou)
{
  delete []nume;
  nume = new char [strlen(nume_nou) + 1];
  strcpy(nume, nume_nou);
}
