#include <iostream>
#include "Pravougaonik.h";
#include "Krug.h";
#include <string>

using namespace std;

int main()
{
    Pravougaonik p1("Pravougaonik","Plava",3.4, 5.4);
    Pravougaonik p2 ("Pravougaonik", "Crvena", 2.5, 4.0);

    Krug k1("Krug","Crna",4.5);
    Krug k2("Krug","Bela",3.5);

    // OBJEKAT P1
    cout << "Naziv : " << p1.GetNaziv() << endl;
    cout << "Boja : " << p1.GetBoja() << endl;
    cout << "Stranica A : " << p1.GetStranicaA() << endl;
    cout << "Stranica B : " << p1.GetStranicaB() << endl;
    cout << "Povrsina : " << p1.GetPovrsina() << endl;;
    cout << "Obim : " << p1.GetObim() << endl << endl;

    // OBJEKAT P2
    cout << "Naziv : " << p2.GetNaziv() << endl;
    p2.SetBoja("Narandzasta");
    p2.SetStranicaA(5.6);
    cout << "Stranica A : " << p2.GetStranicaA() << endl;
    cout << "Stranica B : " << p2.GetStranicaB() << endl;
    cout << "Boja : " << p2.GetBoja() << endl;
    cout << "Povrsina : " << p2.GetPovrsina() << endl;
    cout << "Obim : " << p2.GetObim() << endl << endl;

    // OBJEKAT K1
    cout << "Naziv : " << k1.GetNaziv() << endl;
    cout << "Poluprecnik " << k1.GetPoluprecnik() << endl;
    cout << "Boja : " << k1.GetBoja() << endl;
    cout << "Povrsina : " << k1.GetPovrsina() << endl;;
    cout << "Obim : " << k1.GetObim() << endl << endl;

    // OBJEKAT K2
    cout << "Naziv : " << k2.GetNaziv() << endl;
    k2.SetBoja("Ljubicasta");
    k2.SetPoluprecnik(2.5);
    cout << "Poluprecnik " << k2.GetPoluprecnik() << endl;
    cout << "Boja : " << k2.GetBoja() << endl;
    cout << "Povrsina : " << k2.GetPovrsina() << endl;;
    cout << "Obim : " << k2.GetObim() << endl << endl;

    return 0;
}
