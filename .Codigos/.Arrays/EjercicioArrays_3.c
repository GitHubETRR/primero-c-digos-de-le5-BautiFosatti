#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define UNO 1
#define TAMVEC 50

int vector[TAMVEC];
int contarMayor();

int i;
int a;

int nMax=0;
int nRep=0;

int main() {
	srand(time(NULL));

	printf("\n--------------Bienvenido a mi programa--------------\n");
	printf("\n-En este codigo te mostrare la cantidad de veces que se repite el numero entero mas grande desde el 10 al 20 entre 50 valores:\n\n");

////////////////////////////////CONTAR 50 VECTORES/////////////
	for(i=0; i<TAMVEC; i++) {
		vector[i] = rand()%(0+11)+10;
	}
	for(i=0; i<TAMVEC; i++) {
		printf("Vector [%d] = %d\n",i+UNO,vector[i]);
		
///////////////////////////NUMERO MAS GRANDE DE LOS 50///////////////////
		if (vector[i]>nMax) {
			nMax=vector[i];
		}
	}
////////////////////////////CUANTO SE REPITE////////////

    for(i=0;i<TAMVEC;i++){
        if (vector[i]==nMax){
            nRep=nRep+UNO;
        }
        
    }
	
	printf("\nEl maximo del maximo %d y se repite %d veces",nMax,nRep);
	return 0;

}
