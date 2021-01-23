#include "Vaca.hpp"
#include "Gaina.hpp"
#include "Cal.hpp"
#include "Porc.hpp"
#include "Capra.hpp"
#include "Depozit.hpp"

int main()
{
    std :: cout << "Program de management pentru o ferma.\n";
    Animal** v;
    int n = 5;
    v = new Animal* [n];
    v[0] = new Vaca("Vaca", 10, 30, "Nutret");
    v[1] = new Gaina("Gaina", 100, 5, "Graunte");
    v[2] = new Cal("Cal", 2, 8, "Nutret");
    v[3] = new Porc("Porc", 8, 4, 5, "Graunte", "Iarba");
    v[4] = new Capra("Capra", 4, 4, "Nutret");

    std :: cout << "Ferma contine un depozit cu mancare, cu o capacitate de 2000 kg si mai multe hambare pentru animale.\n";
    std :: cout << "Se realizeaza o estimare pentru urmatoarele 365 de zile.\n";

    std :: cout << "\nDetaliile despre fiecare animal:\n";
    for (int i = 0; i < n; i++)
    {
        v[i]->afisare();
        std :: cout << std :: endl;
    }

    //cata mancare se consuma pe zi(in total si pe fiecare categorie)
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += v[i]->getCantitate();
        if (strcmp(v[i]->getNume(), "Porc") == 0)
          suma += ((Porc*)v[i])->getCantitate2();
    }
    std :: cout << "\nCantitatea de mancare consumata de animale intr-o zi: ";
    std :: cout << suma << " kg mancare/zi\n";

    Depozit depozit(2000, 0, 0, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i]->getMancare() == "Nutret")
            depozit.nutret += v[i]->getCantitate();
        else if (v[i]->getMancare() == "Graunte")
            depozit.graunte += v[i]->getCantitate();
        else depozit.iarba += v[i]->getCantitate();

        if (strcmp(v[i]->getNume(), "Porc") == 0)
            depozit.iarba += ((Porc*)v[i])->getCantitate2();
    }

    std :: cout << "Nutret: " << depozit.nutret << " kg/zi\n";
    std :: cout << "Graunte: " << depozit.graunte << " kg/zi\n";
    std :: cout << "Iarba: " << depozit.iarba << " kg/zi\n";

    //ce cantitate din fiecare mancare trebuie stocata in depozit astfel incat
    //aceasta sa ajunga cat mai multe zile
    int zile = depozit.capacitate / suma;
    std :: cout << "\nCantitatea din fiecare mancare stocata in depozit astfel incat aceasta sa ajunga cat mai multe zile:\n";
    std :: cout << "Nutret: " << zile * depozit.nutret << "kg\n";
    std :: cout << "Graunte: " << zile * depozit.graunte << "kg\n";
    std :: cout << "Iarba: " << zile * depozit.iarba << "kg\n";

    int stoc_mancare = (depozit.nutret + depozit.graunte + depozit.iarba) * zile;

    //de cate ori trebuie sa fie reumplut depozitul
    int reumplere = 365 / zile + 1;
    std :: cout << "\nDepozitul se va reumple de " <<  reumplere << "/an.\n";

    //afisati cata mancare va ramane la finalul anului (in total si pe fiecare categorie)
    int mancare_consumata = suma * 365;
    int mancare_anuala = reumplere * stoc_mancare;
    int mancare_ramasa = mancare_anuala - mancare_consumata;
    std :: cout << "\nCantitatea de mancare ramasa la final de an: " << mancare_ramasa << "kg.";

    std :: cout << "\nCantitatea de mancare ramasa la final de an pe fiecare categorie:";
    int nutret_consumat = depozit.nutret * 365;
    int nutret_anual = depozit.nutret * reumplere * zile;
    int nutret_ramas = nutret_anual - nutret_consumat;
    std :: cout << "\nNutret: " << nutret_ramas << "kg";

    int graunte_consumate = depozit.graunte * 365;
    int graunte_anuale = depozit.graunte * reumplere * zile;
    int graunte_ramase = graunte_anuale - graunte_consumate;
    std :: cout << "\nGraunte ramase: " << graunte_ramase << "kg";

    int iarba_consumata = depozit.iarba * 365;
    int iarba_anuala = depozit.iarba * reumplere * zile;
    int iarba_ramasa = iarba_anuala - iarba_consumata;
    std :: cout << "\nIarba ramasa: " << iarba_ramasa << "kg\n";

    std :: cout << "\nTop 3 consumatori de mancare:\n";
    for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
        if (v[i]->getCantitateperAnimal() < v[j]->getCantitateperAnimal())
        {
            Animal* aux;
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }

    for (int i = 0; i < 3; i++)
        std :: cout << v[i]->getNume() << std :: endl;

      return 1;
}
