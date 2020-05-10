#include <iostream>
#include <string>

using namespace std;

class Nastavnik
{
protected:
    int id;
};

class Student
{
protected:
    string fakultet;
};

class Asistent : public Nastavnik, public Student
{
private:
    string oblast;
public:
    Asistent(int id, string fakultet, string oblast);
    void Ispis();
};

Asistent::Asistent(int id, string fakultet, string oblast)
{
    this->id = id;
    this->fakultet = fakultet;
    this->oblast = oblast;
}

void Asistent::Ispis()
{
    cout << "Asistent ima redni broj " << id << " studira na " << fakultet << " iz oblasti " << oblast << endl;
}

int main()
{
    Asistent a(10, "Prirodno-matematicki fakultet","Programiranje");
    a.Ispis();
    return 0;
}
