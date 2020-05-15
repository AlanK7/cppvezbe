#ifndef GEOMETRIJSKAFIGURA_H
#define GEOMETRIJSKAFIGURA_H
#include <string>


using namespace std;

class GeometrijskaFigura
{
    protected:
        string Naziv;
        string Boja;
    public:
        GeometrijskaFigura();
        GeometrijskaFigura(string n, string b);
        ~GeometrijskaFigura();

        string GetBoja();
        void SetBoja(string b);

        string GetNaziv();
        void SetNaziv(string n);
};

#endif // GEOMETRIJSKAFIGURA_H
