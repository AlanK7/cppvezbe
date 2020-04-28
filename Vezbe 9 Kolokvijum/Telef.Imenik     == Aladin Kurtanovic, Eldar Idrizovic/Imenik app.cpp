#include<iostream>
#include<conio.h>
#include<fstream>
#include<conio.h>
#include<cstdlib>

using namespace std;

//global variables
string ime, prezime, broj_tel;

// Functions
void dodajKontakt();
void pretraziKontakte();
void pomoc();
void izlaz();
bool provera_ispisa(string);
bool provera_brojeva(string);

int main()
{
    short int izaberi;
    system("cls");
    system("color 0A");
    cout << "\n\n\n\t\t\tKontakt Lista.";
    cout << "\n\n\t1. Dodaj Kontakt\n\t2. Pretrazi Kontakte\n\t3. Pomoc\n\t4. Izlaz\n\t> ";
    cin >> izaberi;

    switch (izaberi)
    {
    case 1:
        dodajKontakt();
        break;
    case 2:
        pretraziKontakte();
        break;
    case 3:
        pomoc();
        break;
    case 4:
        izlaz();
        break;
    default:
        cout << "\n\n\tPogresan unos !";
        cout << "\n\tPritisni bilo koji taster da nastavis..";
        _getche();
        main();
    }
    return 0;
}

void izlaz()
{
    system("cls");
    cout << "\n\n\n\t\tHvala na koriscenju !";
    exit(1);
}

void pomoc()
{
    cout << "Ovo je pomoc";
}

void dodajKontakt()
{
    ofstream telefon("number.txt", ios::app);
    system("cls");
    cout << "\n\n\tUnesite ime : ";
    cin >> ime;
    cout << "\n\tUnesite prezime : ";
    cin >> prezime;
    cout << "\n\tUnesi broj sa 10 karaktera : ";
    cin >> broj_tel;

    if (provera_ispisa(broj_tel) == true)
    {
        if (provera_brojeva(broj_tel) == true)
        {
            if (telefon.is_open())
            {
                telefon << ime << " " << prezime << " " << broj_tel << endl;
                cout << "\n\tKontakt je uspesno sacuvan !";
            }
            else
            {
                cout << "\n\tUPS GRESKA!";
            }
        }
        else
        {
            cout << "\n\tA Broj telefona treba da sadrzi !";
        }
    }
    else
    {
        cout << "\n\t Broj telefona mora da sadrzi 10 karaktera .";
    }
    telefon.close();
}

void pretraziKontakte()
{
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    cout << "\n\tUkacaj ime za pretragu : ";
    cin >> keyword;
    while (myfile >> ime >> prezime >> broj_tel)
    {
        if (keyword == ime || keyword == prezime)
        {
            system("cls");
            cout << "\n\n\n\t\tDetalji o kontaktu..";
            cout << "\n\n\tIme : " << ime;
            cout << "\n\tPrezime : " << prezime;
            cout << "\n\tBroj Telefona : " << broj_tel;
            found = true;
            break;
        }
    }
    if (found == false)
        cout << "\n\tKontakt ne postoi";
}

bool provera_ispisa(string x)
{
    if (x.length() == 10)
        return true;
    else
        return false;
}

bool provera_brojeva(string x)
{
    bool check = true;


    for (int i = 0; i < x.length(); i++)
    {
        if (!(int(x[i]) >= 48 && int(x[i]) <= 57))
        {
            check = false;
            break;
        }
    }

    if (check == true)
        return true;
    if (check == false)
        return false;
}
