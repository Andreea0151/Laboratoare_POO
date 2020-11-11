#include "Masina.hpp"

int main()
{
    Masina *v;
    int n;
    cout << "Nr masini: ";
    cin >> n;
    v = new Masina[n];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    // v[0] = Masina ("BMW", 2500, "tractare", 1000);
    // v[1] = Masina ("Audi",3600, "agricola", 500);
    // v[2] = Masina ("Mercedes",1200, "servici", 700);

    cout << "Afisare:\n";
    for (int i = 0; i < n; i++)
        cout << v[i];

    cout << "\nSORTARE:\n";
    sortare (v, n);
    for (int i = 0; i < n; i++)
        cout << v[i];

    cout << "Afisare masini care au masa remorca > 500 kg:\n";
    afisare(v, n);

    return 1;
}
