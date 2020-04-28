#include <iostream>

using namespace std;

int main()
{
    const int duzina = 4;
	int niz[duzina]{ 3,4,5,2 };
	int* ptr = &niz[0];

	// pristupanje clanovima niza preko pokazivaca
	cout << *ptr << endl;
	cout << *(ptr+1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;

	// ispisivanje vrednosti pokazivaca, tj. adresa na koje on pokazuje
	// sam pokazivac pokazuje na prvi element niza, ali dodavanjem +1, +2, +3, prolazimo kroz ostale elemente niza
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;

	// ispis niza preko for petlje uz pomoc pokazivaca
	for (int i = 0; i < duzina; i++)
		cout << *(ptr + i) << " ";

    return 0;
}
