#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

// 3. Napisati program kojim se unosi neki string i ispisuje se njegova duzina

int main()
{
    char NekiString[30];

    cout << "Unesite neki string : ";
    cin.getline(NekiString, 30);

    // metoda strlen vraca duzinu stringa, odnosno broj karaktera
    cout << "Duzina ovog stringa je : " << strlen(NekiString);

    return 0;
}
