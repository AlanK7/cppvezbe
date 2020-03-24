#include <iostream>

using namespace std;

// void funkcija (funkcija koja nema povratne parametre)
void IspisNekogTeksta(); // u zagradi bi isli argumenti
// ali ova funkcija nema ni argumente koje prima

int main()
{
    // poziv funkcije
    IspisNekogTeksta();
    // jos jedan poziv na istu funkciju
    // jedan od glavnih razloga zbog kojeg se funkcije koriste
    // da ne bismo ponavljali isti kod ukoliko zelimo da odradimo istu stvar
    IspisNekogTeksta();
    return 0;
}

void IspisNekogTeksta()
{
    cout << "Neki tekst" << cout;
}
