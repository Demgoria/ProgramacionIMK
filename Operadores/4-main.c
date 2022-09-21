#include <stdio.h>
#include "main.h"

int main()
{
    float cm, meter, km;

    printf("Ingrese la longitud en centímetros: ");
    scanf("%f", &cm);

    meter = CMtoM(cm);
    km    = CMtoKM(cm);

    printf("Longitud en Metro = %.2f m \n", meter);
    printf("Longitud en Kilómetro = %.2f km\n", km);

    return 0;
}