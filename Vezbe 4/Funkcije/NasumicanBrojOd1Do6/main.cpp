#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    // srand (seed) je funkcija, od vrednosti koju joj prosledimo zavisi koji algoritam ce racunar izvrsiti kada pozovemo funkciju rand() ispod
    // time(0) je funkcija koja vraca broj sekundi od 1970.godine do sad, i menja se svake sekunde, tako da nikada nece biti isti
    // na ovaj nacin cemo dobiti nasumican broj metodom rand() ispod, jer se time(0) svake sekunde menja
    srand(time(0));

    // deset nasumicnih brojeva od 1 do 6
    for(int i=0; i<10; i++)
    {
        // rand() generise nasumican int, a nama je potreban broj od 1 do 6
        // to postizemo tako sto dodajemo 1 na ostatak pri deljenju tog broja sa 6 (koji moze biti 0,1,2,3,4,5)
        cout << 1 + (rand()%6) << endl;
    }

    return 0;
}
