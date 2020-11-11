#include "L4_Nicu_Andreea_321AB.hpp"

int main ()
{
    cout << "TESTARE FUNCTII:\n\n";
    cout << "Fie a, respectiv b cele 2 fractii.\n";
    cout << " a = ";
    Fractie obj1;
    obj1.setData(3,4);
    obj1.afisare();

    cout << " b = ";
    Fractie obj2 (4,4);
    obj2.afisare();
    cout << " Schimbati fractia lui b:\n";
    Fractie obj3;
    cin >> obj3;
    obj2 = obj3;
    cout << " => b = ";
    obj2.afisare();
    int x, y, z;
    // x = (y =(z = 4));
    // cout << x << y << z;
    cout << "Suma: " << obj1 + obj2;
    cout << "\nDifirenta: " << obj1 - obj2;
    cout << "\nProdus: " << obj1 * obj2;
    cout << "\nImpartire: " << obj1 / obj2;
    cout << "\nOpus(a): " << -(obj1);

    Fractie noua;
    cout << "\n\nIntroduceti o noua fractie:\n";
    cin >> noua;
    cout << " => c = ";
    noua.afisare();
    cout << "Se vor repeta operatiile de mai sus, utilizandu-se cele 3 fractii:";
    cout << "\nSuma: " << obj1 + obj2 + noua;
    cout << "\nDifirenta: " << obj1 - obj2 - noua;
    cout << "\nProdus: " << obj1 * obj2 * noua;
    cout << "\nImpartire: " << obj1 / obj2 / noua << endl;

    cout << "\nSe introduc alte 2 fractii. Se va stabili valoarea de adevar a cerintelor.\n";
    Fractie f, g;
    cin >> f;
    cout << " => f = ";
    f.afisare();
    cin >> g;
    cout << " => g = ";
    g.afisare();
    cout << " f = g ? ";
    if (f == g) cout << " A\n";
      else cout << " F\n";
    cout << " f != g? ";
    if (f != g) cout << " A\n";
      else cout << " F\n";
    cout << " f < g ? ";
    if (f < g) cout << " A " << endl;
      else cout << " F " << endl;
    cout << " f > g ? ";
    if (f > g) cout << " A\n";
      else cout << " F\n";
    cout << " f <= g? ";
    if (f <= g) cout << " A\n";
      else cout << " F\n";
    cout << " f >= g? ";
    if (f >= g) cout << " A\n";
      else cout << " F\n";

    return 1;
}
