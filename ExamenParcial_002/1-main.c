#include<stdio.h> 
 
int main(){

    char *estrella="*****************";
    int i,j, filas;
     
    printf("Introduzca el numero de Filas:\n");
    scanf("%d", &filas);
       
    for(i=0;i<filas;i++){
       printf("%*.*s\n",filas+i, 2*i+1, estrella);
    }
    return 0;

}