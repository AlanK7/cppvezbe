#include <iostream>

using namespace std;

// 1. Napisati program kojim se unosi niz od n elemenata

int main()
{
    int n;
    cout << "Unesite broj elemenata niza : ";
    cin >> n;

    int niz[n];

    for(int i=0; i<n; i++)
        cin>> niz[i];

    for (int i=0; i<n; i++)
        cout << niz[i] << endl;

    return 0;
}
