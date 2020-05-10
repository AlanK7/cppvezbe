#include <iostream>
#include <string>
#include "Artikal.h"


using namespace std;

int main()
{
    //kreiranje objekta pozivom default konstruktora
    Artikal a1;
    //kreiranje objekta pozivom konstruktora koji prima string i int
    Artikal a2("Chipsy", 60);

    a1.Naziv = "Smoki";
    a1.Cena = 50;

    //pozivanje metode za ispis nad objektima a1 i a2
    a1.Ispis();
    a2.Ispis();

    return 0;
}
