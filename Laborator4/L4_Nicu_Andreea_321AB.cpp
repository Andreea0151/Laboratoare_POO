#include "L4_Nicu_Andreea_321AB.hpp"

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
  int cmmd = cmmdc(a, b);
  a = a / cmmd;
  b = b / cmmd;
}

Fractie :: Fractie (int aa, int bb)
{
    a = aa;
    b = bb;
    this->simplificare();
}

Fractie :: Fractie(const Fractie &obj)
{
    this->a = obj.a;
    this->b = obj.b;
}

Fractie &Fractie :: operator = (const Fractie &obj)
{
    this->a = obj.a;
    this->b = obj.b;
    return *this;
}

Fractie :: ~Fractie()
{
    a = 0;
    b = 0;
}

double Fractie :: getValoare()
{
    return (double)a/b;
}

Fractie Fractie :: getInv() const
{
    Fractie obj;
    obj.a = this->b;
    obj.b = this->a;
    return obj;
}

void Fractie :: setData (int a1, int b1)
{
    a = a1;
    b = b1;
    this->simplificare();
}

float Fractie :: getA ()
{
    return a;
}

float Fractie :: getB()
{
    return b;
}

void Fractie :: afisare ()
{
    if(b == 0)
      cout << "Nu putem imparti la 0" << endl;
    else
      cout << a << " / " << b << endl;
}

Fractie operator +(const Fractie &obj1, const Fractie &obj2)
{
    Fractie f;
    int x, y;
    x = obj1.b;
    y = obj2.b;
    f.a = obj1.a * y + obj2.a * x;
    f.b = x * y;
    f.simplificare();
    return f;
}

Fractie operator -(const Fractie &obj1, const Fractie &obj2)
{
    Fractie f;
    int x, y;
    x = obj1.b;
    y = obj2.b;
    f.a = obj1.a * y - obj2.a * x;
    f.b = x * y;
    f.simplificare();
    return f;
}

Fractie operator *(const Fractie &obj1, const Fractie &obj2)
{
    Fractie f;
    f.a = obj1.a * obj2.a;
    f.b = obj1.b * obj2.b;
    f.simplificare();
    return f;
}

Fractie operator /(const Fractie &obj1, const Fractie &obj2)
{
    return obj1 * obj2.getInv();
}

Fractie operator -(const Fractie &obj)
{
    Fractie f;
    f.a = obj.a *(-1);
    f.b = obj.b;
    return f;
}

Fractie &Fractie :: operator +=(const Fractie &obj)
{
    *this = *this + obj;
    return *this;
}

Fractie &Fractie :: operator -=(const Fractie &obj)
{
    *this = *this - obj;
    return *this;
}

Fractie &Fractie :: operator *=(const Fractie &obj)
{
    *this = *this * obj;
    return *this;
}

Fractie &Fractie :: operator /=(const Fractie &obj)
{
    *this = *this / obj;
    return *this;
}

istream& operator >> (istream &in, Fractie &obj)
{
    cout << "Numarator = ";
    in >> obj.a;
    cout << "Numitor = ";
    in >> obj.b;

    return in;
}

ostream& operator << (ostream &out, const Fractie &obj)
{
    if (obj.b != 0)
      out << obj.a << " / " << obj.b;
    else
      out << " Eroare! Impartire la 0! " << endl;

    return out;
}

bool Fractie :: operator == (const Fractie &obj)
{
    return (this->a == obj.a && this->b == obj.b);

}

bool Fractie :: operator != (const Fractie &obj)
{
    return(!(*this == obj));
}

bool Fractie :: operator <(const Fractie&obj)
{
    return ((this->a/this->b) < (obj.a/obj.b));
}

bool Fractie :: operator >(const Fractie&obj)
{
    return ((this->a/this->b) > (obj.a/obj.b));
}

bool Fractie :: operator <=(const Fractie&obj)
{
    return ((this->a/this->b) <= (obj.a/obj.b));
}

bool Fractie :: operator >=(const Fractie&obj)
{
    return ((this->a/this->b) >= (obj.a/obj.b));
}
