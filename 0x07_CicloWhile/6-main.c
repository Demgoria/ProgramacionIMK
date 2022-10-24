#include <stdio.h>

int main()
{
    int n;
    int n2=0;
    int n1=0;
    int suma=0;

    printf("Input number\n");
    scanf("%d", &n);

    n2=n%10;

    while (n>=10)
    {
        n= n/10;
    }
    
    n1=n;
    suma=n1+n2;

    printf ("%d", suma);
    
    return(0);
}