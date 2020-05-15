#ifndef KRUG_H
#define KRUG_H
#include "GeometrijskaFigura.h"
#include <string>

using namespace std;

class Krug : public GeometrijskaFigura
{
private:
    float Poluprecnik;
public:
        Krug(string n, string b, float p);
        ~Krug();

        float GetPoluprecnik();
        void SetPoluprecnik(float p);

        float GetPovrsina();
        float GetObim();
};

#endif // KRUG_H
