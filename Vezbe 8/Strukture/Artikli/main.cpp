#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

struct Artikal
{
    int Sifra;
    char Naziv[MAX];
    float Cena;
};

void IspisArtikla(Artikal art);

int main()
{
    Artikal art1,art2,art3;

    art1.Sifra = 1;
    strcpy(art1.Naziv, "Smoki");
    art1.Cena = 50;

    art2.Sifra = 2;
    strcpy(art2.Naziv, "Chipsy");
    art2.Cena = 60;

    art3.Sifra = 3;
    strcpy(art3.Naziv, "Mars");
    art3.Cena = 60;

    IspisArtikla(art1);
    IspisArtikla(art2);
    IspisArtikla(art3);

    return 0;
}

void IspisArtikla(Artikal art)
{
    cout << "Sifra : " << art.Sifra << endl;
    cout << "Naziv : " << art.Naziv << endl;
    cout << "Cena : " << art.Cena << endl;
    cout << endl;
}
