#include "Depozit.hpp"

Depozit :: Depozit() : capacitate(0), nutret(0), graunte(0), iarba(0) {}

Depozit :: Depozit(int capacitate, int nutret, int graunte, int iarba) :
                   capacitate(capacitate), nutret(nutret), graunte(graunte),
                   iarba(iarba) {}
