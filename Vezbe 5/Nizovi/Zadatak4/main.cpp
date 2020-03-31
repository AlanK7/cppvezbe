#include <iostream>

using namespace std;

//4. Napisati program kojim se pronalazi broj nula u unetom nizu

int main()
{
    int nizA[5]{0,3,0,1,0};
    int brojnula = 0;

    for(int i=0; i < 5; i++)
    {
        if(nizA[i] == 0)
            brojnula++;
    }

    cout << "Broj nula je : " << brojnula;

    return 0;
}
