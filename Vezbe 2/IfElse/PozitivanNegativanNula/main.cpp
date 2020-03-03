#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Unesite broj : ";
    cin >> x;

    // ispitivanje da li je broj veci od nule (x > 0)
    // zatim ispitivanje da li je manji (x < 0)
    // u suprotnom, broj je nula
    if(x > 0)
        cout << "Broj " << x << " je pozitivan";
    else if(x < 0)
        cout << "Broj " << x << " je negativan";
    else
        cout << "Broj je nula";

    return 0;
}
