#include <iostream>
// nove pretprocesorske direktive koje koristimo za rad sa stringovima
#include <cstring>
#include <cctype>

using namespace std;

// 1. Napisati program kojim se unosi ime i prezime, a zatim ispisuje...

int main()
{
    // viticaste zagrade {}, inicijalizuju ovaj niz u prazan niz (pre toga je moguce da je nesto bilo na toj memorijskoj lokaciji)
    char Ime[20]{};
    char Prezime[20]{};
    char PunoIme[50]{};

    cout << "Unesite ime : ";
    cin >> Ime;

    cout << "Unesite prezime: ";
    cin >> Prezime;


    // kopiranje stringova, funkciji prosledjujemo string u kome zelimo da smestimo string, i string koji kopiramo u njega kao argumente
    strcpy(PunoIme, Ime);


    // spajanje stringova
    // funkciji prosledjujemo dva stringa koja zelimo da nam ona spoji u jedan
    strcat(PunoIme, " ");
    strcat(PunoIme, Prezime);

    cout << "Vase ime i prezime je : " << PunoIme;

    return 0;
}
