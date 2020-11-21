#ifndef CLASA_HPP
#define CLASA_HPP

#include "Student.hpp"

class Clasa
{
    Student *studenti;
    int nr_studenti;
public:
    Clasa ();
    Clasa (Student*, int);
    Clasa (const Clasa&);
    ~Clasa();

    Clasa& operator=(const Clasa&);
    friend ostream& operator<<(ostream&, const Clasa&);

    void sortare();
    void adaugare(int poz, Student nou);
    void schimbare_diriginte(char nume_nou[]);
};

#endif
