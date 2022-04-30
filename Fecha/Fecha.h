#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#define ES_BISIESTO(X) ((!X%4 && X%100) || !X % 400)?1:0
using namespace std;
class Fecha
{
    private:
        int diaRel;

    public:
        Fecha();
        Fecha(int d,int m,int a);

        Fecha sumarDias(int dias)const;
        int difEnDias(Fecha *otraFecha)const;
        int operator - (const Fecha* f1)const;
        Fecha operator +(int dias)const;

};



#endif // FECHA_H
