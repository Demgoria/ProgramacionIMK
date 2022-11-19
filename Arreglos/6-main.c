#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE]; 
    int N, max=0, max2=0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    for(int i=0; i<N; i++)
    {
        if(max2 < arr[i] && arr[i] != max)
        {
            max2 = arr[i]; 
        }
    }
    printf("El maximo es: %d\n",max);
    printf("El segundo maximo es: %d\n",max2);

}