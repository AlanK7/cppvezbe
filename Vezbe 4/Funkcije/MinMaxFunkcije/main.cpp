#include <iostream>

using namespace std;

int main()
{
    int x = 3;
    int y = 6;

    // min funkcija vraca manji broj od dva
    cout << "Manji broj od dva broja : " << min(x,y) << endl;
    // max funkcija vraca veci broj od dva
    cout << "Veci broj od dva broja : " << max (x,y) << endl;

    int z = -4;
    int w = 9;

    // prvo se izvrsava min(x,y)==> to je min(3,6) = 3, pa onda min(z,w)==> to je min(-4,9) = -4
    // pa onda min koje je van zagrade, i bude min(3,-4) = -4
    // isti redosled izvrsavanja je i sa funkcijom max, prvo se izvrsavaju unutrasnje funkcije, pa tek one van
    cout << "Najmanji broj od cetiri broja : " << min(min(x,y),min(z,w)) << endl;
    cout << "Najveci broj od cetiri broja : " << max(max(x,y),max(z,w)) << endl;


    return 0;
}
