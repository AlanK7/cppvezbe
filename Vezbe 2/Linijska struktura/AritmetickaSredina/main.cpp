#include <iostream>

using namespace std;

int main()
{
    // umesto cast-ovanja koje radimo ispod u programu
    // mogli smo da stavimo double x, double y ili oba
    int x,y;

    cout << "Unesite prvi broj: ";
    cin >> x;

    cout << "Unesite drugi broj: ";
    cin >> y;

    /* castovanje, isto kao i u proslom primeru, zbir brojeva (x+y), smo pretvorili u
    celobrojnu vrednost kako bi nam program vratio tacnu vrednost */
    cout << "Aritmeticka sredina brojeva je : " << (double)(x+y)/2;

    return 0;
}
