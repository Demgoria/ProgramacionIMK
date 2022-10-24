#include <stdio.h>

int main ()
{
    int i=65;

    printf("Alphabets:\n");

    do
    {

        printf("%c, ", i);
        i++;

    } while (i<=90);

    return(0);
}