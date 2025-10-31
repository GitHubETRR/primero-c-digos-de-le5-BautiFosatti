#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define UNO 1
#define TAMVEC 5

int vectorA[TAMVEC];
int vectorB[TAMVEC];
int resultado=0;
int i;

int main() {
	srand(time(NULL));
	printf("\n--------------Bienvenido a mi programa--------------\n");
	printf("\n-En este codigo multiplicare dos vectores A y B de forma escalar:\n\n");

////////////////////////////////CONTAR 5 NUMEROS PARA EL VECTOR A /////////////
	printf("-Componentes del Vector A:\n");
	for(i=0; i<TAMVEC; i++) {
		vectorA[i] = rand()%(0+31)+UNO;
		printf("A%d=%d\n",i+UNO,vectorA[i]);
	}

////////////////////////////////CONTAR 5 NUMEROS PARA EL VECTOR B /////////////
	printf("\n-Componentes del Vector B:\n");
	for(i=0; i<TAMVEC; i++) {
		vectorB[i] = rand()%(0+31)+UNO;
		printf("B%d=%d\n",i+UNO,vectorB[i]);
	}

	for(i=0; i<TAMVEC; i++) {
		resultado=resultado+vectorB[i]*vectorA[i];
	}
	
	printf("\n--El resultado del producto escalar entre los vectores A y B es igual a %d--",resultado);
	return 0;


}


