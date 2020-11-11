#ifndef REMORCA_HPP
#define REMORCA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Remorca
{
protected:
        char *tip;
        int masa;
public:
        Remorca();
        Remorca(const char*, int);
        Remorca(const Remorca&);
        ~Remorca();

        Remorca& operator=(const Remorca&);
        friend istream& operator>>(istream&, Remorca&);
        friend ostream& operator<<(ostream&, const Remorca&);
        int getMasa();
};

#endif
