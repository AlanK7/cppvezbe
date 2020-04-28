#include <iostream>

using namespace std;

int main()
{
    int broj = 100;
	int* broj_ptr = &broj;

	cout << *broj_ptr << endl;
	*broj_ptr = 200;

	cout << broj << endl;
	cout << *broj_ptr << endl;
    return 0;
}
