#include <stdio.h>
#include "main.h"

int main()

{
    float radius, diameter, circumference, area;
    
    printf("Ingrese la radio del circulo: ");
    scanf("%f", &radius);

    diameter = diameterC(radius);
    circumference = circumferenceC(radius);
    area = areaC(radius);

    printf("Diametro del circulo = %.2f units \n", diameter);
    printf("Circunferencia del Circulo = %.2f units \n", circumference);
    printf("Area del Circulo = %.2f sq. units \n", area);

    return 0;
}