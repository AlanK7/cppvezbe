#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Unesite n: ";
    cin >> n;

    // ista stvar kao i u proslom primeru, ali ispisujemo prvih n brojeva
    // tj. ispitujemo da li je i vece ili jednako od n
    for(int i=1;i<=n;i++)
        cout << i << endl;

    return 0;
}
