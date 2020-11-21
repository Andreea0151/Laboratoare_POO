#include "Nota.hpp"

Nota :: Nota () : note(NULL), nr_note(0) {}

Nota :: Nota (int* note, int nr_note)
{
    this->nr_note = nr_note;

    this->note = new int [nr_note];
    for (int i = 0; i < nr_note; i++)
        this->note[i] = note[i];
}

Nota :: Nota (const Nota& obj) : nr_note(obj.nr_note)
{
    note = NULL;
    *this = obj;
}

Nota :: ~Nota ()
{
    delete []note;
}

Nota& Nota :: operator= (const Nota& obj)
{
    nr_note = obj.nr_note;
    if (note != NULL)	delete []note;
    note = new int [obj.nr_note];
    for (int i = 0; i < obj.nr_note; i++)
        note[i] = obj.note[i];

    return *this;
}

ostream& operator<< (ostream& out, const Nota& obj)
{
    out << "Note: ";
    for (int i = 0; i < obj.nr_note; i++)
        out << obj.note[i] << " ";
    out << "\n";

	  return out;
}

float Nota :: getMedie ()
{
    float s = 0;
    for (int i = 0; i < nr_note; i++)
          s += note[i];

    return s / nr_note;
}
