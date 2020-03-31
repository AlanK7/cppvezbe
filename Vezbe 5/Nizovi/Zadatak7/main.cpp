#include <iostream>

using namespace std;

//7. Proveriti da li u nizu ima vise pozitivnih ili negativnih brojeva

int main()
{
    int nizA[6]{1,-2,3,-4,-5,4};
    int brojPozitvnih = 0;
    int brojNegatinih = 0;

    for(int i=0; i < 6; i++)
    {
        if(nizA[i] >=0)
            brojPozitvnih++;
        else
            brojNegatinih++;
    }

    if(brojNegatinih > brojPozitvnih)
        cout << "Negativnih ima vise";
    else if(brojPozitvnih > brojNegatinih)
        cout << "Pozitivnih ima vise";
    else
        cout << "Broj pozitivnih i negativnih u nizu je jednak";

    return 0;
}
