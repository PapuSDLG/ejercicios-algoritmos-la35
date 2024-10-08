#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    FILE *fp1;
    char ch;
    int n = atoi(argv[1]);
    int limite = 0, cant_linea = 1, linea = 1;
    fp1 = fopen("./archivo-ejercicios/archivo-cat.txt", "r");
    if (fp1 == NULL) {
        printf("El archivo no se ha encontrado\n");
        return 1;
    }
    // El maximo de la cantidad de saltos lineas
    while((ch = fgetc(fp1)) != EOF) { 
        if (ch == '\n') {
            cant_linea++;
        }
    }
    rewind(fp1);
    /*Mostrar el contenido del archivo desde
    la ultima linea hasta una linea especifica*/
    while((ch = fgetc(fp1)) != EOF) {
        if (linea > cant_linea - n) {
            putchar(ch);
        } 
        else if (ch == '\n'){
            linea++;
        }
    }    
    printf("\n");
    fclose(fp1);
    return 0;
}