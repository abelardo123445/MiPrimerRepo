
#include<stdio.h>
#include<stdlib.h>

int main() {
	float gallones = 1;
	float millas = 0;
	float totalgalones = 0;
	float totalmillas = 0;
	printf("Dime los litros de gasolina que usaste: ");
	scanf("%f",&gallones);
	while (gallones != -1) {
		printf("Dime las millas que consumiste: ");
		scanf("%f", &millas);
		if (gallones != 0) {
			printf("Las millas/galón de este tanque fueron : %.4f\n", millas / gallones);
			totalgalones += gallones;
			totalmillas += millas;
		}
		printf("Dime los galones usados ");
		scanf("%f", &gallones);
	}

	printf("El promedio general de millas/galón fue:  %.4f\n", totalmillas / totalgalones);
	system("pause");
	return 1;
}