#include <stdio.h>
#include "main.h"

int main()
{
    float length, width, result;

    printf("Ingrese la longitud del rectángulo: ");
    scanf("%f", &length);
    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &width);

    result = area(length, width);

    printf("Area del rectangulo = %f sq. units\n", result);

    return 0;
}