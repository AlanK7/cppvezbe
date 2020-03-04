#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,z;
    int xy,xz,yz; // razlika izmedju x i y, x i z, i y i z

    cout << "Unesite prvi broj : ";
    cin >> x;

    cout << "Unesite drugi broj : ";
    cin >> y;

    cout << "Unesite treci broj : ";
    cin >> z;

    xy = abs(x - y); // razlika izmedju x i y
    xz = abs(x - z); // razlika izmedju x i z
    yz = abs(y - z); // razlika izmedju y i z

    /* uzimamo samo apsolutne vrednosti iz razloga sto ne znamo koji ce broj biti veci
    a negativna razlika nam nista ne znaci u nastavku kad budemo vrsili ispitivanja
    jer ako su brojevi 1 i 10, razlika izmedju ova dva broja je ustvari 9, a ne -9 */

    // ispitujemo da l' je prva razlika manja ili jednaka od druge i od trece
    // ukoliko su oba uslova tacna, onda je to najmanja razlika
    // ispod radimo isto i za razliku izmedju x i z
    // ukoliko nijedan od ova dva uslova ne prodje, najmanja razlika je izmedju brojeva y i z
    if(xy <= xz && xy <= yz)
        cout << "Najmanja razlika je izmedju brojeva " << x << " i " << y << " i to : " << xy;
    else if (xz <= xy && xz <= yz)
        cout << "Najmanja razlika je izmedju brojeva " << x << " i " << z << " i to : " << xz;
    else
        cout << "Najmanja razlika je izmedju brojeva " << y << " i " << z << " i to : " << yz;

    return 0;
}
