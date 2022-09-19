#include "main.h"
#include <stdio.h>

int main(void)
{
    int suma=0;
    int n1=0;
    int n2=0;

    printf("Ingrese un numero:\n");
    scanf("%d",&n1);
    
    printf("Ingrese un numero:\n");
    scanf("%d",&n2);
    

    suma = add(n1,n2);
    printf("La suma es: %d\n",suma);
    return 0;
}