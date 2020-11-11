#include <iostream>
#include "BONUS_Nicu_Andreea_321AB.h"
using namespace std;

int main ()
{
    cout << endl << "Testare functii: " << endl;
    Student obj;
    int note [] = {5, 6, 7, 8, 9};
    obj.init("Andreea", "233", note);
    obj.modific("321AB");
    obj.modific(0, 10);
    obj.afisare();

    int n;
    Student *v;
    v = citire(n);
    //for (int i = 0; i < n; i++)
        //v[i].afisare();

    cout << endl << "Sortare: " << endl;
    sortare (v, n);
    for (int i = 0; i < n; i++)
        v[i].afisare();

    delete []v;
    return 1;
}
