#include <iostream>
#include <string.h>
#pragma once

class Student
{
    private: // valorile nu sunt accesibile din exteriorul claseiint id;
            char *nume;
            char grupa_serie[6];
            int note_sem_1[5];
    public:
            void init(); // initializeaza obiectul cu valori predefinite sau citite de la tastatura
            void init (const char *n, const char gr[], int note[]);
            void afisare() const; // afiseaza atributele clasei
            void modific(const char []); // modifica grupa
            void modific(const int x, const int nota); // modifica nota de pe pozitia x
            void copie(const Student&); // modifica atributele clasei
            int medie ();
            ~Student ();
};
Student *citire(int &n);
void sortare (Student *v, int n);
