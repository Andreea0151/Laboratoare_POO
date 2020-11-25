#include "Fermier.hpp"

Fermier :: Fermier () : venit_pe_ora(0), suprafata(0) {}

Fermier :: Fermier (int venit_pe_ora, int suprafata) : venit_pe_ora(venit_pe_ora), suprafata(suprafata) {}

void Fermier :: afisare ()
{
    cout << "Fermier: ";
    cout << "Venit_pe_ora: " << venit_pe_ora << ". Suprafata: " << suprafata << endl;
}

bool Fermier :: isInginer_software()
{
    return false;
}

float Fermier :: venit_total ()
{
    return venit_pe_ora * (suprafata / 1000.0) * 10;
}
