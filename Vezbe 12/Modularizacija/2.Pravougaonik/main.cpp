#include <iostream>
#include "Pravougaonik.h"

using namespace std;

int main()
{
    Pravougaonik p1(5.4,3.2);
    Pravougaonik p2(4.2,3.1);
    Pravougaonik p3(1.2,6.5);

    cout << "Povrsina p1: " << p1.Povrsina() << endl << "Obim p1: " << p1.Obim() << endl << endl;
    cout << "Povrsina p2: " << p2.Povrsina() << endl << "Obim p2: " << p2.Obim() << endl << endl;
    cout << "Povrsina p3: " << p3.Povrsina() << endl << "Obim p3: " << p3.Obim() << endl << endl;


    return 0;
}
