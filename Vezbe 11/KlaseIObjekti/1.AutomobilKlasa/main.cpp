#include <iostream>
#include <string>

using namespace std;

class Automobil
{
public:
    string Brend;
    string Model;
    string Boja;
};

int main()
{
    Automobil a1,a2,a3;

    a1.Brend = "Ford";
    a1.Model = "Mustang";
    a1.Boja = "Crvena";

    a2.Brend = "Toyota";
    a2.Model = "Prius";
    a2.Boja = "Plava";

    a3.Brend = "VW";
    a3.Model = "Golf";
    a3.Boja = "Zelena";

    cout << "a1.Brend = " << a1.Brend << endl;
    cout << "a1.Model = " << a1.Model << endl;
    cout << "a1.Boja = " << a1.Boja << endl;
    cout << "--------------------------------" <<endl;
    cout << "a2.Brend = " << a2.Brend << endl;
    cout << "a2.Model = " << a2.Model << endl;
    cout << "a2.Boja = " << a2.Boja << endl;
    cout << "--------------------------------" <<endl;
    cout << "a3.Brend = " << a3.Brend << endl;
    cout << "a3.Model = " << a3.Model << endl;
    cout << "a3.Boja = " << a3.Boja << endl;
}
