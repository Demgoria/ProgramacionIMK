#include <stdio.h>

int main ()
{
    int n=0;
    int i=2;

    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Even numbers between 1 to %d:\n", n);

    do
    {
        printf("%d, ", i);
        i=i+2;

    } while (i<=n);

    return(0);
}