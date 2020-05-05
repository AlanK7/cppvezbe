#include <iostream>

using namespace std;

class Account
{
public:
    string ime;
    string prezime;
    double stanje;

    void prikaziStanje()
    {
        cout << ime << " " << prezime << endl << "Stanje na racunu : " << stanje << endl;
    }
    void depozit(double iznos)
    {
        stanje += iznos;
    }
     void podizanje_novca(double iznos)
    {
        stanje -= iznos;
    }
};

int main()
{
    Account acc;
    acc.ime = "Neko";
    acc.prezime = "Nekic";
    acc.stanje = 450.4;

    acc.prikaziStanje();

    acc.depozit(405);

    acc.prikaziStanje();

    acc.podizanje_novca(150);

    acc.prikaziStanje();

    return 0;
}
