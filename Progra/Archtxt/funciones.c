#include "funciones.h"

void crearLoteBin(char* nom)
{
    tEmp vec[5]={{42115610,"Carlos Baute",'M',{5,8,2002},50500.85},
                 {42847810,"Emanuel Laurinec",'M',{9,4,2005},60800.50},
                 {42618487,"Tomas Vescovo",'M',{9,2,2008},65200.95},
                 {45648794,"Alberto Perez",'M',{4,2,2001},90500.40},
                 {16458754,"Rodrigo Bueno",'M',{9,2,1999},95200.85}};
    FILE *pf;

    if(!(pf=fopen(nom,"wb")))
    {
        puts("Error");
        return -1;
    }

    fwrite(vec,sizeof(*vec),5,pf);
    fclose(pf);
}

