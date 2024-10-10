#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp1 = fopen("./archivo-ejercicios/archivo-cat.txt", "r");
    char ch;
    int contador_palabra = 1, contador_caracteres = 0, saltos_linea = 1;
    if (fp1 == NULL) {
        printf("No se encontraron los archivos\n");
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF) {
        /*Detectar cada espacio como una nueva palabra
        incluyendo el final*/
        if (ch == ' ' || ch == '\n') {
            contador_palabra++;
        }
        if (ch == '\n') {
            saltos_linea++;
        }
        if (ch != '\n') {
            contador_caracteres++;
        }
    }

    fclose(fp1);
    printf("La cantidad de palabras es: %d\nLa cantidad de caracteres: %d\nLa cantidad de lineas: %d\n", contador_palabra, contador_caracteres, saltos_linea);
    return 0;
}