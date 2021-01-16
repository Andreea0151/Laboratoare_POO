#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara
{
      Localitate** v;
public:
      Tara();
      Tara(const Tara&);
      ~Tara();

      void AdaugareLocalitate(Localitate*);
      void AfisareTara();
      int NrLocuitori();
      void interschimbare(Tara&);
      double getVenitMediu();
      void AfisareNumeTara();
};

#endif
