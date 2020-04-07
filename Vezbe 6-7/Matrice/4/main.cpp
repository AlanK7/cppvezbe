#include <iostream>

using namespace std;

// 4.Izracunati i ispisati sumu elemenata matrice koji nisu deljivi sa 3

int main()
{
    int matrica[2][2];
    int suma = 0;

    for(int i=0; i < 2; i++)
        for(int j=0; j < 2; j++)
        {
            cout <<"mat[" << i << "][" << j<< "] = ";
            cin >> matrica[i][j];
        }

    for(int i=0; i < 2; i++)
    {
        for(int j=0; j < 2; j++)
        {
            cout << matrica[i][j] << " ";
            if(matrica[i][j]%3 != 0)
                suma += matrica[i][j];
        }
        cout << endl;
    }

    cout << "Suma elemenata matrice koji nisu deljivi sa 3 je : " << suma;

    return 0;
}
