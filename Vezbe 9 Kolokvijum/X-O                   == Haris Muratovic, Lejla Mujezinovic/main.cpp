#include <iostream>
#include<cstdlib>

using namespace std;

char matrica[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

char znak = 'X';

int n;

void ispis_matrice()
{
    system("cls");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrica[i][j] << " ";
		}
		cout << endl;
	}
}

void pocetak()
{
	int a;
	cout << znak << " je na potezu, odaberite polje za ispis: ";
	cin >> a;

	if (a == 1)
	{
		if (matrica[0][0] == '1')
			matrica[0][0] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 2)
	{
		if (matrica[0][1] == '2')
			matrica[0][1] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 3)
	{
		if (matrica[0][2] == '3')
			matrica[0][2] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 4)
	{
		if (matrica[1][0] == '4')
			matrica[1][0] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 5)
	{
		if (matrica[1][1] == '5')
			matrica[1][1] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 6)
	{
		if (matrica[1][2] == '6')
			matrica[1][2] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 7)
	{
		if (matrica[2][0] == '7')
			matrica[2][0] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 8)
	{
		if (matrica[2][1] == '8')
			matrica[2][1] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if (a == 9)
	{
		if (matrica[2][2] == '9')
			matrica[2][2] = znak;
		else
		{
			cout << "ovo polje je iskorisceno, probajte opet!" << endl;
			pocetak();
		}
	}
	else if(a<1 || a>9)
    {
        cout<<"opcija koju ste uneli nema polje u matrici, probajte opet:"<<endl;
        pocetak();
    }

}

//U OVOJ FUNKCIJI SE MENJAJA KO JE SKEDECI NA POTEZU X ILI O.
void promena()
{
	if (znak == 'X')
		znak = 'O';
	else
		znak = 'X';
}

char pobednik()
{
	//prvi igrac tj igrac X.
	if (matrica[0][0] == 'X' && matrica[0][1] == 'X' && matrica[0][2] == 'X')
		return 'X';
	if (matrica[1][0] == 'X' && matrica[1][1] == 'X' && matrica[1][2] == 'X')
		return 'X';
	if (matrica[2][0] == 'X' && matrica[2][1] == 'X' && matrica[2][2] == 'X')
		return 'X';

	if (matrica[0][0] == 'X' && matrica[1][0] == 'X' && matrica[2][0] == 'X')
		return 'X';
	if (matrica[0][1] == 'X' && matrica[1][1] == 'X' && matrica[2][1] == 'X')
		return 'X';
	if (matrica[0][2] == 'X' && matrica[1][2] == 'X' && matrica[2][2] == 'X')
		return 'X';

	if (matrica[0][0] == 'X' && matrica[1][1] == 'X' && matrica[2][2] == 'X')
		return 'X';
	if (matrica[2][0] == 'X' && matrica[1][1] == 'X' && matrica[0][2] == 'X')
		return 'X';

	//drugi igrac tj igrac O
	if (matrica[0][0] == 'O' && matrica[0][1] == 'O' && matrica[0][2] == 'O')
		return 'O';
	if (matrica[1][0] == 'O' && matrica[1][1] == 'O' && matrica[1][2] == 'O')
		return 'O';
	if (matrica[2][0] == 'O' && matrica[2][1] == 'O' && matrica[2][2] == 'O')
		return 'O';

	if (matrica[0][0] == 'O' && matrica[1][0] == 'O' && matrica[2][0] == 'O')
		return 'O';
	if (matrica[0][1] == 'O' && matrica[1][1] == 'O' && matrica[2][1] == 'O')
		return 'O';
	if (matrica[0][2] == 'O' && matrica[1][2] == 'O' && matrica[2][2] == 'O')
		return 'O';

	if (matrica[0][0] == 'O' && matrica[1][1] == 'O' && matrica[2][2] == 'O')
		return 'O';
	if (matrica[2][0] == 'O' && matrica[1][1] == 'O' && matrica[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
    n=0;

	ispis_matrice();
	for(int i=0;i<15;i++)
	{
	    n++;
		pocetak();
		ispis_matrice();
		if (pobednik() == 'X')
		{
			cout << "X JE POBEDNIK!" << endl;
			break;
		}
		else if (pobednik() == 'O')
		{
			cout << "O JE POBEDNIK!" << endl;
			break;
		}
		else if (pobednik() == '/' && n == 9)
		{
			cout << "NEMA POBEDNIKA, NERESENO JE!!" << endl;
			break;
		}
		promena();
	}
	system("pause");
	return 0;
}
