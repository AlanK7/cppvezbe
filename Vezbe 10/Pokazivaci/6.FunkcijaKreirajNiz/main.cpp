#include <iostream>

using namespace std;

int* KreirajNiz(int n);

int main()
{
    int* niz = nullptr;
	int n;
	cout << "Unesite n : ";
	cin >> n;
	niz = KreirajNiz(n);

	for (int i = 0; i < n; i++)
	{
		cout << *(niz + i) << " ";
	}
    return 0;
}

int* KreirajNiz(int n)
{
	int* niz = new int[n];

	cout << "Unesite clanove niza: ";
	for (int i = 0; i < n; i++)
	{
		cin >> *(niz + i);
	}
	return niz;
}
