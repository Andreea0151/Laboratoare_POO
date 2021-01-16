#include <iostream>
#include <string.h>
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"

int main ()
{
    int n = 5;
    Tara vector_tari[n];

    vector_tari[0].AdaugareLocalitate(new Capitala("Romania", 30,"Bucuresti", 10000, 30));
    vector_tari[0].AdaugareLocalitate(new Municipiu("IL", 10, "Slobozia", 5000, 25));
    vector_tari[0].AdaugareLocalitate(new Oras(15, "Urziceni", 4000, 20));
    vector_tari[0].AdaugareLocalitate(new Localitate("Amara", 5000, 25));

    vector_tari[1].AdaugareLocalitate(new Capitala("Franta", 50, "Paris", 20000, 35));

    vector_tari[2].AdaugareLocalitate(new Capitala("Turcia", 45,"Ankara", 18000, 32));

    vector_tari[3].AdaugareLocalitate(new Capitala("Germania", 55, "Berlin", 19000, 42));

    vector_tari[4].AdaugareLocalitate(new Capitala("Anglia", 63, "Londra", 32000, 55));

    std :: cout << "\nAfisare detalii tari:\n";
    for (int i = 0; i < n; i++)
    {
      vector_tari[i].AfisareTara();
      std :: cout << std ::endl << std:: endl;
    }

    for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
    {
        if (vector_tari[i].NrLocuitori() < vector_tari[j].NrLocuitori())
            vector_tari[i].interschimbare(vector_tari[j]);
    }

    std :: cout << "\nAfisare tari dupa nr de locuitori.\n";
    for (int i = 0; i < n; i++)
        vector_tari[i].AfisareNumeTara();

    for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
    {
        if (vector_tari[i].getVenitMediu() < vector_tari[j].getVenitMediu())
            vector_tari[i].interschimbare(vector_tari[j]);
    }

    std :: cout << "\nAfisare tari dupa venitul mediu.\n";
    for (int i = 0; i < n; i++)
        vector_tari[i].AfisareNumeTara();

    return 1;
}
