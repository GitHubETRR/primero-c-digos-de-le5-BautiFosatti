#include <stdio.h>
#define UNO 1
#define TAMVEC 7

int vector[TAMVEC];
int resultado=0;

int main() {
	printf("--------------Bienvenido a mi programa--------------");
	printf("\nNecesito que me escribas 7 numeros para decirte su sumatoria: \n");
	for(int i=0; i<TAMVEC; i++) {
		printf("\n-Numero: %d\n",i+UNO);
		scanf("%d",&vector[i]);
		resultado=resultado+vector[i];
	}
	printf("\nEl resultado de su sumatoria, es igual a: %d",resultado);
	return 0;
}