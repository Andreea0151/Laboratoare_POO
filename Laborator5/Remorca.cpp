#include "Remorca.hpp"

Remorca :: Remorca() : tip(NULL), masa(0){}

Remorca :: Remorca(const char *tip, int masa) : masa(masa)
{
    this->tip = new char[strlen(tip) + 1];
    strcpy(this->tip, tip);
}

Remorca :: Remorca (const Remorca &obj) : masa(obj.masa)
{
    tip = NULL;
    *this = obj;
    cout << "\nS a apelat constructorul de copiere!\n";
}

Remorca &Remorca :: operator=(const Remorca &obj)
{
    if (tip != NULL) delete []tip;
    this->tip = new char[strlen(obj.tip) + 1];
    strcpy (this->tip, obj.tip);
    this->masa = obj.masa;

    return *this;
}

istream &operator>> (istream &in, Remorca &obj)
{
  cout << "Introdu datele despre remorca: " << endl;
  cout << "Tip remorca: ";
  char buffer[50];
  in >> buffer;
  if (obj.tip != NULL) delete []obj.tip;
  obj.tip = new char[strlen(buffer) + 1];
  strcpy(obj.tip, buffer);
  cout << "Masa remorca: ";
  in >> obj.masa;

  return in;
}

ostream &operator<< (ostream& out, const Remorca &obj)
{
    out << " Tip: ";
    if (obj.tip != NULL)  out << obj.tip;
    out << "\n Masa: " << obj.masa << endl;

    return out;
}

int Remorca :: getMasa()
{
    return masa;
}

Remorca :: ~Remorca ()
{
    delete[]tip;
}
