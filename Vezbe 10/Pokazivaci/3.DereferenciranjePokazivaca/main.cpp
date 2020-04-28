#include <iostream>
#include <string>

using namespace std;

int main()
{
    // prvi primer dereferenciranja

    string ime = "Aladin";
    string* ime_ptr = &ime;

    cout << *ime_ptr << endl;
    // promena promenjive ime
    ime = "Adis";
    // menja se i ispis preko pokazivaca, jer on pokazuje na adresu te promenjive, ne interesuje ga vrednost
    cout << *ime_ptr << endl;

    // drugi primer dereferenciranja
    double x = 50.6;
	double y = 32.4;

    // pravimo novi pokazivac i kazemo mu da pokazuje na promenjivu x, tj cuva njenu adresu
	double* d_ptr = &x;
	cout << *d_ptr << endl;

	// kazemo pokazivacu da pokazuje na drugu adresu, tj. na adresu promenjive y
	d_ptr = &y;
	cout << *d_ptr << endl;

    return 0;
}
