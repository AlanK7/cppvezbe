#include <iostream>

using namespace std;

int main()
{
    int suma = 0, n;
    cout << "Unesite n : ";
    cin >> n;

    for(int i=1; i<=n; i++)
        // isto sto i suma += i;
        suma = suma + i;

    cout << "Suma prvih n brojeva je : " << suma;

    return 0;
}
