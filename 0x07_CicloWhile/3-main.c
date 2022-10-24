#include <stdio.h>

int main()
{
    int a=0;
    int pass=0;

    printf("ingrese password\n");
    scanf("%d", &pass);

    while (pass>0)
    {
        pass= pass/10;
        a++;
    }

    printf("el numero de digitos de %d\n", a);
    
    return(0);
}