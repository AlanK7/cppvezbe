#include <iostream>

using namespace std;

//prototip funkcije
int Zbir(int a, int b);
// ova funkcija je tipa int, tako da ce program ocekivati da ona vrati ceo broj (return nekiBroj)
// ima dva argumenta koja prima, i oni su takodje celi brojevi (int a, int b)

int main()
{
    int x = 10;
    int y = 5;

    // saljemo x i y kao argumente, jer ih funkcija ocekuje
    cout << Zbir(x,y) << endl;

    return 0;
}

// definicija funkcije
int Zbir(int a,int b)
// blok ispod predstavlja telo funkcije
{
    return a+b;

    // mogli smo i ...
    /*
        int rezultat;
        rezultat = a + b;
        return rezultat;
    */
    // ali nema potrebe, jer je prosta operacija
}
