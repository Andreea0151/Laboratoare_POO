#include <iostream>
#include <string.h>
#include "BONUS_Nicu_Andreea_321AB.h"
using namespace std;

void Student::init()
{
    nume = NULL;
    strcpy(grupa_serie, " ");
    for (int i = 0; i < 5; i++)
      note_sem_1[i] = 0;
}

void Student::init(const char *n, const char gr[], int note[])
{
    nume = new char [strlen(n) + 1];
    strcpy(nume, n);
    strcpy(grupa_serie, gr);
    for (int i = 0; i < 5; i++)
      note_sem_1[i] = note[i];
}

void Student::afisare () const
{
    if (nume != NULL)
    {
      cout << nume << " " << grupa_serie << " Note: ";
      for (int i = 0; i < 5; i++)
        cout << note_sem_1[i] << " ";
    }
    cout << endl;
}

void Student::modific(const char gr[])
{
    strcpy(grupa_serie, gr);
}

void Student::modific(const int x, const int nota)
{
    note_sem_1[x] = nota;
}

void Student::copie(const Student &obj)
{
    if (nume != NULL) delete []nume;
    nume  = new char [strlen(obj.nume) + 1];

    strcpy (nume, obj.nume);

    strcpy(grupa_serie, obj.grupa_serie);
    for (int i = 0; i < 5; i++)
        note_sem_1[i] = obj.note_sem_1[i];
}

Student::~Student ()
{
    if(nume != NULL)
        delete[] nume;
}

int Student::medie()
{
    float s = 0;
    for (int i = 0; i < 5; i++)
        s += note_sem_1[i];
    return s / 5;
}

Student *citire(int &n)
{
    cout << endl << "Introduceti nr de studenti: ";
    cin >> n;
    Student *v = new Student[n];
    char buffer_nume[20];
    char buffer_grupa_serie[6];
    int aux[5];
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 <<endl;
        cout << "Nume: ";
        cin >> buffer_nume;
        cout << "Grupa serie: ";
        cin >> buffer_grupa_serie;
        cout << "Note: ";
        for (int j = 0; j < 5; j++)
            cin >> aux[j];
        v[i].init(buffer_nume, buffer_grupa_serie, aux);
    }
    return v;
}

void sortare (Student *v, int n)
{
    Student aux;
    aux.init();
    for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
        if (v[i].medie() < v[j].medie())
        {
            aux.copie(v[i]);
            v[i].copie(v[j]);
            v[j].copie(aux);
        }
}
