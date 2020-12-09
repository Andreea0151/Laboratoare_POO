#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include <iostream>
using namespace std;

class Fractie
{
private:
    int a;
    int b;
public:
    Fractie();
    void simplificare();
    void afisare();

    bool operator<(const Fractie&);
    friend istream& operator>>(istream& in, Fractie& obj);
    friend ostream& operator<<(ostream& out, const Fractie& obj);
};

int cmmdc(int x, int y);

#endif
