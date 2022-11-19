#include <stdio.h>

int main()
{
    int suma;
    int promedio;
    int numeros[255];
    char letras[30];
    int letra = 97;

    for(int i = 0; i<255; i++)
    {
        numeros[i]=0;
    }
    for(int i = 0; i<sizeof(letras); i++)
    {
        letras[i] = letra;
        letra++;
    }

     for(int i = 0; i<sizeof(letras); i++)
    {
        printf("Pos %d : %c \n",i,letras[i]);
    }

    printf("En la posicion 1 hay: %d\n", numeros[1]);
    printf("En la posicion 10 hay: %c\n", letras[10]);

    printf("El arreglo letras tiene tamano %d \n", (int)sizeof(letras));


    return 0;
}