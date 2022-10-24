#include <stdio.h>

int main ()
{
    int n=0;
    int suma=0;
    int i=1;

    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Sum of odd numbers between 1 to %d:\n", n);

    while (i<=n)
    {
        suma=suma+i;
        i=i+2;
    } 

    printf("%d\n", suma);

    return(0);
}