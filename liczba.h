#include <iostream>
#pragma once
using namespace std;

class Wartosc_Liczbowa /* Klasa podstawowa - beda z niej dziedziczyc kolejne. Domyslnie nie powinno byc mo¿liwoœci tworzenia instancji tej klasy (bo pojecie 'wartoœci liczbowej' jest abstrakcyjne).
                          Jest tzw. klasa abstrakcyjna - bo posiada przynajmniej jedna 'czysta' metode wirtualna . */

{
public:
    virtual double modul () = 0; /* Funkcja wirtualna.  Deklaracja z dopiskiem '=0' oznacza, ze jest to 'czysta' funkcja wirtualna.
                                    -> Funkcja czysto wirtualna (abstrakcyjna) to taka, ktora ma naglowek i nie ma ciala. Wlasnie z tego powodu nie da sie utworzyc obiektu klasy abstrakcyjnej.
                                       W przeciwienstwie do zwyklych metod wirtualnych, ich obsluga jest wymuszona na klasach dziedziczacych - nie sa obslugiwane polimorficznie.
                                    -> Funkcja wirtualne maja swoje cialo i ktore moga zostac przysloniete wewnatrz klasy dziedziczacej.
                                       Innymi slowy ich wywolanie jest polimorficzne (w przeciwienstwie do metod czysto wirtualnych).
                                     */


    virtual void wypisz(std::ostream &out) = 0; /* Kolejna 'czysta' funkcja wirtualna */
    virtual ~Wartosc_Liczbowa() /*Destruktor. Metoda skladowa, wywolywana tuz przed usunieciem obiektu. Sprzata po obiekcie. Nie ma zadeklarowanego typu ani argumentow - moze istniec tylko jeden.
                                  Moze wywolac inna metode skladowa klasy */
    {}
};

class Liczba : public Wartosc_Liczbowa /* Klasa dziedziczaca po 'Wartosc_Liczbowa'. Reprezentuje liczby rzeczywiste (pozbawione czesci urojonej) */
{
    double re; //czesc rzeczywista
public:
    Liczba operator+(Liczba & right) /* Tutaj ma miejsce przeciazenie operatora +. Dzieki temu bedzie mozna go uzyc do sumowania wartosci czesci rzeczywistych dwoch obiektow klasy Liczba.*/
    {
        return Liczba (this->re+right.re);
    }

    double modul();
    Liczba(double re); /*Deklaracja kostruktora klasy Liczba. Dzieki temu kazdy obiekt tej klasy w metodzie main musi byc deklarowany juz z jakas wartoscia rzeczywista*/
    ~Liczba(void); /*Deklaracja destruktora klasy Liczba.*/

    friend std::ostream & operator<< (std::ostream &out, Liczba &l); /* Tutaj ma miejsce przeciazenie operatora '<<' jako funkcji zaprzyjaźnionej (https://www.youtube.com/watch?v=TwW2Nl45FvE&t=143s)
                                                                        jest tez opisane w https://www.youtube.com/watch?v=PreoiPYf_Ug
                                                                        Cialo funkcji dla tego operatora jest zdefiniowane w pliku body.
                                                                        Dzieki temu za pomoca operatora << bedzie mozna printowac zawartosc obiektow bezposrednio */

    void wypisz(std::ostream &out) /* SPRAWDZIC!!! - Prawde mowiac nie wiem po co ta funkcja zostala zdefiniowana */
    {
        out<<*this;
    }
};








