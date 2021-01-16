#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras : public Localitate
{
protected:
      int bonus_venit; //venitul unui oras este venitul
                       //localitatii + bonus_venit.
public:
      Oras();
      Oras(int, const char*, int, int);

      void afisare();
      int getVenit() {return venit_mediu + bonus_venit; }
};

#endif
