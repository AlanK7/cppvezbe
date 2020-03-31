#include <iostream>

using namespace std;

//5. U unetom nizu celih brojeva, treba naci broj parnih i broj neparnih elemenata niza

int main()
{
    int nizA[5]{3,4,5,3,2};
    int brojParnih = 0;
    int brojNeparnih = 0;

    for(int i=0; i < 5; i++)
    {
        if(nizA[i]%2 == 0)
            brojParnih++;
        else
            brojNeparnih++;
    }

    cout << "Broj parnih elemenata niza je : " << brojParnih << endl;
    cout << "Broj neparnih elemenata niza je: " << brojNeparnih << endl;

    return 0;
}
