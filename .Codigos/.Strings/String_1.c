#include <stdio.h>
#include <string.h>

int Dimension(char texto[]);

int main() {
    char cad[100];
    
    printf("---------Bienvenido a mi programa---------\n");
    printf("Ingrese una palabra para que te diga su largo: \n");
    scanf("%99s", cad); 

    int largo = Dimension(cad);

    printf("\nLargo de la cadena: %d\n", largo);

    return 0;
}

int Dimension(char texto[]) {
    return strlen(texto);
}
