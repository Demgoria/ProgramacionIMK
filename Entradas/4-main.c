#include "main.h"
#include <stdio.h>

int main(void)
{
    int res=0;
    int n1=0;
    int n2=0;

    printf("Ingrese un numero:\n");
    scanf("%d",&n1);
    
    printf("Ingrese un numero:\n");
    scanf("%d",&n2);

    res = resta(n1,n2);
    printf("La resta es: %d\n",res);
    return 0;
}