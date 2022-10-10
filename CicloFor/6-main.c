#include <stdio.h>

int main ()
{
    int n=0;
    int suma=0;
    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Sum of natural numbers 1-%d:\n", n);

    for(int i=0; i<=n; i++)
    {

        suma= suma+i;
    } 
    
    printf("%d\n", suma);
    
    return(0);
}