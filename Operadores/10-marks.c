#include <stdio.h>

int main()

{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;

    printf("Ingrese las calificaciones de cinco materias: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Notas totales = %.2f\n", total);
    printf("Notas medias = %.2f\n", average);
    printf("Porcentaje = %.2f\n", percentage);

    return 0;
}