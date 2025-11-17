#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

void CargaVector(int v[], int n);
void InvertirVector(int origen[], int destino[], int n);
void MostrarVector(int v[], int n);

int main() {
    printf("--------------Bienvenido a mi programa--------------\n");
    printf("\nEn este programa voy a invertir un vector:\n");
    
    int vectorA[TAM];
    int vectorB[TAM];

    srand(time(NULL)); 

    CargaVector(vectorA, TAM);
    InvertirVector(vectorA, vectorB, TAM);

    printf("\nVector original:\n");
    MostrarVector(vectorA, TAM);
    
    printf("\nVector invertido:\n");
    MostrarVector(vectorB, TAM);
    return 0;
}

void CargaVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = 20 + rand() % 71; 
    }
}

void InvertirVector(int origen[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[n - 1 - i];
    }
}

void MostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
