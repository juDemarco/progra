#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int d;
    int m;
    int a;
}tFecha;

typedef struct
{
    int dni;
    char nYa[40];
    char sexo;
    tFecha fecha;
    float sueldo;
}tEmp;



void crearLoteBin(char* nom);

#endif // FUNCIONES_H_INCLUDED
