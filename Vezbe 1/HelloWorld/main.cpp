/*
ukljucivanje pretprocesorske direktive u nas program
u ovom slucaju ukljucivanje <iostream> pretprocesorske direktive za input-output
*/
#include <iostream>
/*
naglasavajne da koristimo std (standard) namespace u celom programu
da ne bi naglasavali svaki put da je cout,cin,endl... iz ovog namespacea (std::cout, std::cin, std::endl)
na ovaj nacin program zna odakle su cout, cin, endl... koje mi upotrebljavamo u programu
*/
using namespace std;

/*
main funkcija (tj. glavna funkcija), svaka konzolna aplikacija mora da ima jednu main funkciju
na taj nacin program zna odakle da krene sa izvrsavanjem
int oznacava tip main funkcije, tj. sta main funkcija treba da vrati (return 0;)
ako je izvrsavanje main funkcije proslo kako treba, vracamo nulu
*/
int main()
{
    // za ispis u konzolu koristimo cout << iz <iostream> pretprocesorske direktive, iz std namespacea
    // endl nam sluzi za prelazak u novi red, on je takodje iz <iostream> std namespace-a

    cout << "Hello world!" << endl;

    /* zaboravio sam pomenem komentare, al' ako ste procitali program do ovde
    jasno vam je vec da se multi-line(komentari u vise redova) pisu tako sto ih
    ugnezdimo izmedju kose crte i zvezdice, i zvezdice i kose crte */
    // dok se jednolinijski komentari pisu sa dve kose crte

    /* komentari sluze da objasne neki kod, narocito su znacajni ukoliko se
    radi u timu od vise ljudi, da bi ostali clanovi mogli lakse da se snadju, i ukoliko
    znamo da cemo odrzavati neki kod (cesto se desava da sami zaboravimo sta smo radili)
    i na taj nacin se kod dokumentuje kod*/
    // kompajler pri kompajliranju ignorise sve komentare

    return 0;
}
