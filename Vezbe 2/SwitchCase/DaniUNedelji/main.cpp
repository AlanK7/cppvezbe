#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Unesite redni broj dana u nedelji: ";
    cin >> x;

    // switch prima parametar x, i na osnovu njega izvrsava odredjeni deo koda koji je vezan za slucaj kada je taj parametar unet
    /* break nam sluzi da bi program odmah izasao nakon izvrsenog koda za neki slucaj iz bloka, i da ne bi izvrsio i kod ispod
       koji pripada nekom drugom slucaju */
    /* default slucaj se izvrsava u slucaju da unesto x nije nijedan od slucajeva koje smo definisali kodom
       tu nam ne treba break, jer je default slucaj na poslednjem mestu i nakon njega svakako sledi izlaz iz blocka (tj. iz switch-a)*/
    switch(x)
    {
        case 1:
            cout << "Ponedeljeak";
            break;
        case 2:
            cout << "Utorak";
            break;
        case 3:
            cout << "Sreda";
            break;
        case 4:
            cout << "Cetvrtak";
            break;
        case 5:
            cout << "Petak";
            break;
        case 6:
            cout << "Subota";
            break;
        case 7:
            cout << "Nedelja";
            break;
        default:
            cout << "Niste uneli validan broj dana u nedelji";
    }
    return 0;
}
