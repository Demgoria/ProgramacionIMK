#include <stdio.h>

int main()
{
    int n;
    int a=1;

    printf("Input upper limit\n");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d\n", n);

    while (a<=n)
    {

        printf("%d, ", a);
        a++;

    }

    return(0);
}