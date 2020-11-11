#include "Masina.hpp"

Masina :: Masina() : Remorca(), marca(NULL), valoare(0) {}

Masina :: Masina (const char *marca, int val, const char *tip, int masa) : Remorca(tip, masa), valoare(val)
{
      this->marca = new char[strlen(marca) + 1];
      strcpy(this->marca, marca);
}

Masina :: Masina (const Masina &obj) : valoare(obj.valoare)
{
      marca = NULL;
      *this = obj;
}

Masina &Masina :: operator=(const Masina &obj)
{
    (Remorca&) *this = (Remorca&)obj; //castare pt a se apela op = de la remorca
    if (marca != NULL) delete []marca;
    this->marca = new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);
    this->valoare = obj.valoare;

    return *this;
}

ostream &operator<< (ostream &out, const Masina &obj)
{
    out << (Remorca&)obj;
    out << " Marca: " << obj.marca << endl;
    out << " Valoare: " << obj.valoare << endl << endl;

    return out;
}

istream &operator>> (istream &in, Masina &obj)
{
    in >> (Remorca&)obj;
    cout << "Introdu datele despre masina: " << endl;
    cout << "Marca masina: ";
    char buffer[50];
	  in >> buffer;
	  if (obj.marca != NULL)
		      delete []obj.marca;
	  obj.marca = new char[strlen(buffer) + 1];
	  strcpy(obj.marca, buffer);
    cout << "Pret masina: ";
    in >> obj.valoare;

    cout << endl;

    return in;
}

Masina :: ~Masina()
{
    delete []marca;
}

void Masina :: interschimbare(Masina& obj)
{
	   Masina aux(*this);
	   *this = obj;
	   obj = aux;
}

int Masina :: getValoare()
{
  return valoare;
}

void sortare (Masina *v, int n)
{
    for ( int i = 0; i < n - 1; i ++)
    for(int j = i + 1; j < n; j ++)
          if ( v[i].getValoare() < v[j].getValoare())
              v[i].interschimbare(v[j]);
}

void afisare (Masina *v, int n)
{
    int nr = 0;
    for (int i = 0; i < n; i++)
        if (v[i].getMasa() > 500)
        {
          cout << v[i];
          nr++;
        }
    if (nr == 0) cout << "Nu exista!\n";
}
