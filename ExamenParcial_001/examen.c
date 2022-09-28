#include <stdio.h>
#include <math.h>
#include "main.h"

float main ()

{
    float volumen;
    float gramos;
    float areafinal;

    char opcion;

    printf("Elige el tipo de producto: \n");
    printf("a - Aceite \n");
    printf("b - Alcohol \n");
    printf("c - Gasolina \n");
    printf("d - Acetona \n");
    scanf("%c",&opcion);

    printf("\nIngrese el volumen:\n");
    scanf("%f",&volumen);

    switch (opcion)

    {
        
        switch(opcion)

    {
        
        case 'A': 
        densidad = 0.9;
        area(volumen, densidad, costo);
        break;
        case 'B': 
        densidad = 0.8;
        area(volumen, densidad, costo);
        break;
        case 'C': 
        densidad = 0.68;
        area(volumen, densidad, costo);
        break;
        case 'D': 
        densidad = 0.79;
        area(volumen, densidad, costo);
        break;
        default:
        printf("Opción no válida\n");
        break;
        
    }
    }
    printf(" %.2f ml en gramos = %.2f gr\n",volumen,gramos);
}