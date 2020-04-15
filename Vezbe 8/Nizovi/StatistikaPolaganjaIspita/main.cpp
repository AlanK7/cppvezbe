#include <iostream>
#define MAX 100

/*
Sastaviti program za izracunavanje statistike polaganja ispita koja obuhvata sledece funkcije :
     izracunavanje ukupne prosecne ocene ( svi studenti koji su polagali ispit ),
     izracunavanje prosecne ocene onih koji su polozili ( ocena veca od 5)
     izracunavanje broja onih koji su polozili ispit
     izracunavanje broja onih koji nisu polozili ispit
     izracunavanje broja onih koji imaju vecu ocenu od prosecne
U glavnom programu se unosi broj studenata I ocene studenata u obliku niza. Ispisati dobijene rezultate.
*/

using namespace std;

float Prosek(int x[], int n);
float ProsekPolozeni(int x[], int n);
int BrojPolozenih(int x[], int n);
int BrojNepolozenih(int x[], int n);
int BrojNadprosecnih(int x[], int n, float p);

int main()
{
    int brojStudenata;
    int ocene[MAX];

    cout << "Broj studenata: " << endl;
    cin >> brojStudenata;

    cout << "Unesite ocene studenata [5 do 10] : " << endl;

    for(int i=0; i < brojStudenata; i++)
    {
        cout << "Ocena " << i+1 << ". studenta = ";
        cin >> ocene[i];
    }

    cout << "Broj polozenih na ispitu : " << BrojPolozenih(ocene, brojStudenata) << endl;
    cout << "Broj nepolozenih na ispitu : " << BrojNepolozenih(ocene, brojStudenata) << endl;


    cout << "Prosek ocena je : " << Prosek(ocene, brojStudenata) << endl;
    cout << "Prosek ocena polozenih je : " << ProsekPolozeni(ocene, brojStudenata) << endl;

    cout << "Broj studenata iznad proseka : " << BrojNadprosecnih(ocene, brojStudenata, Prosek(ocene, brojStudenata)) << endl;

    return 0;
}

float Prosek(int x[], int n)
{
    int suma = 0;
    for(int i=0; i < n; i++)
    {
        suma += x[i];
    }
    return (float)suma/n;
}

float ProsekPolozeni(int x[], int n)
{
    int suma = 0;
    int brojacPolozenih = 0;

    for(int i=0; i < n; i++)
    {
        if(x[i]>5)
        {
            suma += x[i];
            brojacPolozenih++;
        }
    }
    return (float)suma/brojacPolozenih;
}

int BrojPolozenih(int x[], int n)
{
    int brojacPolozenih = 0;

    for(int i=0; i < n; i++)
    {
        if(x[i]>5)
            brojacPolozenih++;
    }
    return brojacPolozenih;
}

int BrojNepolozenih(int x[], int n)
{
    int brojacNepolozenih = 0;

    for(int i=0; i < n; i++)
    {
        if(x[i]<6)
            brojacNepolozenih++;
    }
    return brojacNepolozenih;
}

int BrojNadprosecnih(int x[], int n, float p)
{
    int brojacNadprosecnih = 0;

    for(int i=0; i < n; i++)
    {
        if(x[i]<p)
            brojacNadprosecnih++;
    }
    return brojacNadprosecnih;
}
