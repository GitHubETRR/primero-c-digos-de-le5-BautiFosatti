#include <stdio.h>
#define UNO 1
#define TAMVEC 7

int sumaVector(int vec[], int tam);

int main() {
	int vector[TAMVEC];
	int resultado = 0;
	printf("--------------Bienvenido a mi programa--------------");
	printf("\nNecesito que me escribas 7 numeros enteros para decirte su sumatoria: \n");
	for(int i = 0; i < TAMVEC; i++) {
		printf("\n-Numero: %d\n", i + UNO);
		scanf("%d", &vector[i]);
	}
	resultado = sumaVector(vector, TAMVEC);
	printf("\nEl resultado de su sumatoria es: %d", resultado);
	return 0;
}

int sumaVector(int vec[], int tam) {
	int suma = 0;
	for(int i = 0; i < tam; i++) {
		suma += vec[i];
	}
	return suma;
}
