#include <stdio.h>

int main()

{
    int n=0;
    int suma=0

    printf("Input upper Limit:\n");
    scanf("%d", &n);

    printf("Sum of odd numbers between 1 to %d:\n",n);

    for(int i=1; i<=n; i=i+2)
    {
        suma=suma+1
    }

    printf("%d\n", suma);
    return(0);
}