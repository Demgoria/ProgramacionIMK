#include "main.h"
#include <stdio.h>

int main(void)
{
    int resultado = 0;
    int n1=0;
    int n2=0;

    printt ("Ingrese un numero\n");
    scanf ("%d", &n1);
    printt ("Ingrese un numero\n");
    scanf ("%d", &n2);

    resultado = mul(n1,n2);
    printf("El resultado de la multiplicacion es: %d\n",resultado);
    return 0;
}