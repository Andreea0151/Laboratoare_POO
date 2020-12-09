#include "Fractie.hpp"

Fractie :: Fractie() : a(0), b(0) {}

int cmmdc(int x, int y)
{
    int c = 1;
    for(int d = 1; d <= x && d <= y; d++)
        if(x % d == 0 && y % d == 0)
            c = d;
    return c;
}

void Fractie :: simplificare()
{
    int cmmd = cmmdc(this->a, this->b);
    this->a = this->a / cmmd;
    this->b = this->b / cmmd;
}

bool Fractie :: operator< (const Fractie& obj)
{
    if (this->b == obj.b)
      return (this->a < obj.a);
    else
    {
        Fractie f1 = *this;
        Fractie f2 = obj;
        f1.a = this->a * obj.b;
        f1.b = this->b * obj.b;
        f2.a = this->b * obj.a;
        f2.b = this->b * obj.b;

        return (f1.a < f2.a);
    }
}

istream& operator>> (istream &in, Fractie &obj)
{
    cout << "Numarator = ";
    in >> obj.a;
    cout << "Numitor = ";
    in >> obj.b;
    obj.simplificare();

    return in;
}

ostream& operator<< (ostream &out, const Fractie &obj)
{
    if (obj.b != 0)
    {
      out << obj.a << " / " << obj.b << endl;
    else
      out << " Eroare! Impartire la 0! " << endl;

    return out;
}
