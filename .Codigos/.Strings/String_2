#include <stdio.h>
#include <ctype.h>

void pasaMinuscula(char str[]);

int main() {
    char texto[100];
    
    printf("----------Bienvenido a mi programa-----------\n");
    printf("voy a pasar tu texto a todo minusculas:\n");
    scanf("%[^\n]", texto);

    pasaMinuscula(texto);

    printf("Texto en minusculas: %s\n", texto);

    return 0;
}

void pasaMinuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}
