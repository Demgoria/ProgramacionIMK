#include "main.h"
#include <stdio.h>

int main(void)
{

    int resultado = 0;

    resultado = mod(430,2);
    printf("El módulo es: %d\n",resultado);
    resultado = mod(7,3);
    printf("El módulo es: %d\n",resultado);
    resultado = mod(15,3);
    printf("El módulo es: %d\n",resultado);
    return 0;
    
}