#include <stdio.h>

int main()
{
    int n=1;

    while(n<=10)
    {
        printf("%d\n",n);
        n++;
        if(n==7)
        {
            break;
        }
    }

    return(0);
}