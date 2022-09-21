#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Introduzca dos ángulos de triángulo: ");
    scanf("%d%d", &a, &b);
    c = 180 - (a + b);
    printf("Tercer angulo del Triangulo = %d\n", c);

    return 0;
}