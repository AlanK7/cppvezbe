#include <iostream>
#define MAX 100

using namespace std;

void ispisNiza(int niz[], int n);
void selectionSort(int niz[], int n);

int niz[MAX]{4,5,4,3,2,2};

int main()
{
    ispisNiza(niz,6);
    selectionSort(niz,6);
    ispisNiza(niz,6);

    return 0;
}
// funkcija za ispis niza
void ispisNiza(int niz[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << niz[i] << " ";
    }
    cout << endl;
}

// selection sort algoritam, funkcija za sortiranje niza
void selectionSort(int niz[], int n)
{
    // ispod je link sa objasnjenjem selection sort algoritma
    // https://www.youtube.com/watch?v=g-PGLbMth_g
    for(int i=0; i < n-1; i++)
    {
        int jMin = i;

        for(int j=i+1; j < n; j++)
        {
            if(niz[j] < niz[jMin])
                jMin = j;
        }

        if(jMin != i)
            swap(niz[i], niz[jMin]);
    }
}


