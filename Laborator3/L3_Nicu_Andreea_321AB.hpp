#ifndef L3_NICU_ANDREEA_321AB_HPP
#define L3_NICU_ANDREEA_321AB_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
          char *nume;
          char *facultate;
          char CNP[14];
          int an_nastere;

      public:
          Student();                       //constructor fara parametri
          Student(const char*, const char*, const char[], const int); //constructor cu parametri
          Student(const Student&);         //constructor de copiere
          ~Student();                      //destructorul
          void afisare() const;            //afiseaza atributele clasei
          void modif(const char*, const char*, const char[], const int); //modifica atributele clasei
          int getAn() const;
          char* getFacultate() const;
          char* getNume() const;
          friend int getAn(const Student&); //returneaza varsta obiectului apelat
          friend void interschimbare(Student&, Student&); //interschimba valorile dintre 2 obiecte de tip Student
};

void sortare (Student *v, int n);
int maxim (Student *v, int n);

#endif
