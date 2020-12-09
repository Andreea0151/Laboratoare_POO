#include "Fractie.hpp"
#include "Nr_complex.hpp"
#include "Template.hpp"

int main ()
{
    //obiecte de tip Vector pentru int, double, nr_complex/fractie
    Vector<int> v;
    Vector<double> d;
    Vector<Fractie> f;
    Vector<Nr_complex> nr;

    int dim;
    cout << "Introduceti dimensiunea vectorilor: ";
    cin >> dim;

    cout << "Introduceti elemente de tip intreg: ";
    for (int i = 0; i < dim; i++)
    {
        int x;
        cin >> x;
        v.addElem(i, x);
    }

    cout << "Introduceti elemente de tip double: ";
    for (int i = 0; i < dim; i++)
    {
        double x;
        cin >> x;
        d.addElem(i, x);
    }

    cout << "Introduceti elemente de tip Fractie:\n";
    for (int i = 0; i < dim; i++)
    {
        Fractie x;
        cin >> x;
        f.addElem(i, x);
    }

    cout << "Introduceti elemente de tip Nr_complex:\n";
    for (int i = 0; i < dim; i++)
    {
        Nr_complex x;
        cin >> x;
        nr.addElem(i, x);
    }

    cout <<"\nSortare si afisare vectori:\n";
    v.sortare();
    v.afisare();

    d.sortare();
    d.afisare();

    f.sortare();
    f.afisare();

    nr.sortare();
    nr.afisare();

    return 1;
}
