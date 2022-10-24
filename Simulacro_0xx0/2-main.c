#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,perimetro,semi;
    float area;

    printf("ingrese el primer lado: \n");
    scanf("%f",&a);
    printf("ingrese el segundo lado: \n");
    scanf("%f",&b);
    printf("ingrese el tercer lado: \n");
    scanf("%f",&c);

    perimetro = a+b+c;
    semi = perimetro/2;
    area = (semi*(semi-a)*(semi-b)*(semi-c));
    area = (sqrt(area));

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("el area es: %f \n", area);
        printf("el perimetro es: %f \n", perimetro);
    }else{
        printf("los valores no funcionan. \n");
    }
}