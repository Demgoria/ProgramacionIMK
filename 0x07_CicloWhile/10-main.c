#include <stdio.h>

int main ()
{
    int n=0;
    int suma=0;
    int i=0;

    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Sum of natural numbers 1-%d:\n", n);

    do
    {

        suma= suma+i;
        i++;

    } while (i<=n);
    
    printf("%d\n", suma);
    
    return(0);
}