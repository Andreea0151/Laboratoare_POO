#include "L3_Nicu_Andreea_321AB.hpp"

int getAn (const Student &a)
{
  return a.an_nastere;
}

void interschimbare (Student &a, Student &b)
{
    Student aux;
    aux.modif(a.nume, a.facultate, a.CNP, a.an_nastere);
    a.modif(b.nume, b.facultate, b.CNP, b.an_nastere);
    b.modif(aux.nume, aux.facultate, aux.CNP, aux.an_nastere);
}

int main ()
{
    cout << "Testare metode:\n";
    Student obj("Andreea", "ACS", "123456", 2000);
    obj.afisare();
    cout << endl;

    //cout << "Stundenti: ";
    Student *v;
    int n = 5;
    v  = new Student[n];
    v[0].modif("Nicu Andreea", "ACS", "60015102314", 2000);
    v[1].modif("Simi", "ETTI", "19710152132", 1999);
    v[2].modif("Ana", "Psihologie", "60010161998", 2000);
    v[3].modif("Rucsi", "UPB", "6982051827", 1998);
    v[4].modif("Silviu", "ASE", "327982378", 1994);

    cout << "SORTARE:\n";
    sortare (v, n);
    for (int i = 0; i < n; i++)
        v[i].afisare();

    int nr = 0;
    for (int i = 0; i < n; i++)
        if (getAn(v[i]) == maxim(v, n)) nr++;
    if (nr == 1) cout << "Cel mai mare student este: ";
    else cout << "Cei mai mari studenti sunt:\n";
    for (int i = 0; i < n; i++)
        if (getAn(v[i]) == maxim(v, n)) cout << v[i].getNume() << endl;

    delete []v;

    return 1;
}
