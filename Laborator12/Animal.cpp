#include "Animal.hpp"

Animal :: ~Animal () {}

/*
Depozit cu mancare, cu o capacitate de 2000 kg
(Ex. 4)
56 kg mancare / zi
- nutret: 30 + 8 +  4 = 42 kg
- graunte: 5 + 4 = 9 kg
- iarba: 5 kg

1. 42 * x + 9 * x + 5 * x = 2000
   56 * x = 2000 => x = 35, 71... => aprox. x = 35 (zile);
   => 42 * 35 = 1470 kg nutret
   => 9 * 35 = 315 kg graunte
   => 5 * 35 = 175 kg iarba
   1960 / 2000;

2. 365 : 35 = 11 / an

3. 56 kg mancare/zi * 365 zile = 20 440kg intr-un an
   11 * 1960 = 21 560 kg mancare /an
   => 21 560 - 20 440 = 1120;

5. Cal (4kg)
   Vaca (3kg)
   Porc (1.125kg)
*/
