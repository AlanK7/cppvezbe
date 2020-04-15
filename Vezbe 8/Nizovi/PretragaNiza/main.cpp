#include <iostream>

using namespace std;

bool Pretraga(int niz[], int n, int broj);

int main()
{
    int niz[]{2,3,4,5,6,9,1,0,2,2};
    int n = 10;
    int broj;

    cout << "Broj elemata niza je : " << endl;
    cout << "Elementi niza su : ";
    for(int i=0; i<n; i++)
    {
        cout << niz[i] << " ";
    }
    cout << "\nTrazena vrednost : ";
    cin >> broj;

    if(Pretraga(niz,n,broj))
        cout << "Vrednost postoji u nizu";
    else
        cout << "Broj nije pronadjen";

    return 0;
}

bool Pretraga(int niz[], int n, int broj)
{
    bool nadjen = false;
    for(int i=0; i < n; i++)
    {
        if(broj == niz[i])
            nadjen = true;
    }
    return nadjen;
}
