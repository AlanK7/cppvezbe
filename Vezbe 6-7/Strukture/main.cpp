#include <iostream>

using namespace std;

// struktura (tip podatka), koji u sebi sadrzi skup promenjivih proizvoljnog tipa (int, char, char[]...)
struct Student
{
    char Ime[20];
    char Prezime[20];
    int Ocena;
};

int main()
{
    // deklaracija niza studenata
    /*
        ovo mozemo posmatrati na isti nacin kao sto posmatramo deklaraciju
        int brojevi[5];
        s' tim niz koji smo mi deklarisali nije tipa int, vec je tipa Student
        Student(tip,tj. struktura koju smo mi napravili gore iznad i koja ima char ime[20],char prezime[20] i int ocena)
    */
    Student studenti[3];
    // Student je tip podatka, studenti[3] je naziv niza

    // prolazak kroz niz studenata
    for(int i=0; i < 2; i++)
    {
        // unos imena
        cout << "Unesite ime : ";
        cin >> studenti[i].Ime;
        // unos prezimena
        cout << "Unesite prezime : ";
        cin >> studenti[i].Prezime;
        // unos ocene
        cout << "Unesite ocenu : ";
        cin >> studenti[i].Ocena;
    }

    // ispih svi studenata iz naseg niza studenti
    for(int i=0; i < 2; i++)
    {
        cout << studenti[i].Ime << " " << studenti[i].Prezime << " " << studenti[i].Ocena << endl;
    }

    return 0;
}
