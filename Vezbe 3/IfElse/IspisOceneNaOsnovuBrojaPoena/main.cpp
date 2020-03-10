#include <iostream>

using namespace std;

int main()
{
    int brojPoena;

    cout << "Unesite broj poena : ( 0 - 100 ) : ";
    cin >> brojPoena;

    // prvo proveravamo da li je korisnik uneo broj izmedju 0 i 100
    // ukoliko jeste, ulazimo u if block, ukoliko nije, ispisujemo poruku
    if(brojPoena <= 100 && brojPoena >= 0)
    {
        // redom proveravamo pocevsi od najvise ocene (tj.broja poena koji je neophodan) i ispitujemo da li je broj poena veci
        // ukoliko jeste, onda je to ta ocena, ukoliko nije, nastavljamo dalje sa ispitivanjem sve dok uslov ne bude tacan
        // u krajnjem slucaju, ako broj nije veci od 50, ispisuje se poruka "Nazalost, niste polozili"
        if(brojPoena > 90)
            cout << "Ocena je 10.";
        else if(brojPoena > 80)
            cout << "Ocena je 9.";
        else if(brojPoena > 70)
            cout << "Ocena je 8.";
        else if(brojPoena > 60)
            cout << "Ocena je 7.";
        else if(brojPoena > 50)
            cout << "Ocena je 6.";
        else
            cout << "Nazalost, niste polozili.";
    }
    else
        cout << "Niste uneli broj izmedju 0 i 100. ";

    return 0;
}
