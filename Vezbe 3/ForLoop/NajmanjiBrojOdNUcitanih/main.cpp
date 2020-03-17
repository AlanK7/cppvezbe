#include <iostream>

using namespace std;

int main()
{
    int najmanjiBroj, brojKojiUnosimo, n;

    // korisnik unosi n, tj. koliko brojeva zeli da unese
    cout << "Unesite koliko brojeva zelite da unesete : ";
    cin >> n;

    // for petlja koja ide od 1 do n
    // kroz svaku iteraciju, tj. prolaz kroz for petlju, korisnik unosi jedan broj koji se skladisti u brojKojiUnosimo
    // taj broj ce biti preklopljen nekim drugim (sledecim unosom) u narednoj iteraciji, ali nama to nije bitno
    for(int i=1; i <= n; i++)
    {
        // pri svakoj iteraciji for petlje, trazimo od korisnika da unese broj
        cout << "Unesite " << i << ". broj : ";
        cin >> brojKojiUnosimo;

        /* ispitujemo da li je brojac na jedinici, tj. da li je ovo
        prvi broj kojeg korisnik unosi, ukoliko jeste, onda pretpostavljamo da je
        taj broj najmanji, i dodeljujemo njegovu vrednost promenjivoj najmanjiBroj
        ne zanima nas da li je taj broj najmanji ili ne, taj broj nam je potreban
        iskljucivo iz razloga da bi na osnovu njega mogli da vrsimo dalja ispitivanja*/
        if(i == 1)
            najmanjiBroj = brojKojiUnosimo;
        /* ukoliko brojac nije na jedinici, onda ispitujemo da li je broj kojeg je korisnik uneo
        manji od trenutnog najmanjeg broja, ukoliko jeste, onda promenjivoj najmanjiBroj
        dodeljujemo vrednost trenutnu vrednost promenjive brojKojiUnosimo (cija se vrednost menja svakom iteracijom for petlje),
        ukoliko nije, onda nista, program nastavlja sa izvrsavanjem */
        else if (najmanjiBroj > brojKojiUnosimo)
            najmanjiBroj = brojKojiUnosimo; // novi najmanji broj ukoliko je uslov iznad tacan
    }

    /* ispis najmanjeg broja od n unetih (pretpostavljamo da je n broj veci od nule)
    ukoliko n nije vece od nule, najmanjiBroj nece biti definisan u ovom primeru, vec samo deklarisan
    pa ce uzeti neku (random) vrednost koja se pre njegove deklaracije nalazila na toj memorijskoj lokaciji
    da bi smo to izbegli, mogli smo pre ovog ispisa da pitamo if(n>0), ali u ovom primeru to nije neophodno */
    cout << "Najmanji broj od unetih je : " << najmanjiBroj;

    return 0;
}
