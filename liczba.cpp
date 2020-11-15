#include <iostream>
#include "complex.h"
#include <cmath>

using namespace std;

Liczba::Liczba(double re)
{
    cout<<"Konstruktor Liczba = "<<re<<"\n";
    this->re = re;
}

Liczba::~Liczba(void)
{
    cout<<"Destruktor Liczba = "<< re<<"\n";
}
double Liczba::modul()
{
    double mod = sqrt((re*re));
    cout<<"Modul Liczba = "<<mod<<"\n";
    return mod;
}

std::ostream & operator<<(std::ostream &out, Liczba &l)
{
    out<<"Liczba rzeczywista: " << l.re<<"\n";
    return out;
}
