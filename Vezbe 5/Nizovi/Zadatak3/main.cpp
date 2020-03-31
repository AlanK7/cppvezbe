#include <iostream>

// 3. Program kojim se racuna aritmeticka sredina niza od n clanova

using namespace std;

int main()
{
    int n, suma = 0;

    cout << "Unesite n: ";
    cin >> n;

    int niz[n];

    for(int i=0; i < n; i++)
    {
        cout << "Unesite " << i+1 << ". element niza : ";
        cin >> niz[i];
        suma += niz[i];
    }

    cout << "Aritmeticka sredina niza je : " << (double)suma/n;

    return 0;
}
