#include <stdio.h>

int main() {
    FILE *fp1;
    char ch; 
    fp1 = fopen("./archivo-ejercicios/archivo-cat.txt", "r");
    if (fp1 == NULL) {
        printf("No se encontro el archivo\n");
        return 1;
    }
    // Abrir el archivo y mostrar su contenido.
    while((ch = fgetc(fp1)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(fp1);
    return 0;
}