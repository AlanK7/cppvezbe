#include <iostream>

using namespace std;

int main()
{
    // deklaracija i inicijalizacija brojaca
    int i=1;
    // while petlja se izvrsava sve dok je uslov ispunjen (i<=10)
    while(i<=10)
    {
        cout << i << endl;
        // uvecavamo brojac, bez ovog inkrementora, ova petlja bi bila beskonacna (infinite loop)
        i++; // isto sto i i+=1 i i=i+1
    }
    return 0;
}
