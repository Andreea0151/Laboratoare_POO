#include "Nr_complex.hpp"

Nr_complex :: Nr_complex () : re(0), im(0) {}

Nr_complex :: Nr_complex (int re, int im) : re(re), im(im) {}

bool Nr_complex :: operator< (const Nr_complex& obj)
{
    return (this->re < obj.re);
}

istream& operator>> (istream &in, Nr_complex &obj)
{
    cout << "Partea reala = ";
    in >> obj.re;
    cout << "Partea imaginara = ";
    in >> obj.im;

    return in;
}

ostream& operator<< (ostream &out, const Nr_complex &obj)
{
    out << obj.re << " + " << obj.im  << "*i" << endl;

    return out;
}
