#include <iostream>

// 2. Napisati program kojim se formira niz od n clanova. Izracunati zbir elemenata niza

using namespace std;

int main()
{
    int n, suma = 0;
    cout << "Unesite n: ";
    cin >> n;
    int niz[n];

    for(int i=0; i < n; i++)
    {
        cin >> niz[i];
        suma += niz[i];
    }

    cout << "Suma je : " << suma;

    return 0;
}
