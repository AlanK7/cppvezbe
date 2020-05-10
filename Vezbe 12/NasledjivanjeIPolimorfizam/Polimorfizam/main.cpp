#include <iostream>

using namespace std;

class Asistent
{
public:
    virtual void Stampa(string fakultet)
    {
        cout << "Asistent je na fakultetu " << fakultet << endl;
    }
};

class Nastavnik : public Asistent
{
public:
    void Stampa(string oblast)
    {
        cout << "Nastavnik je iz oblasti " << oblast << endl;
    }
};

class Student : public Asistent
{
public:
    void Stampa(string studije)
    {
        cout << "Student je na doktorskim studijama na " << studije << endl;
     }
};

int main()
{
    Asistent ast;
    Nastavnik nast;
    Student stud;

    ast.Stampa("UniNP");
    nast.Stampa("Programiranje");
    stud.Stampa("Prirodno-matematicki fakultet");

    return 0;
}
