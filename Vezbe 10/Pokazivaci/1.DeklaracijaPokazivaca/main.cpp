#include <iostream>

using namespace std;

int main()
{
    int broj = 10;

	cout << "Vrednost promenjive broj : " << broj << endl;
	cout << "Velicina koju promenjiva zauzima u memoriji: " << sizeof(broj) << endl;
	cout << "Adresa promenjive broj: " << &broj << endl;

	// pokazivac koji pokazuje na adresu promenjive broj
	int* ptr = &broj;

	// ptr = nullptr; <-- pokazivac koji ne pokazuje ni na sta
	cout << "Vrednost promenjive ptr : " << ptr << endl;
	cout << "Velicina koju promenjiva zauzima u memoriji: " << sizeof(ptr) << endl;
	cout << "Adresa promenjive ptr: " << &ptr << endl;

	return 0;
}
