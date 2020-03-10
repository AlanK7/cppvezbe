#include <iostream>

using namespace std;

int main()
{
    // deklaracija i inicijalizacija brojaca
    int n,i=1;
    cout << "Unesite n: ";
    cin >> n;

    // slican primer ko i prosli, samo sto n unosimo sa tastaure
    // while petlja se izvrsava sve dok je uslov ispunjen (i<=n)
    while(i<=n)
    {
        cout << i << endl;
        i++; // isto sto i i+=1 i i=i+1
    }
    return 0;
}
