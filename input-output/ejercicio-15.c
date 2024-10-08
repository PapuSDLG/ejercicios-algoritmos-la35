#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp1;
    int contador = 1;
    char ch;
    fp1 = fopen("./archivo-ejercicios/archivo-espacio-tab.txt", "r");

    if (fp1 == NULL) {
        printf("Error no se encontro el archivo\n");
        return 1;
    }
    printf("\t%d ", contador);
    while((ch = fgetc(fp1)) != EOF) {
        putchar(ch);
        if (ch == '\n') {
            contador++;
            printf("\t%d ", contador);
        }
    }
    printf("\n");
    fclose(fp1);
    return 0;
}