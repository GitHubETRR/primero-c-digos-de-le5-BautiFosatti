#include <stdio.h>
#include <ctype.h>
#define UNO 1

void Invertir(char normal[],char alRevez[]);

int main() {
    char texto[100];
    char textoInv[100];
    
    printf("----------Bienvenido a mi programa-----------\n");
    printf("Voy a invertir tu texto:\n");
    scanf("%[^\n]", texto);

    Invertir(texto,textoInv);
    
    printf("\nTexto en normal: %s\n", texto);
    printf("Texto en invertido: %s\n", textoInv);
    
    return 0;
}

void Invertir(char normal[], char alRevez[]) {
    int largo = 0;
    
    for (int i = 0; normal[i] != '\0'; i++) {
        largo++;
    }
    
    for (int i = 0; i < largo; i++) {
        alRevez[i] = normal[largo - 1 - i];
    }

    alRevez[largo] = '\0';
}
