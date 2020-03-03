#include <iostream>

using namespace std;

int main()
{
    int x,y;
    // unos prvog broja
    cout << "Unesite prvi broj: ";
    cin >> x;
    // unos drugog broja
    cout << "Unesite drugi broj: ";
    cin >> y;

    // racunanje zbira, razlike, proizvoda i kolicnika
    cout << "Zbir je: " << x+y << endl;
    cout << "Razlika je: " << x-y << endl;
    cout << "Proizvod je: " << x*y << endl;
    /* ako su oba delioca celobrojne vrednosti (int-ovi), program izvrsava celobrojno deljenje
    i daje nam broj bez ostatka, da bi resili ovaj problem, mozemo da deklarisemo jednu od promenjivih ili obe
    na pocetku programa kao float/double, ili da castujemo jednu od promenjivih u float/double
    program tada zna se radi o deljenju realnih brojeva i daje nam rezultat sa ostatkom*/

    /* cast-ovanje neke promenjive je u sustini menjanje njenog tipa
    npr.(double)x znaci da smo promenjivu x koja je bila int, castovali u double
    tako da ako je promenjiva bila celobrojna vrednost 5, sada je realna 5.0 */
    cout << "Kolicnik je: " << (double)x/y << endl;

    return 0;
}
