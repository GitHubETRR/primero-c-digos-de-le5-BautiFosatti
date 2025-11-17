#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UNO 1
#define TAMVEC 5

int vectorA[TAMVEC];
int vectorB[TAMVEC];

int productoEscalar();

int main() {
	srand(time(NULL));

	printf("--------------Bienvenido a mi programa--------------\n");
	printf("\n-En este código multiplicaré dos vectores A y B de forma escalar:\n\n");

	printf("-Componentes del Vector A:\n");
	for (int i = 0; i < TAMVEC; i++) {
		vectorA[i] = rand() % (30 + UNO) + UNO;
		printf("A%d = %d\n", i + UNO, vectorA[i]);
	}

	printf("\n-Componentes del Vector B:\n");
	for (int i = 0; i < TAMVEC; i++) {
		vectorB[i] = rand() % (30 + UNO) + UNO;
		printf("B%d = %d\n", i + UNO, vectorB[i]);
	}

	int resultado = productoEscalar();
	printf("\n--El resultado del producto escalar entre los vectores A y B es igual a %d--\n", resultado);
	return 0;
}

int productoEscalar() {
	int total = 0;
	for (int i = 0; i < TAMVEC; i++) {
		total += (vectorA[i] * vectorB[i]);
	}
	return total;
}

