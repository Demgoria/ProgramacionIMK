#include<stdio.h>

int main()
{
    int i, j, N, columnas;

    printf("Ingrese el numero de columnas:");
    scanf("%d",&N);

    columnas=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columnas; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            
            columnas++;
        }
        else
        {
         
            columnas--;
        }

        printf("\n");
    }

    return 0;
}