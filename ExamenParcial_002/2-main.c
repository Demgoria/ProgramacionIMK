#include <stdio.h>

int main() 

{
    int tiempo = 0;
    float cost = 0;
    char dia = 0;
    int hora = 0;

    printf("En que dia de la semana llamo usted?\n\n");
    printf("Pon L para lunes\n");
    printf("Pon M para Martes\n");
    printf("Pon X para Miercoles\n");
    printf("Pon J para Jueves\n");
    printf("Pon V para Viernes\n");
    printf("Pon S para Sabado\n");
    printf("Pon D para Domingo\n");
    scanf("%c" , &dia);
    
    printf("Ingrese el rango de la hora de la llamada\n");
    scanf("%d" , &hora);

    printf("Cuantos minutos duro tu llamada\n");
    scanf("%d" ,  &tiempo);

    
    if ((dia == 'L') || (dia == 'l') || (dia == 'M') || (dia == 'm') || 
    (dia == 'X')||(dia == 'x') || (dia == 'J') || (dia == 'j') || (dia == 'V') || (dia == 'v') ){
        
                if ((hora > 600) || (hora < 1800)) {
                cost = 0.60*(tiempo);
                }
                else if ((hora < 600) || (hora > 1800)) {
                cost = 0.80*(tiempo);
                }

    }
    else if ((dia == 'S') || (dia == 's') || 
    (dia == 'D') || (dia == 'd')) {
    cost = 0.25*(tiempo);
    }
    else {
    
    printf("el dato fue erroneo, porfavor intentalo otra vez");

    }
    
    printf("Tu gastaste %f", cost);
    printf(" Pesos");
    }