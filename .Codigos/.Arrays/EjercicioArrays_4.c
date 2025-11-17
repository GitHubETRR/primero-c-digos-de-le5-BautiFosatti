#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UNO 1
#define TAMVEC 100
#define MAXmain 40
#define MINmain 10

int vector[TAMVEC];
int nMax, nMin;

int encontrarMaximo();
int encontrarMinimo();
void mostrarPosicionesMax(int maximo);

int main() {
    srand(time(NULL));
    printf("\n--------------Bienvenido a mi programa--------------\n");
    printf("\nGenerando 100 valores aleatorios entre 10 y 40...\n\n");

    for (int i = 0; i < TAMVEC; i++) {
        vector[i] = rand() % (MAXmain - MINmain + UNO) + MINmain;
        printf("Vector[%d] = %d\n", i + UNO, vector[i]);
    }
     nMax = encontrarMaximo();
    nMin = encontrarMinimo();
    printf("\nEl máximo es: %d\n", nMax);
    printf("El mínimo es: %d\n", nMin);
    printf("\nPosiciones donde aparece el máximo:\n");
    mostrarPosicionesMax(nMax);
    return 0;
}
int encontrarMaximo() {
    int max = vector[0];
    for (int i = UNO; i < TAMVEC; i++) {
        if (vector[i] > max) {
            max = vector[i];
        }
    }
    return max;
}
int encontrarMinimo() {
    int min = vector[0];
    for (int i = UNO; i < TAMVEC; i++) {
        if (vector[i] < min) {
            min = vector[i];
        }
    }
    return min;
}
void mostrarPosicionesMax(int maximo) {
    for (int i = 0; i < TAMVEC; i++) {
        if (vector[i] == maximo) {
            printf("Vector[%d] = %d\n", i + UNO, maximo);
        }
    }
}
