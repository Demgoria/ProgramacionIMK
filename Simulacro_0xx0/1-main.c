#include<stdio.h>
#include<stdlib.h>

int main() {
	float galones = 1;
	float miles = 0;
	float overalGalon = 0;
	float overalMile = 0;
	printf("ingresa los litros  de que  gasolina que usaste: ");
	scanf("%f",&galones);
	while (galones != -1) {
		printf("ingrese el numero de millas que consumiste: ");
		scanf("%f", &miles);
		if (galones != 0) {
			printf("Las millas/galón de este tanque fueron : %.4f\n", miles / galones);
			overalGalon += galones;
			overalMile += miles;
		}
		printf("ingresa los galones usados ");
		scanf("%f", &galones);
	}

	printf("El promedio  de millas/galón fue:  %.4f\n", overalMile / overalGalon);
	system("pause");
	return 1;
}