#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Unesite n: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        //ukoliko je brojac(i) deljiv sa 2, ispisujemo ga, u suporotnom nista
        if(i%2==0)
            cout << i << endl;
    }

    return 0;
}
