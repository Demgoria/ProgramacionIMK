#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Ingresa la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area del Triangulo = %.2f sq. units\n", area);

    return 0;
}