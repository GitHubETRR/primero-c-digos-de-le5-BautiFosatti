#include <stdio.h>
#include <ctype.h>
#define UNO 1

void pasaMinuscula(char str[]);
int vocales(char str[]);
int cantidadVocales;

int main() {
    char texto[100];
    
    printf("----------Bienvenido a mi programa-----------\n");
    printf("Voy a pasar tu texto a todo minusculas y decirte sus vocales:\n");
    scanf("%[^\n]", texto);

    pasaMinuscula(texto);
    cantidadVocales=vocales(texto);

    printf("\n-Texto en minusculas: %s\n",texto);
    printf("-Con un total de %d vocales",cantidadVocales);

    return 0;
}

void pasaMinuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int vocales(char str[]) {
    int a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            a++;
        }
    }
    return a;
}
