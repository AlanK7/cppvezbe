#include <iostream>

using namespace std;

// 3. Ispisati elemente koji su na glavnoj dijagonali

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


    cout << "Elementi glavne dijagonale su : ";
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            if(i==j)
                cout << matrica[i][j] << " ";
        }
    }

    return 0;
}
