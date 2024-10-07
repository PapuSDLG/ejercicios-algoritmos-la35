#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int contador = 1;
    char verificador;
    fp = fopen("./archivo-ejercicios/saltos-linea.txt", "r");
    if (fp == NULL) {
        printf("Eror al abrir el archivo\n");
        return 1;
    }
    while (fscanf(fp, "%c", &verificador) == 1) {
        if (verificador == '\n') {
            contador++;
        }
    }
    fclose(fp);

    printf("Se han encontrado un total de: %d\n", contador);
    return 0;
}