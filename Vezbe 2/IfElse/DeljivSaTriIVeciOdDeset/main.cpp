#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Unesite prvi broj : ";
    cin >> x;

    cout << "Unesite drugi broj : ";
    cin >> y;

    /*
        (x%3 == 0 && x > 10) - ispitujemo da li je x deljivo sa 3 i da li je vece od 10

        (y%3 == 0 && y > 10) - ispitujemo da li je y deljivo sa 3 i da li je vece od 10

        || (ovaj operator predstavlja logicko ILI) (prviUslov || drugiUslov) <- ako je bilo koji od ova uslova tacan, ceo izraz je tacan

        ! (ovaj operator predstavlja logicko NE) (!uslov) <- ukoliko je uslov tacan, izraz je netacan, ukoliko je uslov netacan, izraz je tacan

        ((x%3 == 0 && x > 10) || (y%3 == 0 && y > 10)) - ovaj izraz bi vracao tacno ukoliko x i y ispunjavaju uslove, ukoliko je samo x tacno ili ukoliko je samo y
        s' tim sto smo isli obrnutom logikom, to smo postigli dodavajuci !(NOT) ispred
    */
    if(!((x%3 == 0 && x > 10) || (y%3 == 0 && y > 10)))
        cout << "Nijedan od dva uneta broja nije deljiv sa tri i veci od 10";
    else
    {
        // ako program udje u ovaj else block, znaci da bar jedan od ova dva broja ispunjava uslove
        // i sad ispitujemo koji, da bi ga ispisali, ne koristimo else if jer ove dve stvari nisu medjusobno iskljucive
        // ako x ispunjava uslove, ne mora da znaci da y ne ispunjava, tako da moramo i to da ispitamo
        if(x%3==0 && x > 10)
            cout << x << " je deljiv sa 3 i veci od 10" << endl;
        if(y%3 ==0&& y > 10)
            cout << y << " je deljiv sa 3 i veci od 10";
    }

    return 0;
}
