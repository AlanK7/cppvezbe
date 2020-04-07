#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

// 4. ispisuje se da li su reci iste ili razlicite

int main()
{
    char PrvaRec[20];
    char DrugaRec[20];

    cout << "Unesite prvu rec : ";
    cin >> PrvaRec;

    cout << "Unesite drugu rec : ";
    cin >> DrugaRec;

    // strcmp (compare) uporedjuje dva stringa, tj. dve reci i vraca nulu ukoliko su reci iste
    if(strcmp(PrvaRec,DrugaRec) == 0)
        cout << "Reci su iste";
    else
        cout << "Reci su razlicite";

    return 0;
}
