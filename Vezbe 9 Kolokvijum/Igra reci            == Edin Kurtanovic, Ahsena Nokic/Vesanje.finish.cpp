// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Kurtanovic Edin, Ahsena Nokic

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int Pokusaji{ 6 };
	string Pokusaj;
	bool tacanPokusaj = true;
	int nasumicniBroj;
	string nasumicnaRec;

	string listaReci[9]{ "drvo","planeta","kompjuter","stolica","vrata","kuhinja","algoritam","televizor","programer" };
	srand(time(0));

	nasumicniBroj = rand() % 9;
	nasumicnaRec = listaReci[nasumicniBroj];

	string tajnaRec(nasumicnaRec.length(), '*');

	while (Pokusaji >= 0)
	{
		tacanPokusaj = false;

		cout << "Rec koju morate da pogodite je: " << tajnaRec << endl;
		cout << "Tajna rec sadrzi:  " << tajnaRec.length() << " slova" << endl;
		cout << "Imate jos: " << Pokusaji <<" pokusaja!" <<endl;
		cout << "Pogadjajte slovo: ";
		cin >> Pokusaj;

		if (Pokusaj.length() == 1)
		{
			for (int i = 0; i < tajnaRec.length(); i++)
			{
				if (nasumicnaRec[i] == Pokusaj[0])
				{
					tajnaRec[i] = Pokusaj[0];
					cout << Pokusaj << " je jedno od slova!" << endl;
					tacanPokusaj = true;
				}
			}
		}
		else
		{
			if (nasumicnaRec == tajnaRec)
			{
				cout << "Cestitam!Pogodili ste rec: " << tajnaRec << endl;
				break;
			}
		}
		if (Pokusaj == tajnaRec)
		{
			cout << "Cestitam!Pogodili ste rec" << tajnaRec << endl;
			break;
		}

		if (tacanPokusaj == false)
		{
			Pokusaji--;
			cout << Pokusaj << " se ne nalazi u reci!" << endl;
		}


		switch (Pokusaji)
		{
		case 6:
		{

			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			break;
		}
		case 5:
		{
			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |        0      " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			break;
		}
		case 4:
		{
			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |        0      " << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			break;
		}
		case 3:
		{
			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |        0      " << endl;
			cout << " |       /|      " << endl;
			cout << " |        |      " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			break;
		}
		case 2:
		{
			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |        0      " << endl;
			cout << " |       /|\\    " << endl;
			cout << " |        |      " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			break;
		}
		case 1:
		{
			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |        0      " << endl;
			cout << " |       /|\\    " << endl;
			cout << " |        |      " << endl;
			cout << " |       /       " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			break;
		}
		case 0:
		{
			cout << "_________________" << endl;
			cout << " |        |      " << endl;
			cout << " |        |      " << endl;
			cout << " |        0      " << endl;
			cout << " |       /|\\    " << endl;
			cout << " |        |      " << endl;
			cout << " |       / \\    " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << " |               " << endl;
			cout << "Niste pogodili rec,igra je zavrsena !Rec je bila: " << nasumicnaRec << endl;
			return 0;
		}
		default:
			cout << "Doslo je do greske,pokrenite igricu ponovo" << endl;
		}
	}
	return 0;
}
