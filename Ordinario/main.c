#include <ctype.h>   
#include <time.h>
#include <stdio.h>   
#include <stdlib.h>  

#define COLUMNAS 3
#define FILAS 4
#define CASILLA_OCULTA 'W'
#define MINA 'M'
#define CANTIDAD_MINAS 2  // Si colocas más minas que la cantidad de espacios disponibles (COLUMNAS * FILAS), fallará

int descubrirEspacio(char tablero[FILAS][COLUMNAS], char tablero_usuario[FILAS][COLUMNAS], int x, int y);
void numeroMinas(char tablero[FILAS][COLUMNAS], char tablero_usuario[FILAS][COLUMNAS], int x, int y);

int contador = 0;

void generarMinas(char minas[FILAS][COLUMNAS])
{
    int x = 0, y = 0;    
    for (int i = 0; i < CANTIDAD_MINAS; i++)
    {
        x = (rand() % (FILAS - 1));
        y = (rand() % (COLUMNAS - 1));        
		if(minas[x][y] == MINA) i--;
        minas[x][y] = MINA;
    }
}

void imprimirTablero(char tablero[FILAS][COLUMNAS])
{
    char marcadorF = 'A';
    int marcadorC = 0;
    printf("  ");
    for (int i = 0; i<COLUMNAS;i++)
    {
         printf(" %i ", marcadorC);
         marcadorC++;
    }
    printf("\n");
    for (int i = 0; i<FILAS;i++)
    {
        printf("%c ", marcadorF);
        for (int j = 0; j<COLUMNAS; j++)
        {
            printf("[%c]",tablero[i][j]);
        }        
         printf("\n");
         marcadorF++;
    }   
}

void inicializarTablero(char tablero[FILAS][COLUMNAS])
{
    for (int i = 0; i<FILAS;i++)
    {
        for (int j = 0; j<COLUMNAS; j++)
        {
           tablero[i][j] = CASILLA_OCULTA;
        }
    }   
}

int descubrirTablero(char tablero[FILAS][COLUMNAS], char tablero_usuario[FILAS][COLUMNAS], int status){
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++){
			if(tablero[i][j] == MINA){
				tablero_usuario[i][j] = MINA;
            }
        }
    }
    if(status == 0)
        printf("Haz perdido\n");
    else
        printf("Haz ganado\n");
    return status;
}

void numeroMinas(char tablero[FILAS][COLUMNAS], char tablero_usuario[FILAS][COLUMNAS], int x, int y){
	int minas = 0;

	for(int i = -1; i <= 1; i++){
		for(int j = -1; j <= 1; j++){
			if(i + x >= 0 && i + x < FILAS && j + y >= 0 && j + y < COLUMNAS && ( i!=0 || j!=0) && tablero[x+i][y+j] == MINA){ 
                minas++;
            }
		}
    }

    tablero_usuario[x][y] = minas + '0';

	if(minas == 0){
	   for(int i = -1; i <= 1; i++){
		  for(int j = -1; j <= 1; j++){
			 if(i + x >= 0 && i + x < FILAS && j + y >= 0 && j + y < COLUMNAS && ( i!=0 || j!=0)){
				descubrirEspacio(tablero, tablero_usuario, i + x, j + y);
                }
            }
        }
    }
}

int descubrirEspacio(char tablero[FILAS][COLUMNAS], char tablero_usuario[FILAS][COLUMNAS], int x, int y){
	if(tablero[x][y] == MINA){
		return descubrirTablero(tablero, tablero_usuario, 0);
    }

	if(tablero_usuario[x][y] == CASILLA_OCULTA){
        contador++;
		numeroMinas(tablero, tablero_usuario, x, y);
    }

	return 1;
}

int main()
{
    srand(time(NULL));              

    char tablero[FILAS][COLUMNAS];
    char tablero_usuario[FILAS][COLUMNAS];

    inicializarTablero(tablero);       
    inicializarTablero(tablero_usuario);       
    generarMinas(tablero);           

    
    while(1)
    {
        imprimirTablero(tablero_usuario);

        char x, y, NL;
        scanf("%c%c%c", &x, &y, &NL);
        x-='A';
        y-='0';

        int status = descubrirEspacio(tablero, tablero_usuario, x, y);
        if(status == 1 && contador != FILAS*COLUMNAS-CANTIDAD_MINAS){
            continue;
        }

        imprimirTablero(tablero_usuario);
        printf("Descubirste %i casillas de %i", contador, FILAS*COLUMNAS-CANTIDAD_MINAS);
        break;
    }
}
