#include <stdio.h>
#include <math.h>

int main()
{
    double base, expo, power;

    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el Exponente: ");
    scanf("%lf", &expo);

    power = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, expo, power);

    return 0;
}