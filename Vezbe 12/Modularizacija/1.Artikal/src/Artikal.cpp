#include "Artikal.h"
#include <string>
#include <iostream>

//implementacija klase, tj. njenih konstruktora, destruktora i metoda

Artikal::Artikal()
{
    //ctor
}

Artikal::Artikal(std::string Naziv, int Cena)
{
    this->Naziv = Naziv;
    this->Cena = Cena;
}

void Artikal::Ispis()
{
    std::cout << "Naziv: " << this->Naziv << std::endl << "Cena: " << this->Cena << std::endl;
}

Artikal::~Artikal(){}
