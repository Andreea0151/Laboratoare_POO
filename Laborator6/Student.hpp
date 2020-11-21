#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Nota.hpp"
#include "Diriginte.hpp"

class Student: public Nota, public Diriginte
{
    char *nume_student;
public:
    Student();
    Student(int*, int, const char*, const char*, const char*);
    Student(const Student&);
    ~Student();

    Student& operator=(const Student&);
    friend ostream& operator<<(ostream&, const Student&);

    void interschimbare (Student&);
};

#endif
