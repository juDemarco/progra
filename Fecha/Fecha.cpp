#include "Fecha.h"


Fecha::Fecha()
{
    diaRel = 1;
}

///Pasar a dia rel
Fecha::Fecha(int d,int m,int a)
{
    static int cdxm[2][12]= {{0,31,59,90,120,151,181,212,243,273,304,334},
                            {0,31,60,91,121,152,182,213,244,274,305,335}};
    int difAnios=(a-1601);

    difAnios= difAnios*365 + difAnios/4 - difAnios/100 + difAnios/400;
    difAnios+=cdxm[ES_BISIESTO(a)][m-1]+d-1;
    cout<<difAnios<<endl;
}

Fecha Fecha::sumarDias(int dias)const
{
    Fecha f;

    f.diaRel=this->diaRel+dias;
    return f;
}

int Fecha::difEnDias(Fecha *otraFecha)const
{
    return this->diaRel - otraFecha->diaRel;
}

int Fecha::operator - (const Fecha* f1)const
{
    return this->diaRel - f1->diaRel;
}

Fecha Fecha::operator +(int dias)const
{
    Fecha f;

    f.diaRel = this->diaRel+dias;
    return f;
}

