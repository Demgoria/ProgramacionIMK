#include <stdio.h>
#include "main.h"

int main(void)
{
    int numero;
    int fact;
    printf("Ingrese un numero\n");
    scanf("%d",&numero);
    fact = factorial(numero);
    printf("%d! = %d\n",numero,fact);
    return(0);
}