#include "funciones.h"

int main(int argc,char *argv[])
{
///FORMA RARA CON FSCANF(MAL)
//        FILE *archBin,
//         *archTxt;
//    tEmp reg;
//    const char *formato="%d|%[^|]|%c|%d/%d/%d|%f";
//
//    if(argv[3][0]='F')
//    {
//        formato="%8d%40s%c%2d%2d%04d%010.2f\n";
//    }
//
//    if(!(archBin=fopen(argv[1],"rb")))
//    {
//        puts("Error");
//        return -1;
//    }
//    if(!(archTxt=fopen(argv[2],"wt")))
//    {
//        puts("Error2");
//        fclose(archBin);
//        return -1;
//    }
//
//    while((fscanf(archTxt,formato,&reg.dni,&reg.nYa,&reg.sexo,&reg.fecha.d,&reg.fecha.m,&reg.fecha.a,&reg.sueldo))!=EOF)
//    {
//        fwrite(&reg,sizeof(reg),1,archBin);
//    }

    FILE *archBin,
    *archTxt;
    tEmp reg;
    char linea[200];

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

    if(argv[3][0]=='V')
        while(fgets(linea,200,archTxt))
            txtAbinVAR(linea,&reg);

    else
        while(fgets(linea,200,archTxt))
            txtAbinFIJ(linea,&reg);

    fclose(archBin);
    fclose(archTxt);

    return 1;|





    return 0;
}
