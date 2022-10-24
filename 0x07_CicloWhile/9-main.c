#include <stdio.h>

int main ()
{
    int n;
    int i=1;
    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Odd numbers between 1 to %d:\n", n);

    while (i<=n)
    {
        printf("%d, ", i);
        i=i+2;
    } 

    return(0);
}