#include <iostream>

using namespace std;

//6. Kreira se niz od n clanova i unosi broj x. Treba ispisati indekse onih clanova niza koji su jednaki broju x

int main()
{
    int n,x;
    cout << "Unesite broj clanova niza : ";
    cin >> n;
    cout << "Unesite x : ";
    cin >> x;

    int nizA[n];

    for(int i=0; i < n; i++)
    {
        cin >> nizA[i];
    }

    for(int i=0; i < n; i++)
    {
        if(nizA[i] == x)
            cout << i << " ";
    }

    return 0;
}
