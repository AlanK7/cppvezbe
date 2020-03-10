#include <iostream>

using namespace std;

int main()
{
    int broj;

    // razlika izmedju while i do-while petlje je ta sto ce do-while petlja da se izvrsi jednom bez obzira na sve
    // jer se prvi put izvrsi, pa onda pita da li je uslov ispunjen, dok while petlja uopste ne ulazi u block ukoliko uslov nije ispunjen

    do
    {
        // kod u ovom bloku se prvi put sigurno izvrsava
        cout << "Unesite paran broj: ";
        cin >> broj;
        // ispitujemo da li je ostatak pri deljenju sa 2 razlicit od nule
        // tj. ukoliko je broj neparan, nastavljamo sa ponavljanjem ovog bloka
        // ukoliko je paran, izlazimo iz bloka
    } while(broj%2!=0);

    return 0;
}
