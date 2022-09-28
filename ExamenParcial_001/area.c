#include <stdio.h>
#include <math.h>
#include "main.h"

float area(float volumen);
float radio;areatotal;altura;costo;ahorro;costoanterior;

{

  altura = ((volumen)/(3.1416*pow(radio,2)));
  areatotal = ((6.28*pow(radio,2))+(6.28*radio*altura)
  costo = ((2.45*areatotal)/1000);
  radio (cbrt (2*volumen/12.56)

  if (volumen<500)

    {
        case 'a': 
        densidad = 0.9;
        area(volumen,);
        break;
        case 'b': 
        densidad = 0.8;
        area(volumen,);
        break;
        case 'c': 
        densidad = 0.68;
        area(volumen,);
        break;
        case 'd': 
        densidad = 0.79;
        area(volumen,);
        break;
        default:
        printf("Opción no válida\n");
        break;
    }

    ahorro = (costoanterior-costo);

    printf("El radio de la tapa: %.2f cm\n", radio);
    printf("Su area total de la lata: %.2f cm2\n", areaT);
    printf("costo de fabricacion: $ %.2f\n", costo);
    printf("costo anterior para la lata de %.2f ml: $ %.2f\n", volumen, costoanterior);
    printf("Ahorro: %.2f\n", ahorro);

}

