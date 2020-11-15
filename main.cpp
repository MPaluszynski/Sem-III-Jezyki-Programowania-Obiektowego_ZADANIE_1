#include <iostream>
#include "liczba.h"
#include "complex.h"

using namespace std;

int main()
{
    cout << "* Prezentacja obiektu klasy Liczba za pomoca wskaznika: " << "\n\n";
    Liczba r1(5);
    Liczba *wsk1;
    wsk1=&r1;

    wsk1 -> modul();
    cout << *wsk1;

    cout << "\n";

    cout << "* Prezentacja obiektu klasy Complex za pomoca zmiennej lokalnej: " << "\n\n";

    Complex i1(7,-1);
    i1.modul();
    cout << i1;

    cout << "\n"<< "* Prezentacja wirtualnosci metody modul (a jednoczesnie przeciazania metod): " << "\n\n";

    Wartosc_Liczbowa ** tablica = new Wartosc_Liczbowa *[2];

    tablica[0] = wsk1;

    Complex *wsk2;
    wsk2=&i1;

    tablica[1] = wsk2;

    for(int i = 0 ; i<2 ; i++){
        cout << "   Iteracyjne wywolanie wskaznika nr " << i << ": ";
        tablica[i] -> modul();
    }

    cout << "\n"<< "* Prezentacja przeslaniania metod): " << "\n\n";

    i1.modul();
    i1.modul(2);

    cout << "\n"<< "* Zakonczenie prezentacji: " << "\n\n";


    return 0;
}
