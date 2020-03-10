#include <iostream>

using namespace std;

int main()
{

    // int i=1  <-- incijalizacija, (i) je brojac kojeg smo postavili da krece od broja 1
    // i<=10 <-- iskaz koji se ispituje svakim prolazom kroz petlju (da li je i manje ili jednako 10)
    // i++  <-- inkrementacija brojaca, postavili smo da se svakim prolazom kroz petlju brojac uvecava za 1 (i++)
    // i++ je isto sto i i+=1, i isto sto i i = i + 1
    for(int i=1; i<=10; i++)
        cout << i << endl;

    return 0;
}
