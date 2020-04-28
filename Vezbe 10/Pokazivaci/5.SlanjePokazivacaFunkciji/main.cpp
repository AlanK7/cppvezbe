#include <iostream>

using namespace std;

void Funkcija(int* _ptr);

int main()
{
    int x = 20;
    int* x_ptr = &x;

    cout << x << endl;
    Funkcija(x_ptr);
    cout << x << endl;

    return 0;
}

void Funkcija(int* _ptr)
{
    *_ptr = 100;
}
