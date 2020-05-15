#include "Pravougaonik.h"
#include "GeometrijskaFigura.h"

Pravougaonik::Pravougaonik(string n, string b, float strA, float strB) : GeometrijskaFigura(n,b)
{
    StranicaA = strA;
    StranicaB = strB;
}

Pravougaonik::~Pravougaonik()
{
    //dtor
}

void Pravougaonik::SetStranicaA(float strA)
{
    StranicaA = strA;
}

float Pravougaonik::GetStranicaA()
{
    return StranicaA;
}

void Pravougaonik::SetStranicaB(float strB)
{
    StranicaB = strB;
}

float Pravougaonik::GetStranicaB()
{
    return StranicaB;
}

float Pravougaonik::GetPovrsina()
{
    return StranicaA*StranicaB;
}

float Pravougaonik::GetObim()
{
    return (2*StranicaA) + (2*StranicaB);
}
