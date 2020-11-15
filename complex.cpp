#include <iostream>
#include "complex.h"
#include <cmath>

using namespace std;

Complex::Complex(double re, double im)
{
    cout<<"Konstruktor Complex = "<< "r: "<<re<< " i: " <<im<<"\n";
    this->re = re;
    this->im = im;
}

Complex::~Complex(void)
{
    cout<<"Destruktor Complex = "<< "r: "<<re<< " i: " <<im<<"\n";
}

double Complex::modul()
{
    double mod = sqrt((re)*(re) + (im)*(im));
    cout<<"Modul ComplexChild = "<<mod<<"\n";
    return mod;
}

double Complex::modul(int multiplier)
{
    double mod = sqrt((re)*(re) + (im)*(im))*multiplier;
    cout<<"Modul ComplexChild = "<<mod<<"\n";
    return mod;
}

std::ostream & operator<<(std::ostream &out, Complex &l)
{
    out<<"Czesc rzeczywista: " << l.re<<" Czesc urojona: " << l.im<<"\n";
    return out;
}
