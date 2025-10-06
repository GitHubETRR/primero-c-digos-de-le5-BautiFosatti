#include <stdio.h>
#define UNO 1
#define TAMVEC 4

int vector[TAMVEC];
float resultado=0;

int main() {
	printf("--------------Bienvenido a mi programa--------------");
	printf("\nNecesito que me escribas 7 numeros enteros para decirte su promedio: \n");
	for(int i=0; i<TAMVEC; i++) {
		printf("\n-Numero: %d\n",i+UNO);
		scanf("%d",&vector[i]);
		resultado=resultado+vector[i];
	}
	float promedio=resultado/TAMVEC;
	printf("\nEl promedio, es igual a: %.3f",promedio);
	return 0;
}
