#include "Inginer.hpp"

Inginer :: Inginer () : venit_pe_ora(0), ore_lucrate(0) {}

Inginer :: Inginer (int venit_pe_ora, int ore_lucrate) : venit_pe_ora(venit_pe_ora),ore_lucrate(ore_lucrate) {}

void Inginer :: afisare ()
{
    cout << "Inginer: ";
    cout << "Venit_pe_ora: " << venit_pe_ora << ". Ore_lucrate: " << ore_lucrate << endl;
}

bool Inginer :: isInginer_software()
{
    return false;
}

float Inginer :: venit_total()
{
    return venit_pe_ora * ore_lucrate;
}
