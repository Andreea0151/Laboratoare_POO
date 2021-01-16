#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include <string.h>
#include "Oras.hpp"

class Capitala : public Oras
{
      char* tara;
public:
      Capitala();
      Capitala(const char*, int, const char*, int, int);
      Capitala(const Capitala&);
      ~Capitala();

      char* getTara() { return tara; }
      void afisare();
      void afisare_nume_tara();
};

#endif
