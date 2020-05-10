#ifndef ARTIKAL_H
#define ARTIKAL_H
#include <string>

// definisanje interfejsa klase
class Artikal
{
    public:
        std::string Naziv;
        int Cena;

    public:
        Artikal();
        Artikal(std::string Naziv, int Cena);
        ~Artikal();
        void Ispis();
};

#endif // ARTIKAL_H
