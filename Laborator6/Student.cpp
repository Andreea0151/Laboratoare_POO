#include "Student.hpp"

Student :: Student() : Nota(), Diriginte(), nume_student(NULL) {}

Student :: Student (int* note, int nr_note, const char* nume, const char grupa[], const char* nume_student) : Nota(note, nr_note), Diriginte(nume, grupa)
{
    this->nume_student = new char [strlen(nume_student) + 1];
    strcpy (this->nume_student, nume_student);
}

Student :: Student (const Student& obj)
{
    nume_student = NULL;
    nume = NULL;
    *this = obj;
}

Student :: ~Student ()
{
    delete[]nume_student;
}

Student& Student :: operator= (const Student& obj)
{
    Nota :: operator = (obj);
	  Diriginte :: operator = (obj);
    if (nume_student != NULL) delete []nume_student;
	  this->nume_student = new char[strlen(obj.nume_student) + 1];
	  strcpy(this->nume_student, obj.nume_student);

	  return *this;
}

ostream& operator<< (ostream& out, const Student& obj)
{
    if(obj.nume_student != NULL)
	       out << "Nume student: " << obj.nume_student;
    else
	       out << "Nu exista nume.\n";
    out << (Diriginte&)obj;
    out << (Nota&)obj;

    return out;
}

void Student :: interschimbare (Student& obj)
{
    Student aux(*this);
    *this = obj;
    obj = aux;
}
