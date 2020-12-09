#ifndef NR_COMPLEX_HPP
#define NR_COMPLEX_HPP

#include <iostream>
using namespace std;

class Nr_complex
{
private:
    int re;
    int im;
public:
    Nr_complex();
    Nr_complex(int, int);

    bool operator<(const Nr_complex&);
    friend istream& operator>>(istream &in, Nr_complex& obj);
    friend ostream& operator<<(ostream &out, const Nr_complex& obj);
};

#endif
