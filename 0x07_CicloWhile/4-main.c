#include <stdio.h>

int main()
{
    int a=0;
    int pass=0;

    printf("ingrese password\n");
    scanf("%d", &pass);

    do
    {
        pass= pass/10;
        a++;
    } while (pass>0);

    printf("el numero de digitos de %d\n", a);
    
    return(0);
}