#include "funciones.h"

int txtAbinVAR(char *linea,tEmp *reg)
{
    char *car=strchr(linea,'\n');

    if(!car)
        return -1;
    *car='\0';

    car=strrchr(linea,'|');
    sscanf(car+1,"%f",&reg->sueldo);
    *car='\0';

    car=strrchr(linea,'|');
    sscanf(car+1,"%d/%d/%d",&reg->fecha.d,&reg->fecha.m,&reg->fecha.a);
    *car='\0';

    car=strrchr(linea,'|');
    reg->sexo=*(car+1);
    *car='\0';

    car=strrchr(linea,'|');
    sscanf(car+1,"%s",reg->nYa);
    strcpy(reg->nYa,car+1)
    *car='\0';

    sscanf(linea,"%d",&reg->dni);

    return 1;

}

int txtAbinFIJ(char *linea,tEmp *reg)
{
    char *car=strchr(linea,'\n');
    if(!car)
        return -1;

    *car='\0';

    car-=10;
    sscanf(car,"%f",&reg->sueldo);
    *car='\0';

    car-=8;
    sscanf(car,"%f",&reg->fecha.d,&reg->fecha.m,&reg->fecha.a);
    *car='\0';

    car--;
    reg->sexo=*car;
    *car='\0';

    car-=40;
    strcpy(reg->nYa,car);
    *car='\0';

    sscanf(linea,"%d",&reg->dni);

    return 1;
}
