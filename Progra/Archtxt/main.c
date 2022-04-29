#include "funciones.h"

int main(int argc,char *argv[])
{
    FILE *archBin,
         *archTxt;
    tEmp reg;
    const char *formato="%d|%s|%c|%d/%d/%d|%.2f\n";

    crearLoteBin("Pruebas.bin");

    if(argv[3][0]=='F')
    {
        formato="%08d%-40s%c%02d/%02d/%04d%010.2f\n";
    }

    if(!(archBin=fopen(argv[1],"rb")))
    {
        puts("Error");
        return -1;
    }
    if(!(archTxt=fopen(argv[2],"wt")))
    {
        puts("Error2");
        fclose(archBin);
        return -1;
    }


    fread(&reg,sizeof(reg),1,archBin);

    while(!feof(archBin))
    {
        fprintf(archTxt,formato,reg.dni,reg.nYa,reg.sexo,reg.fecha.d,reg.fecha.m,reg.fecha.a,reg.sueldo);
        fread(&reg,sizeof(reg),1,archBin);
    }
    fclose(archBin);
    fclose(archTxt);
    printf("todo ok");
    return 0;
}
