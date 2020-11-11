#include <iostream>
#include <string.h>
using namespace std;

class Angajat
{
        char *nume;
        char *firma;
        char CNP[14];
        int salariu;
public:
        Angajat()
        {
            //cout << "Constructor fara parametrii.\n";
            nume = NULL;
            firma = NULL;
            strcpy(CNP, "");
            salariu  = 0;
        }

        Angajat(char *n, char *f, char C[],int s)
        {
            //cout << "Constructor cu parametrii.\n";
            nume = new char[strlen(n) + 1];
            strcpy(nume, n);
            firma = new char[strlen(f) + 1];
            strcpy(firma, f);
            strcpy(CNP, C);
            salariu = s;
        }

        ~Angajat()
        {
            //cout << "Destructor.\n";
            if(nume != NULL)
                delete[] nume;
            if(firma != NULL)
                delete[]firma;
            //cout << endl << "S-a intrat";
        }

        void afisare()
        {
            cout<< "Nume: " << nume << ". Firma: " << firma << endl;

        }

        void modif(const char *n, const char *f, const char C[], int s)
        {
            if(nume != NULL)  delete []nume;

            nume = new char[strlen(n) + 1];
            strcpy(nume, n);

            if(firma != NULL)  delete []firma;

            firma = new char[strlen(f) + 1];
            strcpy(firma, f);

            strcpy(CNP, C);

            salariu = s;
        }

        void modif(const Angajat &obj)
        {
            if(nume != NULL)  delete []nume;

            nume = new char[strlen(obj.nume) + 1];
            strcpy(nume, obj.nume);

            if(firma != NULL)  delete []firma;

            firma = new char[strlen(obj.firma) + 1];
            strcpy(firma, obj.firma);

            strcpy(CNP, obj.CNP);
            salariu = obj.salariu;
        }

        int getSalariu() const
        {
            return salariu;
        }

        char *getNume() const
        {
            return nume;
        }
};

void alocare_vector (Angajat **v, int n)
{
    (*v) = new Angajat[n];
}

/*void citire_vector (Angajat *v, int n)
{
    char buffer_nume[20];
    char buffer_firma[20];
    char buffer_CNP[14];
    int buffer_salariu;
    for (int i = 0; i < n; i++)
    {
        cout << "Angajat " << i + 1 << endl;
        cout << "Nume: ";
        cin >> buffer_nume;
        cout << "Firma: ";
        cin >> buffer_firma;
        cout << "CNP: ";
        cin >> buffer_CNP;
        cout << "Salariu: ";
        cin >> buffer_salariu;
        v[i].modif(buffer_nume, buffer_firma, buffer_CNP, buffer_salariu);
    }
}*/

void sortare (Angajat *v, int n)
{
    Angajat aux;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(v[i].getNume(), v[j].getNume()) > 1 )
            {
                aux.modif(v[i]);
                v[i].modif(v[j]);
                v[j].modif(aux);
            }
}

int maxim (Angajat *v, int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
        if (v[i].getSalariu() > mx) mx = v[i].getSalariu();
    return mx;
}

int main ()
{
    /*int n;
    Angajat *v;
    cout << "Introduceti nr angajatilor:";
    cin >> n;
    alocare_vector(&v, n);
    citire_vector(v, n);*/

    cout << endl << "Testare metode:" << endl;
    Angajat obj;
    obj.modif ("Alexia", "Transport", "123455678961", 34);
    obj.afisare();
    cout << obj.getNume() << " ->salariu: " << obj.getSalariu() << endl;

    cout << endl << "Angajati:";
    Angajat *v;
    int n = 3;
    v = new Angajat[n];
    v[0].modif("Nicu Andreea", "Translar", "6001510221192", 99);
    v[1].modif("Ruben Udroiu", "UPB", "2147812771001", 100);
    v[2].modif("Ana Maria", "Mechano", "19978214782110", 100);

    cout << endl;
    for (int i = 0; i < n; i++)
        v[i].afisare();

    cout << endl << "Sortare: " << endl;
    sortare(v, n);
    for (int i = 0; i < n; i++)
        v[i].afisare();
    cout << endl;

    int nr = 0;
    for (int i = 0; i < n; i++)
        if (v[i].getSalariu() == maxim(v,n)) nr ++;
    if (nr == 1) cout << "Angajatul cu salariul maxim este: ";
    else cout << "Angajatii cu salariul maxim sunt: " << endl;

    for (int i = 0; i < n; i++)
        if (v[i].getSalariu() == maxim(v,n))
    cout << v[i].getNume() << endl;

    delete []v;

    return 1;
}
