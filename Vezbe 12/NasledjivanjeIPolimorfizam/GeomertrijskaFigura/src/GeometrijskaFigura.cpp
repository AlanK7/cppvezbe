#include "GeometrijskaFigura.h"

GeometrijskaFigura::GeometrijskaFigura() {}

GeometrijskaFigura::GeometrijskaFigura(string n, string b)
{
    Naziv = n;
    Boja = b;
}

GeometrijskaFigura::~GeometrijskaFigura()
{
}

string GeometrijskaFigura::GetBoja()
{
    return Boja;
}
void GeometrijskaFigura::SetBoja(string b)
{
    Boja = b;
}

string GeometrijskaFigura::GetNaziv()
{
    return Naziv;
}
void GeometrijskaFigura::SetNaziv(string n)
{
    Boja = n;
}
