#include <iostream>
#define MAX 100

// 1. Sastaviti program koji sadrzi funkciju za ispisivanje niza, zatim ispisati 3 niza uz pomoc date funkcije.

using namespace std;

void ispisNiza(int niz[], int n);

int main()
{
    int niz1[MAX]{4,5,4,3,2,2};
    int niz2[MAX]{1,1,2,9,9,6};
    int niz3[MAX]{5,5,3,8,7,1};

    ispisNiza(niz1, 6);
    ispisNiza(niz2, 6);
    ispisNiza(niz3, 6);

    return 0;
}

// funkcija za ispis niza
void ispisNiza(int niz[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << niz[i] << " ";
    }
    cout << endl;
}
