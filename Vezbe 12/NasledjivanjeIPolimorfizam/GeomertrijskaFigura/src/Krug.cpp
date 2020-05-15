#include "Krug.h"
#include "GeometrijskaFigura.h"
#include <string>
#define PI 3.14

using namespace std;

Krug::Krug(string n, string b, float p) : GeometrijskaFigura(n,b)
{
    Poluprecnik = p;
}

Krug::~Krug()
{
    //dtor
}

float Krug::GetPoluprecnik()
{
    return Poluprecnik;
}

void Krug::SetPoluprecnik(float p)
{
    Poluprecnik = p;
}

float Krug::GetPovrsina()
{
    return Poluprecnik*Poluprecnik*PI;
}

float Krug::GetObim()
{
    return 2*Poluprecnik*PI;
}
