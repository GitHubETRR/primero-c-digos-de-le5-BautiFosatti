#include <stdio.h>
#define UNO 1
#define TAMVEC 4

int sumaVector(int vec[], int tam);
float promedioVector(int vec[], int tam);

int main() {
    int vector[TAMVEC];
    printf("--------------Bienvenido a mi programa--------------");
    printf("\nNecesito que me escribas 4 numeros enteros para decirte su promedio: \n");

    for(int i = 0; i < TAMVEC; i++) {
        printf("\n-Numero: %d\n", i + UNO);
        scanf("%d", &vector[i]);
    }
    float promedio = promedioVector(vector, TAMVEC);
    printf("\nEl promedio es: %.3f", promedio);
    return 0;
}

int sumaVector(int vec[], int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++) {
        suma += vec[i];
    }
    return suma;
}
float promedioVector(int vec[], int tam) {
    int suma = sumaVector(vec, tam);
    return (float)suma / tam;
}
