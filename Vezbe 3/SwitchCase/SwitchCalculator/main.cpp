#include <iostream>

using namespace std;

int main()
{
    int broj1,broj2;
    char operand;

    cout << "Unesite prvi broj: ";
    cin >> broj1;
    cout << "Unesite drugi broj: ";
    cin >> broj2;
    cout << "Unesite operand: ";
    cin >> operand;

    // na osnovu unetog operanda (char), izvrsava se slucaj koji je vezan za njega
    switch(operand)
    {
        case '+':
            cout << "Zbir je: " << broj1 + broj2;
            break;
        case '-':
            cout << "Razlika je: " << broj1 - broj2;
            break;
        case '*':
            cout << "Proizvod je: " << broj1 * broj2;
            break;
        case '/':
            cout << "Kolicnik je: " << broj1 / broj2;
            break;
        default:
            cout << "Niste uneli odgovarajuci operand";
    }

    return 0;
}
