#include <iostream>

using namespace std;

class Pravougaonik
{
private:
    double a;
    double b;
public:
    // konstruktor
    Pravougaonik(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    //metode
    double Povrsina()
    {
        return a*b;
    }

    double Obim()
    {
        return a+b;
    }
};

int main()
{
    Pravougaonik p1 (4.2,5.4);
    Pravougaonik p2 (6.6,4.3);
    Pravougaonik p3 (7.7,5.1);

    cout << "Obim p1: " << p1.Obim() << endl << "Obim p2: " << p2.Obim() << endl << "Obim p3: " << p3.Obim() << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Povrsina p1: " << p1.Povrsina() << endl << "Povrsina p2: " << p2.Povrsina() << endl << "Povrsina p3: " << p3.Povrsina() << endl;

    return 0;
}
