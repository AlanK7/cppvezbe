#include <iostream>

using namespace std;

// ovo je globalna promenjiva x
int x = 10;

void nekaFunkcija();

int main()
{
    // ovo je lokalna promenjiva x, koja vazi za main funkciju
    int x = 5;

    // da nismo definisali i deklarisali x u ovom bloku, x u ispisu ispod bi uzelo vrednost globalne promenjive
    cout << "Ovo je x iz main funkcije : " << x << endl;

    nekaFunkcija();

    return 0;
}

void nekaFunkcija()
{
    // posto nekaFunkcija nema definisano i deklarisano x, a x postoji u globalnom scopu i ova funkcija ga vidi
    // mi mozemo koristiti promenjivu x u ovom slucaju (globalno x = 5)
    cout << "Ovo je x iz nekeFunkcije : " << x << endl;
}
