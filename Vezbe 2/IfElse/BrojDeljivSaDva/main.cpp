#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Unesite broj : " ;
    cin >> x;

    // ispitujemo da li je broj deljiv sa dva koristeci mod operator (%)
    // mod operator (%) vraca ostatak pri deljenju
    // ukoliko je ostatak pri deljenju sa 2 jednak 0, a to ispitujemo sa operatorom jednakosti (==) onda je broj deljiv sa 2
    if(x%2==0)
        cout << x << " je deljivo sa dva" << endl;
    else
        cout << x << " nije deljivo sa dva" <<endl;
    // else se izvrsava u suprotnom, tj. ukoliko broj nije deljiv

    return 0;
}
