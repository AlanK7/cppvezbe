#include <iostream>

// 1. Ucitati i ispisati matricu 2x3

using namespace std;

int main()
{
    int matrica[2][3];

    // unos matrice
    for(int i=0; i < 2; i++)
        for(int j=0; j < 3; j++)
        {
            cout <<"mat[" << i << "][" << j<< "] = ";
            cin >> matrica[i][j];
        }

    // ispis matrice
    for(int i=0; i < 2; i++)
    {
        for(int j=0; j < 3; j++)
        {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
}
