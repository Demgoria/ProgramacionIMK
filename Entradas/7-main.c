#include "main.h"
#include <stdio.h>

int main(void)
{
    int resultado = 0;
    int n1=1;
    int n2=1;

    printt ("Ingrese un numero\n");
    scanf ("%d", &n1);
    printt ("Ingrese un numero\n");
    scanf ("%d", &n2);
    
    resultado = mod(n1,n2);
    printf("El módulo %d de %d es: %d\n",n1,n2,resultado);
    return 0;
}