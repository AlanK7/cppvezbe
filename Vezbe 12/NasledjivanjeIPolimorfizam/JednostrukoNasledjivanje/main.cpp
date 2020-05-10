#include <iostream>
#include <string>

using namespace std;

// klasa nastavnik
class Nastavnik
{
//protected znaci da ovim atributima mogu da pristupe i klase koje nasledjuju ovu klasu
protected:
    int id;
public:
    Nastavnik(int a)
    {
        id = a;
    }
    void Prikazi();
};

void Nastavnik::Prikazi()
{
    cout << "Nastavnik ima redni broj " << id << " " << endl;
}

//klasa profesor koja nasledjuje klasu nastavnik
class Profesor : public Nastavnik
{
public:
    string oblast;

public:
    Profesor(int a, string o) : Nastavnik(a)
    {
        oblast = o;
    }
    void Prikazi()
    {
        cout << "Profesor ima redni broj " << id << ", iz oblasti je " << oblast << endl;
    }
};


int main()
{
    Nastavnik nast(10);
    Profesor prof(12,"matematika");

    nast.Prikazi();
    prof.Prikazi();

    return 0;
}
