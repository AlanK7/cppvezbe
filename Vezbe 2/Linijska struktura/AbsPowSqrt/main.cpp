#include <iostream>
/* uvodimo novu pretprocesorsku direktivu cmath koja nam je neophodna
da bi u ovom primeru koristili njene metode za apsolutnu vrednost broja,
stepenovanje i korenovanje*/
#include <cmath>

using namespace std;

int main()
{
    int x = 4;
    int y = -2;

    // pozivamo abs metodu koja vraca apsolutnu vrednost i saljemo joj y kao parametar
    cout << " Apsolutna vrednost broja " << y << " je : " << abs(y) << endl;

    /* pow metoda ima dva ulazna parametra, prvi je broj koji zelimo da stepenujemo,
    a drugi parametar je na koji stepen zelimo da stepenujemo broj */
    cout << " Treci stepen broja " << x << " je : " << pow(x,3) << endl;

    cout << " Koren broja " << x << " je : " << sqrt(x) << endl;

    // racunanje izraza (x^2 + y^2)^2 uz pomoc pow metode
    cout <<" (x^2 + y^2)^2 = " << pow((pow(x,2) + pow(y,2)), 2) << endl;

    return 0;
}
