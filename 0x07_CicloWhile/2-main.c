#include <stdio.h>

int main()
{
    int password=0;

    printf("INICIO DEL PROGRAMA\n");

    do
    {
        printf("Ingrese un nuevo password\n");
        scanf("%d", &password);
    
    } while (password!=1234);

    printf("Fin del Programa crack\n");

    return(0);
}