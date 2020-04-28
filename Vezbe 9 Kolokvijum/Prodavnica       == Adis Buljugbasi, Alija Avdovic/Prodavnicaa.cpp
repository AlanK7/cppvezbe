#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#define MAX 100

using namespace std;
struct Proizvod
{
    char Naziv[MAX];
    float Cena;
};
const int brojProizvoda = 20;
Proizvod Proizvodi[brojProizvoda]{}; 
float UkupnaCena = 0;

void ispisKorpe(const int korpa[brojProizvoda]);
void ispisProdavnica();
bool kupiProizvod(int korpa[brojProizvoda]);

int main()
{
    int korpa[brojProizvoda]{}; 

    strcpy_s(Proizvodi[0].Naziv, "Jagode");
    Proizvodi[0].Cena = 250;

    strcpy_s(Proizvodi[1].Naziv, "Hleb");
    Proizvodi[1].Cena = 100;

    strcpy_s(Proizvodi[2].Naziv, "Mleko");
    Proizvodi[2].Cena = 10;

    strcpy_s(Proizvodi[3].Naziv, "Plazma");
    Proizvodi[3].Cena = 10;

    strcpy_s(Proizvodi[4].Naziv, "Sok");
    Proizvodi[4].Cena = 10;

    strcpy_s(Proizvodi[5].Naziv, "Cokolada");
    Proizvodi[5].Cena = 10;

    strcpy_s(Proizvodi[6].Naziv, "Surutka");
    Proizvodi[6].Cena = 10;

    strcpy_s(Proizvodi[7].Naziv, "Jogurt");
    Proizvodi[7].Cena = 10;

    strcpy_s(Proizvodi[8].Naziv, "Borovnica");
    Proizvodi[8].Cena = 10;

    strcpy_s(Proizvodi[9].Naziv, "Tastatura");
    Proizvodi[9].Cena = 10;

    strcpy_s(Proizvodi[10].Naziv, "Keks");
    Proizvodi[10].Cena = 10;

    strcpy_s(Proizvodi[11].Naziv, "Mis");
    Proizvodi[11].Cena = 10;

    strcpy_s(Proizvodi[12].Naziv, "HDD");
    Proizvodi[12].Cena = 10;

    strcpy_s(Proizvodi[13].Naziv, "CD");
    Proizvodi[13].Cena = 10;

    strcpy_s(Proizvodi[14].Naziv, "Punjac");
    Proizvodi[14].Cena = 10;

    strcpy_s(Proizvodi[15].Naziv, "Monitor");
    Proizvodi[15].Cena = 10;

    strcpy_s(Proizvodi[16].Naziv, "Sveska");
    Proizvodi[16].Cena = 10;

    strcpy_s(Proizvodi[17].Naziv, "Olovka");
    Proizvodi[17].Cena = 10;

    strcpy_s(Proizvodi[18].Naziv, "Brisac");
    Proizvodi[18].Cena = 10;

    strcpy_s(Proizvodi[19].Naziv, "Kokarice");
    Proizvodi[19].Cena = 10;


   
    bool kraj = false;
    


    cout << "\t***** Dobrodosli u prodavnicu *****\n";

   
    while (kraj == false) {

        ispisProdavnica();

        ispisKorpe(korpa);

        kraj = kupiProizvod(korpa);
        //  cout << "\n\n\n";
    }
    ispisKorpe(korpa);
    cout << "Ukupna cena je: " << UkupnaCena << endl;


    return 0;
}
void ispisKorpe(const int korpa[brojProizvoda])
{
    cout << "U vasoj korpi imate: \n";
   
    for (int i = 0; i < brojProizvoda; i++) {
        
        if (korpa[i] > 0) {
            cout << korpa[i] << " x " << Proizvodi[i].Naziv << "  " << Proizvodi[i].Cena * korpa[i] << endl;
        }
    }
    cout << endl;
}
void ispisProdavnica()
{
    cout << "U ponudi imamo: \n";
  
    for (int i = 0; i < brojProizvoda; i++) {
        cout << i + 1 << ". " << Proizvodi[i].Naziv << "  " << Proizvodi[i].Cena << endl;
    }

    cout << "\n********************\n\n";
}
bool kupiProizvod(int korpa[brojProizvoda])
{
    int unos = 0;
    cout << "Sta zelite kupiti? Unesite -1 da izadjete. Unesite (" << 1 << "-" << brojProizvoda << "):";
    cin >> unos;

    system("CLS");

    if (unos <= 20 && unos > 0)
    {
        
        korpa[unos - 1]++;
        UkupnaCena += Proizvodi[unos - 1].Cena;

        return false;
    }

    if (unos == -1) {
        return true; 

    }
    cout << "To je pogresan unos! \n";
    return false;

}