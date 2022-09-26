#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);

    if ( num%5 == 0)
    {
        if(num%11 == 0)
        {
            printf("El numero es divisible entre 11 y 5\n");
        }
        else
        {
            printf("El numero es divisible solo entre 5\n");
        }
    }
    else{
        if(num%11 == 0)
        {
            printf("El numero es divisible solo entre 11\n");
        }
        else
        {
            printf("No es divisible entre 11 ni 5\n");
        }        
    }
    return 0;
}