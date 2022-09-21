#include <stdio.h>
#include "main.h"

int main()
{
    float length, width, result;

    printf("Ingrese la longitud del rectángulo: ");
    scanf("%f", &length);
    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &width);

    result = perimeter(length, width);
    printf("El Perimetro del rectangulo = %f units \n", result);

    return 0;
}