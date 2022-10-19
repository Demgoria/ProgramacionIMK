#include <stdio.h>  
int main(void) {  
  int n;  
  printf("Introduce las filas:\n");  
  scanf("%d",&n);  
  int espacios=n-1;  
  int estrellas=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=espacios;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=estrellas;k++)  
    {  
      printf("*");  
    }  
    if(espacios>i)  
    {  
      espacios=espacios-1;  
      estrellas=estrellas+2;  
    }  
    if(espacios<i)  
    {  
      espacios=espacios+1;  
      estrellas=estrellas-2;  
    }  
    printf("\n");  
  }  
  return 0;} 