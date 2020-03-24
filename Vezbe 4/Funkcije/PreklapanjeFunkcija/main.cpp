#include <iostream>

using namespace std;

// preklapanje funkcija ( function overloading )
// funkcije imaju isti naziv i isti povratni tip (double)
// ali ih program razlikuje po broju ulaznih parametara ili po povratnom tipu
double Zbir(double a, double b);
double Zbir(double a, double b, double c);
void Zbir();

int main()
{
    double a = 2.5;
    double b = 3.4;
    double c = 4.3;

    // u zavisnosti od broja argumenata koje saljemo, program zna koja funkcija treba da se izvrsi
    cout << "Zbir je : " << Zbir(a,b) << endl;
    cout << "Zbir je : " << Zbir(a,b,c) << endl;
    Zbir();
    return 0;
}

double Zbir(double a, double b)
{
    return a+b;
}

double Zbir(double a, double b, double c)
{
    return a+b+c;
}

void Zbir()
{
    cout << "Zbir..." << endl;
}

