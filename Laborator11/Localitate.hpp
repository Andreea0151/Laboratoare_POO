#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <string.h>
#pragma once

class Localitate
{
protected:
      char* nume;
      int nr_locuitori;
      int venit_mediu;
public:
      Localitate();
      Localitate(const char*, int, int);
      Localitate(const Localitate&);
      ~Localitate();

      int getNrLocuitori() { return nr_locuitori; }

      virtual int getVenit() { return venit_mediu; }
      virtual void afisare_nume_tara() {}
      virtual void afisare();
};

#endif
