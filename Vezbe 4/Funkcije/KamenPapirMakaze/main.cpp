#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// GLOBALNA PROMENJIVE ZA REZULTAT
// globalnim promenjivama se moze pristupiti iz bilo kojeg bloka u programu
int PoeniIgraca = 0;
int PoeniRacunara = 0;

// prototipi funkcija i njihovo definisanje

// funkcija koja sadrzi celu logiku igre
void Igra();
// funkcija za osvezavanje i ispis rezultata
// blago modifikovan program radi lepseg prikaza u odnosu na onaj koji smo zajedno otkucali
// stvari koje su koriscene (vrlo moguce da ste ih radili iz C-a) su system("PAUSE"), za pauziranje programa
// i system("CLS"), za clear screen
void OsveziPrikaz();

int main()
{
    // ovaj bool nam sluzi da znamo da li treba da zavrsimo sa izvrsavanjem programa
    bool AktivnaIgra = true;
    // uz pomoc ove promenjive biramo opciju 1.Igraj ili 2.Exit (napusti program)
    int Opcija = 0;

    // ovaj do-while se izvrsava sve dok korisnik ne unese broj 2 za kraj
    do
    {
        // pozivamo metodu za osvezavanje prikaza, koja cisti ekran i ispisuje trenutni rezultat
        OsveziPrikaz();
        cout << "Unesite opciju: " << endl << "1.Igraj"
        << endl << "2.Exit" << endl;
        cin >> Opcija;

        //switch koji ispituje opciju koju je korisnik uneo
        switch(Opcija)
        {
            case 1:
                {
                    Igra();
                    break;
                }
            case 2:
                {
                    // system("CLS") cisti konzolu - ovo je ubaceno zbog lepseg ispisa, program radi i bez ovoga
                    // CLS = Clear Screen
                    system("CLS");
                    cout << "Konacan rezultat je : " << endl
                    << "IGRAC: " << PoeniIgraca << endl
                    << "RACUNAR: " << PoeniRacunara << endl;
                    // stavljamo promenjivu AktivnaIgra na false kako bi izasli iz do-while petlje i zavrsili program
                    AktivnaIgra = false;
                    break;
                }
            default:
                {
                    cout << "Niste uneli nista od ponudjenih opcija" << endl;
                    // system("PAUSE") pauzira program i trazi od korisnika da stisne dodatni enter
                    system("PAUSE");
                }
        }
    }while(AktivnaIgra);
    system("PAUSE");
    return 0;
}

void Igra()
{
    // dve promenjive za izbor igraca i racunara
    // igrac svoj izbor unosi sa tastature, dok je izbor racunara nasumicno generisan funkcijom rand()
    int IzborIgraca = 0;
    int IzborRacunara = 0;

    do
    {
        // pozivamo metodu za osvezavanje prikaza
        OsveziPrikaz();
        cout << "1.Papir" << endl << "2.Kamen"
        << endl << "3.Makaze" << endl;
        cin >> IzborIgraca;

        if((IzborIgraca>=1 && IzborIgraca<=3))
            break;
        else
        {
            cout << "Niste uneli nista od ponudjenih opcija" << endl;
            system("PAUSE");
        }
    }while(true);

    //srand postavlja novi seed, od cega zavisi koji algoritam ce racunar izvrsiti kada pozovemo funkciju rand() ispod
    // time(0) predstavlja broj sekundi od 1970.godine do sad, i menja se svake sekunde, tako da nikada nece biti isti
    srand(time(0));

    // rand() generise nasumican int, a nama je potreban broj od 1 do 3
    // to postizemo tako sto dodajemo 1 na ostatak pri deljenju tog broja sa 3 (koji moze biti 0,1,2)
    IzborRacunara = 1 + (rand() % 3);

    // ukoliko su jednaki izbori (ukoliko je nereseno)
    if(IzborIgraca == IzborRacunara)
    {
        // ispitivanje i adekvatan ispis za slucajeve kada su odabrani papir, kamen ili makaze
        if(IzborIgraca==1)
            cout << "I igrac i racunar su odabrali papir...Nereseno je." << endl;
        else if(IzborIgraca==2)
            cout << "I igrac i racunar su odabrali kamen...Nereseno je." << endl;
        else
            cout << "I igrac i racunar su odabrali makaze...Nereseno je." << endl;
    }
    else if(IzborIgraca==1)
    {
        if(IzborRacunara==2)
        {
            cout << "Racunar je odabrao kamen...Pobedili ste" << endl;
            PoeniIgraca++;
        }
        else
        {
            cout << "Racunar je odabrao makaze...Izgubili ste" << endl;
            PoeniRacunara++;
        }
    }
    else if(IzborIgraca==2)
    {
        if(IzborRacunara==1)
        {
            cout << "Racunar je odabrao papir...Izgubili ste" << endl;
            PoeniRacunara++;
        }
        else
        {
            cout << "Racunar je odabrao makaze...Pobedili ste" << endl;
            PoeniIgraca++;
        }
    }
    else
    {
        if(IzborRacunara==1)
        {
            cout << "Racunar je odabrao papir...Pobedili ste" << endl;
            PoeniIgraca++;
        }
        else
        {
            cout << "Racunar je odabrao kamen...Izgubili ste" << endl;
            PoeniRacunara++;
        }
    }
    //pauziramo program kako bi korisnik video poruku o mecu
    system("PAUSE");
}

// funkcija koja cisti ekran i ispisuje novi rezultat
void OsveziPrikaz()
{
    // cistimo ekran od prethodnog ispisa
    system("CLS");
    // ispisujemo rezultat koji ce se pojaviti na vrhu
    cout << "IGRAC: " << PoeniIgraca << endl;
    cout << "RACUNAR: " << PoeniRacunara << endl;
}


