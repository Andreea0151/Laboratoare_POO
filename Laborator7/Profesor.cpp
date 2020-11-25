#include "Profesor.hpp"

Profesor :: Profesor () : venit_pe_ora(0), cursuri(0) {}

Profesor :: Profesor (int venit_pe_ora, int cursuri) : venit_pe_ora(venit_pe_ora), cursuri(cursuri) {}

void Profesor :: afisare ()
{
    cout << "Profesor: ";
    cout << "Venit_pe_ora: " << venit_pe_ora << ". Cursuri: " << cursuri << endl;
}

bool Profesor :: isInginer_software()
{
    return false;
}

float Profesor:: venit_total ()
{
    return venit_pe_ora * cursuri * 2;
}
