#include <iostream>
using namespace std;

int main()
{
    // ukoliko vam ne radi nullptr
    // morate da udjete u Settings -> Compiler
    // ispod toga imate compiler settings i compiler flags
    // izaberite "Have g++ follow the C++11 ISO C++  language standard [-std=c++11]"
    // to je zbog toga sto nullptr postoji od verzije C++11, pa morate da podesite to u CodeBlocks-u

    int* int_ptr = nullptr;

    // alokacija memorije za promenjivu tipa int
	int_ptr = new int;

	*int_ptr = 100;
	cout << *int_ptr << endl;
	// oslobadanje memorije koju smo zauzeli uz pomoc pokazivaca int_ptr
	// ovo radimo ukoliko nam vise nije potrebna, tj. ti podaci koju smo imali na njoj
	// na ovaj nacin cemo moci da alociramo tu memoriju za neku drugu stvar koja nam bude trebala
	// po pravilu sve sto ima svoj NEW u c++, negde kasnije u programu treba da ima svoj DELETE kada nam nije potreban taj prostor za tu promenjivu
	delete int_ptr;

	int n;
	double* double_ptr = nullptr;
	cout << "Unesite n : ";
	cin >> n;

	double_ptr = new double[n];
	cout << double_ptr << endl;

	// da smo ovde npr rekli
	// double_ptr = nullptr; tj. da taj pokazivac ne pokazuje ni na sta
	// zauvek bi smo izgubili taj memorijski prostor i vrednosti koje su se nalazili za njemu jer nebismo imali nacin da pristupimo tom prostoru
	// jer je jedini nacin bio preko pokazivaca koji je pokazivao na tu adresu
	// desio bi se MEMORY LEAK, to je jedan od najcescih problema (gresaka) pri radu sa pokazivacima u C++
	// tako da bi se memorija koju smo alocirali trajno izgubila i ne bismo mogli da je koristimo dalje u programu
	delete[] double_ptr;

    return 0;
}
