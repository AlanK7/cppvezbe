#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Unesite redni broj meseca u godini: ";
    cin >> x;

    // switch prima parametar x, i na osnovu njega izvrsava odredjeni deo koda koji je vezan za slucaj kada je taj parametar unet
    /* break nam sluzi da bi program odmah izasao nakon izvrsenog koda za neki slucaj iz bloka, i da ne bi izvrsio i kod ispod
       koji pripada nekom drugom slucaju */
    /* default slucaj se izvrsava u slucaju da unesto x nije nijedan od slucajeva koje smo definisali kodom
       tu nam ne treba break, jer je default slucaj na poslednjem mestu i nakon njega svakako sledi izlaz iz blocka (tj. iz switch-a)*/
    switch(x)
    {
        case 1:
            cout << "Januar";
            break;
        case 2:
            cout << "Februar";
            break;
        case 3:
            cout << "Mart";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "Maj";
            break;
        case 6:
            cout << "Jun";
            break;
        case 7:
            cout << "Jul";
            break;
        case 8:
            cout << "Avgust";
            break;
        case 9:
            cout << "Septembar";
            break;
        case 10:
            cout << "Oktobar";
            break;
        case 11:
            cout << "Novembar";
            break;
        case 12:
            cout << "Decembar";
            break;
        default:
            cout << "Niste uneli validan broj meseca u godini";
    }
    return 0;
}
