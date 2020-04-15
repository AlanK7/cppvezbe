#include <iostream>
#define MAX 100

using namespace std;

bool Pretraga(int niz[], int n, int broj);

int main()
{
    int niz[MAX]{2,3,4,5,6,9,1,0,2,2};
    int broj;

    cout << "Broj elemata niza je : " << endl;
    for(int i=0; i<10; i++)
    {
        cout << niz[i] << " ";
    }
    cout << "\nTrazena vrednost : ";
    cin >> broj;

    if(Pretraga(niz,10,broj))
        cout << "Vrednost postoji u nizu";
    else
        cout << "Broj nije pronadjen";

    return 0;
}

bool Pretraga(int niz[], int n, int broj)
{
    bool pronadjen = false;
    for(int i=0; i < n; i++)
    {
        if(broj == niz[i])
            pronadjen = true;
    }
    return pronadjen;
}
