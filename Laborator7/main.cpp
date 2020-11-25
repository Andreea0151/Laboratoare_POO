#include "Profesor.hpp"
#include "Fermier.hpp"
#include "Inginer_software.hpp"

 int main()
 {
    Baza **v;
    int n = 5;
    v = new Baza *[n];
    v[0] = new Profesor(30, 10);
    v[1] = new Fermier(20, 3000);
    v[2] = new Inginer(50, 16);
    v[3] = new Inginer_software("Thales", 3, 50, 36);
    v[4] = new Inginer_software("Electronic Arts", 1, 35, 20);

    cout << "Afisare angajati:\n";
    for (int i = 0; i < n; i++)
        v[i]->afisare();

/*
    //venituri angajati
    for (int i = 0; i < n; i++)
        cout << v[i]->venit_total() << " ";
    cout << endl;
*/

    for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
        if (v[i]->venit_total() < v[j]->venit_total())
        {
            Baza *aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }

    cout << "\nAfisare dupa sortare(venit):\n";
    for (int i = 0; i < n; i++)
          v[i]->afisare();

    cout << "\nAfisare ingineri_software:\n";
    for (int i = 0; i < n; i++)
      if (v[i]->isInginer_software())
        v[i]->afisare();

    for (int i = 0; i < n; i++)
        delete v[i];
    delete []v;

    return 1;
 }
