#include "liczba.h"
#include <ostream>

class Complex : public Wartosc_Liczbowa
{
protected:
    double re;
    double im; //czesc urojona
public:
    ~Complex(void);
    Complex(double re=0,double im=0) ;
    Complex operator +(Complex &);
    friend std::ostream & operator<< (std::ostream &out, Complex &l);
    double modul();
    double modul(int multiplier);
    void wypisz(std::ostream &out)
    {
    out<<*this;
    }
};
