#include <iostream>

using namespace std;

// 2. Program kojim se unosi ime i prezime

int main()
{
    char ImeIPrezime[50]{};

    cout << "Unesite ime i prezime : ";

    // metoda koju koristimo da bi uzeli ceo string je getline
    // sa cin mozemo da uzmemo samo jednu rec pri unosu, jer ona razmak (space) gleda kao kraj stringa

    // metodi getline prosledjujemo promenjivu u koju zelimo da sacuvamo string, i broj karaktera koju zelimo da pokupimo iz komandne linije
    cin.getline(ImeIPrezime, 30);

    cout << "Vase ime i prezime je : " << ImeIPrezime;

    return 0;
}
