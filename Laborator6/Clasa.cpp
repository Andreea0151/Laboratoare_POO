#include "Clasa.hpp"

Clasa :: Clasa () : studenti(NULL), nr_studenti(0) {}

Clasa :: Clasa (Student* studenti, int nr_studenti)
{
    this->nr_studenti = nr_studenti;
    this->studenti = new Student [nr_studenti];
    for (int i = 0; i < nr_studenti; i++)
        this->studenti[i] = studenti[i];
}

Clasa :: Clasa (const Clasa& obj)
{
    studenti = NULL;
    *this = obj;
}

Clasa :: ~Clasa()
{
    delete []studenti;
}

Clasa& Clasa :: operator = (const Clasa& obj)
{
	this->nr_studenti = obj.nr_studenti;
	if( studenti != NULL ) delete []studenti;
	this->studenti = new Student[nr_studenti];
	for(int i = 0; i < nr_studenti; i++)
	     this->studenti[i] = obj.studenti[i];

	return *this;
}

ostream& operator<< (ostream& out, const Clasa& obj)
{
    for(int i = 0; i < obj.nr_studenti; i++)
		   out << obj.studenti[i] << endl;


    return out;
}

void Clasa :: sortare ()
{
  for (int i = 0; i < nr_studenti - 1; i ++)
  for (int j = i + 1; j < nr_studenti; j++)
      if (studenti[i].getMedie() < studenti[j].getMedie())
        studenti[i].interschimbare(studenti[j]);
}

void Clasa :: adaugare (int poz, Student nou)
{
    Student *aux = new Student[nr_studenti + 1];
    for (int i = 0; i < nr_studenti; i++)
        aux[i] = studenti[i];
    nr_studenti++;

    for (int i = nr_studenti - 1; i > poz; i--)
        aux[i] = aux[i - 1];
    aux[poz] = nou;

    delete []studenti;

    studenti = aux;
}

void Clasa :: schimbare_diriginte (char nume_nou[])
{
    for (int i = 0; i < 10; i++)
        studenti[i].schimbare_nume(nume_nou);

}
