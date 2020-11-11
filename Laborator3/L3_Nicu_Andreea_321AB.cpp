#include "L3_Nicu_Andreea_321AB.hpp"

Student :: Student ()
{
    nume = NULL;
    facultate = NULL;
    strcpy (CNP, " ");
    an_nastere = 0;
}

Student :: Student (const char *nume, const char *facultate, const char CNP[], const int an_nastere)
{
    this->nume = new char [strlen(nume) + 1];
    strcpy(this->nume, nume);

    this->facultate = new char [strlen(facultate) + 1];
    strcpy(this->facultate, facultate);

    strcpy(this->CNP, CNP);

    this->an_nastere = an_nastere;
}

Student :: Student (const Student &obj)
{
    strcpy(this->nume, obj.nume);
    strcpy(this->facultate, obj.facultate);
    strcpy(this->CNP, obj.CNP);
    this->an_nastere = obj.an_nastere;
}

Student :: ~Student ()
{
    delete []nume;
    delete []facultate;
}

void Student :: afisare() const
{
  cout << "Numele este: " << nume;
  cout << "\nFacultatea este: " << facultate;
  cout << "\nCNP-ul este: " << CNP;
  cout << "\nAn nastere: " << an_nastere << endl << endl;
}

void Student :: modif(const char *n, const char *f, const char C[], const int an)
{
    if (nume != NULL) delete []nume;
    nume = new char[strlen(n) + 1];
    strcpy(nume, n);

    if (facultate != NULL) delete[]facultate;
    facultate = new char [strlen(f) + 1];
    strcpy(facultate, f);

    strcpy(CNP, C);

    an_nastere = an;
}

int Student :: getAn() const
{
    return an_nastere;
}

char* Student :: getFacultate() const
{
    return facultate;
}

char* Student :: getNume() const
{
      return nume;
}

void sortare (Student *v, int n)
{
      Student aux;
      for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++)
          if (strcmp(v[i].getFacultate(), v[j].getFacultate()) > 1)
            interschimbare(v[i], v[j]);
}

int maxim (Student *v, int n)
{
    int mx = v[0].getAn();
    for (int i = 1; i < n; i++)
        if (mx > v[i].getAn())  mx = v[i].getAn();
    return mx;
}
