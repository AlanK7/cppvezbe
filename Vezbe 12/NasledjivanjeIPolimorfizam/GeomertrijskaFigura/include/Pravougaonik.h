#ifndef PRAVOUGAONIK_H
#define PRAVOUGAONIK_H
#include "GeometrijskaFigura.h"
#include <string>

using namespace std;

class Pravougaonik : public GeometrijskaFigura
{
private:
        float StranicaA;
        float StranicaB;
public:
        Pravougaonik(string n, string b, float strA, float strB);
        ~Pravougaonik();

        void SetStranicaA(float strA);
        float GetStranicaA();

        void SetStranicaB(float strB);
        float GetStranicaB();

        float GetPovrsina();
        float GetObim();
};

#endif // PRAVOUGAONIK_H
