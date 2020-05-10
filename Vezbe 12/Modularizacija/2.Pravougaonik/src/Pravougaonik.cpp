#include "Pravougaonik.h"

Pravougaonik::Pravougaonik(double a, double b)
{
    this->a = a;
    this->b = b;
}

double Pravougaonik::Povrsina()
{
    return a*b;
}

double Pravougaonik::Obim()
{
    return a+b;
}

Pravougaonik::~Pravougaonik()
{
    //dtor
}
