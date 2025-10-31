#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define UNO 1
#define TAMVEC 100

int vector[TAMVEC];
int contarMayor();

int i;
int a;

int nMax=0;
int nRepMax=0;

int nMin=20;
int nRepMin=0;

int main() {
	srand(time(NULL));

	printf("\n--------------Bienvenido a mi programa--------------\n");
	printf("\n-En este codigo te mostrare la cantidad de veces que se repite el numero entero mas grande y mas chico desde el 10 al 40 entre 100 valores y con sus ubicaciones:\n\n");

////////////////////////////////CONTAR 50 VECTORES/////////////
	for(i=0; i<TAMVEC; i++) {
		vector[i] = rand()%(0+31)+10;
	}
	for(i=0; i<TAMVEC; i++) {
		printf("Vector [%d] = %d\n",i+UNO,vector[i]);

///////////////////////////NUMERO MAS GRANDE DE LOS 50///////////////////
		if (vector[i]>nMax) {
			nMax=vector[i];
		}

		if (vector[i]<nMin) {
			nMin=vector[i];
		}
	}
////////////////////////////CUANTO SE REPITE////////////
	for(i=0; i<TAMVEC; i++) {
		if (vector[i]==nMin) {
			nRepMin=nRepMin+UNO;
		}

	}

	for(i=0; i<TAMVEC; i++) {
		if (vector[i]==nMax) {
			nRepMax=nRepMax+UNO;
		}

	}
///////////////////Sus maximos y donde estan/////////////
	printf("\n-El maximo es %d y se repite %d veces en los vectores:\n",nMax,nRepMax);
	for(i=0; i<TAMVEC; i++) {
		if (vector[i]==nMax) {
			printf("Vector [%d] = %d\n",i,nMax);
		}
	}

/////////////////Sus Minimos y donde estan//////////
	printf("\n-El minimo es %d y se repite %d veces en los vectores:\n",nMin,nRepMin);
	for(i=0; i<TAMVEC; i++) {
		if (vector[i]==nMin) {
			printf("Vector [%d] = %d\n",i,nMin);
		}
	}
	return 0;

}
