#include <iostream>

using namespace std;

class Osoba
{
public:
    string ime;
    string prezime;
    int godine;

    //default konstruktor
    Osoba()
    {
    }

    Osoba(string ime)
    {
        this->ime = ime;
    }

    Osoba(string ime, string prezime)
    {
        this->ime = ime;
        this->prezime = prezime;
    }

    Osoba(string ime, string prezime, int godine)
    {
        this->ime = ime;
        this->prezime = prezime;
        this->godine = godine;
    }

    ~Osoba()
    {
        cout << "Destruktor je pozvan " << endl;
    }
};

int main()
{
    Osoba o1; // objekat kreiran uz pomoc praznog konstruktora
    Osoba o2("Nebitno"); // objekat kreiran uz pomoc konstruktora koji prima samo ime
    Osoba o3("Neko","Nekic");// -//- koji prima ime i prezime
    Osoba o4("Pera","Peric",29); // -//- ime, prezime i godine

    return 0;
}
