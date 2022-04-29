#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int dni;
    char nYa[20];
    char sexo;
    tFecha fecha;
    float sueldo;

}tEmp;

typedef struct
{
    int d;
    int m;
    int a;
}tFecha;

int txtAbinVAR(char *linea,tEmp *reg);
int txtAbinFIJ(char *linea,tEmp *reg);
#endif // FUNCIONES_H_INCLUDED

