#include <iostream>
#include <vector>
#include <sstream>



using namespace std;

int main()
{
    vector<string> gost;
    vector<vector<string>> gosti;

    cout << "Dobro dosli u Hotel 'Amilos' \n";
    int sobe[10][10];
    int brojSobe, spratSobe, redSobe;

    cout << " \n";
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            sobe[i][j]= 0;
        }
    }
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            cout << sobe[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    int n;

    while (true)
    {
        cout << "Unesite opciju:\n";

        cout << "Unesite gosta (1):\n";
        cout << "Prikaz gostiju (2):\n";
        cout << "Prikaz slbodnih soba (3):\n";

        cin >> n;


        switch (n)
        {
            case 1:
                {
                    gost.clear();
                    cout << "Unesite ime: ";
                    string imeGosta;
                    cin >> imeGosta;
                    gost.push_back(imeGosta);

                    cout << "Unesite prezime: ";
                    string prezimeGosta;
                    cin >> prezimeGosta;
                    gost.push_back(prezimeGosta);

                    cout << "Unesite broj noci: ";
                    string brojNociGosta;
                    cin >> brojNociGosta;
                    gost.push_back(brojNociGosta);

                    cout << "Unesite sobu 1-100: ";
                    string sobaGosta;
                    cin >> sobaGosta;
                    gost.push_back(sobaGosta);
                    stringstream(sobaGosta) >> brojSobe;
                    cout << brojSobe;
                    gosti.push_back(gost);
                    if (brojSobe < 10)
                    {
                        spratSobe == 0;
                        redSobe = brojSobe-1;
                    }
                    else if (brojSobe <= 99)
                    {
                        spratSobe = (brojSobe/10)-1;
                        cout<<spratSobe;
                        redSobe= (brojSobe%10)-1;
                        cout<<redSobe;
                    }

                    else{
                        redSobe = 9;
                        spratSobe = 9;
                    }
                    if(sobe[spratSobe][redSobe] == 1)
                    {
                        cout<<"Soba je zauzeta!";
                    }
                    else
                    {
                        sobe[spratSobe][redSobe] = 1;
                    }
                    break;
                }

            case 2:
                cout << "Gosti: \n";
                if (gosti.empty())
                {
                    cout << "Nemamo nijendog gosta.\n";
                    break;
                }
                for (int i = 0; i < gosti.size(); i++) {
                    for (int j = 0; j < gosti[i].size(); j++){
                        cout<< gosti[i][j] << " ";
                    }
                    cout<< "\n";
                }
                break;
            case 3:
                cout << "Sobe (0)slbodna  (1)zauzeta \n";
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        cout << sobe[i][j] << " ";
                    }
                    cout << "\n";
                }
                break;
            default:
                cout << "Pogresan odabir";
                break;
        }




    }
    return 0;
}

