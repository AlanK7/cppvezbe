#include <iostream>

using namespace std;

int main()
{
    int broj1, broj2, broj3;

    cout << "Broj 1 : ";
    cin >> broj1;
    cout << "Broj 2 : ";
    cin >> broj2;
    cout << "Broj 3 : ";
    cin >> broj3;

    // u prvom if-u ispitujemo da li je broj jedan najveci, i unutar njega uporedjujemo drugi i treci broj
    // nakon cega znamo raspored po kome cemo ispisati brojeve u slucaju da je prvi broj najveci
    // u naredna dva blocka ispitujemo iste stvari i u slucaju kad je drugi broj najveci, i kad je treci broj najveci
    // na ovaj nacin smo pokrili sve moguce slucaje

    if(broj1 >= broj2 && broj1 >= broj3)
    {
        if(broj2 >= broj3)
            cout << broj1 << " " << broj2 << " " << broj3;
        else
            cout << broj1 << " " << broj3 << " " << broj2;
    }
    else if(broj2 >= broj1 && broj2 >= broj3)
    {
        if(broj1 >= broj3)
            cout << broj2 << " " << broj1 << " " << broj3;
        else
            cout << broj2 << " " << broj3 << " " << broj1;
    }
    else
    {
        if(broj2 >= broj1)
            cout << broj3 << " " << broj2 << " " << broj1;
        else
            cout << broj3 << " " << broj1 << " " << broj2;
    }

    return 0;
}
