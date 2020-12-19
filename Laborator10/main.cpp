#include "Masina_cu_Remorca.hpp"

int main ()
{
    int dim[][3] = {
                    {4, 3, 2},
                    {6, 4, 3}
                    };

    Vehicul obj0 ("Radu", 1300);
    Masina obj1 (dim[0],"BMW", "Andreea", 3200);
    Remorca obj2 (dim[1], 25000, "Ionel", 1000);
    Masina_cu_Remorca obj3(2500, dim[0], "Volkswagen", dim[1], 1500, "Alex", 3000);

    Vehicul* v[4]; // Vehicul **v;
    v[0] = &obj0;
    v[1] = &obj1;
    v[2] = &obj2;
    v[3] = &obj3;

    cout << "AFISARE VECTOR:\n";
    for (int i = 0; i < 4; i++)
    {
      v[i]->arataClasa();
      v[i]->afisare();
      cout << "\n";
    }

    for (int i = 0; i < 3; i++)
    for (int j = i + 1; j < 4; j++)
        if (v[i]->getPret() < v[j]->getPret())
            {
              Vehicul* aux;
              aux = v[i];
              v[i] = v[j];
              v[j] =aux;
            }

    cout << "AFISARE DUPA SORTARE(pret):\n";
    for (int i = 0; i < 4; i++)
    {
          v[i]->arataClasa();
          v[i]->afisare();
          cout << "\n";
    }

    cout << "Masina_cu_Remorca noua:\n\n";
    Masina_cu_Remorca obj4(2300, dim[0], "Audi", dim[1], 1400, "Nadin", 2800);
    obj4.afisare();

    cout << "\nSuma de pret a celor 2: " << obj3 + obj4 << "\n";
    cout << "Diferenta de pret: " << abs(obj4 - obj3) <<"\n";
    cout << "Prima Masina_cu_Remorca are pretul mai mic decat a 2-a: ";
    if (obj3 < obj4) cout << "True\n";
    else if (obj3 > obj4) cout << "False\n";
    else cout << "Cele 2 preturi sunt egale.\n";

    return 1;
}
