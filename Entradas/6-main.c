#include "main.h"
#include <stdio.h>

int main(void)
{
    float resultado = 0;
    int n1=2;
    int n2=2;

    printt ("Ingrese un numero\n");
    scanf ("%d", &n1);
    printt ("Ingrese un numero\n");
    scanf ("%d", &n2);

    resultado = div(n1,n2);
    printf("El resultado de la division es: %f\n",resultado);
    return 0;
}