#include <iostream>

using namespace std;

// 2.Ucitati matricu, zatim ispisati parne clanove iz treceg reda

int main()
{
     int matrica[3][3];

    for(int i=0; i < 3; i++)
        for(int j=0; j < 3; j++)
        {
            cout <<"mat[" << i << "][" << j<< "] = ";
            cin >> matrica[i][j];
        }

    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }

    // prolazimo kroz elemente samo po kolonama jer znamo da se radi o trecem redu
    // tako da je index 2 konstantan
    cout << "Parni clanovi iz treceg reda su : ";
    for(int j=0; j < 3; j++)
    {
        if(matrica[2][j]%2 == 0)
            cout << matrica[2][j] << " ";
    }
    return 0;
}
