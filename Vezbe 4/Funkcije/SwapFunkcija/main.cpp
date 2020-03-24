#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = -4;

    cout << "x je " << x << " , " << "y je " << y << endl;

    // swap je funkcija koja menja mesta vrednostima ove dve promenjive
    swap(x,y);

    cout << "x je " << x << " , " << "y je " << y;

    return 0;
}
