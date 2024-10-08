#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int limite = 0;
    int n = atoi(argv[1]);
    FILE *fp1;
    char ch;
    fp1 = fopen("./archivo-ejercicios/archivo-cat.txt", "r");
    if (fp1 == NULL) {
        printf("No se encontro el archivo\n");
        return 1;
    }
    /*Mostrar el contenido de un archivo especificando el numero de linea*/
    while ((ch = fgetc(fp1)) != EOF) {
        if (ch == '\n') {
            limite++;
        }
        putchar(ch);
        if (limite == n) {
            break;
        }
    }
    fclose(fp1);
    printf("\n");
    return 0;
}