#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#define COLS 10
#define FILS 10

#define NoCicloVida 50
#define NoMin 1
#define NoMax 1
#define NoMinVive 2
#define NoMaxVive 1

char vecindad[FILS][COLS];

int vida[4] = {NoMin,NoMax,NoMinVive,NoMaxVive};

void vecindadInicial();
void poblarVecindad();
void pintarVecindad();
int analizarVecinos(int,int);
void cicloCelular();

void vecindadInicial(){
    int i,j;
    for (i = -1; i < FILS; i++){
        for (j = -1; j < COLS; j++){
            vecindad[i][j] = '_';
        }
    }
}

void poblarVecindad(){
 int fil,x,y;
 srand(time(NULL));

 for (fil = 0; fil < COLS; ++fil){
  y = rand()%COLS;
  x = rand()%FILS;
  if(vecindad[x][y]=='_')
   vecindad[x][y]='*';
 }
}

void pintarVecindad(){
    int i,j;
    for (i = -0; i < FILS; i++){
            printf("\n");
        for (j = -0; j < COLS; j++){
            printf("%c",vecindad[i][j] );
        }
    }
    printf("\n");
}

int analizarVecinos(int posf, int posc){

 int vecinos = 0;
 if(posf-1 >= 0 && posc-1 >= 0)
  if(vecindad[posf-1][posc-1] == '*')
   vecinos++;
 if(posf-1 >= 0)
  if(vecindad[posf-1][posc] == '*')
   vecinos++;
 if(posf-1 >= 0 && posc+1 <= COLS-1)
  if(vecindad[posf-1][posc+1] == '*')
   vecinos++;
 if(posc-1 >= 0)
  if(vecindad[posf][posc-1] == '*')
   vecinos++;
 if(posc+1 <= COLS-1)
  if(vecindad[posf][posc+1] == '*')
   vecinos++;
 if(posf+1 <= FILS-1 && posc-1 >= 0)
  if(vecindad[posf+1][posc-1] == '*')
   vecinos++;
 if(posf+1 <= FILS-1)
  if(vecindad[posf+1][posc] == '*')
   vecinos++;
 if(posf+1 <= FILS-1 && posc+1 <= COLS-1)
  if(vecindad[posf+1][posc+1] == '*')
   vecinos++;
   
return vecinos;
}

void cicloCelular(){
int fil,col;
int n_vecinos;
 
for(fil = 0; fil < FILS; fil++){
for(col = 0; col < COLS; col++){
n_vecinos = analizarVecinos(fil,col);

   
   if(vecindad[fil][col] == '_'){
    if(n_vecinos == NoMinVive || n_vecinos == NoMaxVive)
     vecindad[fil][col] = '*';
    else
     vecindad[fil][col] = '_';
   }
   else if(vecindad[fil][col] == '*'){
    if(n_vecinos == NoMin || n_vecinos == NoMax)
     vecindad[fil][col] = '*';
    else
     vecindad[fil][col] = '_';
   }
  }
 }
}

int main(int argc, char *argv[])
{
 int i=0;
 
 vecindadInicial();
 poblarVecindad();
    
 while(i < NoCicloVida){
  pintarVecindad();
  usleep(100000);
  system("clear");
  cicloCelular();
  i++;
 }

return 0;
}
