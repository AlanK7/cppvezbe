#include <iostream>

using namespace std;

int main()
{
    // deklaracija promenjivih a i b koje su tipa int (celobrojne vrednosti)
    int a,b;

    // za ispis na konzoli koristimo cout <<
    // za unos sa tastature koristino cin >> , unos smestamo u promenjivu a
    cout << "Unesite prvi broj: ";
    cin >> a;

    cout << "Unesite drugi broj: ";
    cin >> b;

    // ovo je moglo da se odradi i kao...
    /*
        cout << "Unesite brojeve a i b: ";
        cin >> a >> b;
    */

    // finalni ispis zbira dva broja
    // koristili smo operator << za spajanje stringova u jedan string koji ispisujemo
    cout << "Zbir brojeva " << a << " i " << b << " je : " << a + b;

    /* uvodjenje nove promenjive (int c) koja bi nam cuvala zbir c = a + b u ovom slucaju
    nije neophodno, zbog toga sto mi ovaj zbir ne koristimo vise nigde u programu (nije nam potreban),
    vec smo samo zeleli da ga ispisemo */

    return 0;
}
