#ifndef PRAVOUGAONIK_H
#define PRAVOUGAONIK_H


class Pravougaonik
{
private:
    double a;
    double b;

    public:
        Pravougaonik(double a, double b);
        ~Pravougaonik();

        double Povrsina();
        double Obim();
};

#endif // PRAVOUGAONIK_H
