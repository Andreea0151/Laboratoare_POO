#include "Clasa.hpp"

int main ()
{
    int note [][10] = {
                      {5, 6, 7},
                      {8, 9, 10},
                      {3, 9, 7},
                      {10, 8, 9},
                      {5, 6, 2},
                      {10, 7, 8},
                      {9, 9, 9},
                      {8, 7, 6},
                      {4, 8, 7},
                      {5, 6, 5}
                    };

    cout << "Intr-o clasa se afla 10 studenti, despre care se cunosc urmatoarele informatii: nume, clasa(grupa) din care studentii fac parte, numele dirigintelui si notele fiecarui student.\n";
    Student *studenti = new Student[10];
    studenti[0] = Student(note[0], 3, "Radu George", "321AB", "Andreea");
    studenti[1] = Student(note[1], 3, "Radu George", "321AB", "Ana");
    studenti[2] = Student(note[2], 3, "Radu George", "321AB", "Mihai");
    studenti[3] = Student(note[3], 3, "Radu George", "321AB", "Ionel");
    studenti[4] = Student(note[4], 3, "Radu George", "321AB", "Iulia");
    studenti[5] = Student(note[5], 3, "Radu George", "321AB", "Eric");
    studenti[6] = Student(note[6], 3, "Radu George", "321AB", "Justin");
    studenti[7] = Student(note[7], 3, "Radu George", "321AB", "Leo");
    studenti[8] = Student(note[8], 3, "Radu George", "321AB", "Miruna");
    studenti[9] = Student(note[9], 3, "Radu George", "321AB", "Radu");


    Clasa clasa(studenti, 10);
    cout << "\nSe sorteaza studenti in ordinea mediilor:\n\n";
    clasa.sortare();
    cout << clasa;

    cout << "\nClasa va avea un nou diriginte.\nIntroduceti numele noului diriginte:\n";
    char nume_nou_diriginte[30], name[30];
    cout << "Nume: ";
    cin >> nume_nou_diriginte;
    clasa.schimbare_diriginte(nume_nou_diriginte);
    cout << "\nModificarea a fost efectuata cu succes!!!\n";
    strcpy(name, nume_nou_diriginte);

    Student nou = Student(note[1], 3, name, "321AB", "Alin");
    cout << "\nSe adauga un nou elev in clasa actuala.\nIntroduceti pozitia pe care va fi adaugat noul elev: ";
    int X;
    cin >> X;
    clasa.adaugare(X, nou);
    cout << "\nAfisare grupa actualizata studenti:\n";
    cout << clasa;

    return 1;
}
