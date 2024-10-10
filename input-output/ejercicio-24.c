#include <stdio.h>
#include <stdlib.h>
void tomar_notas() {
    FILE *fp = fopen("texto.txt", "a");
    char cadena[100];
    while (fgets(cadena, 100, stdin) != NULL) {
        fprintf(fp, "%s", cadena);
    }
    fclose(fp);
}

void ver_notas() {
    FILE *fp = fopen("texto.txt", "r");
    char ch;
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}

void borrar_notas() {
    FILE *fp = fopen("texto.txt", "w");
    if (fp != NULL) {
        fclose(fp);
    }
}


int main(int argc, char *argv[]) {
    int n;
    printf("Escoge las siguientes opciones.\n");
    printf("1. Tomar notas\n2. Ver notas\n3. Borrar notas\nOpcion ");
    scanf("%d", &n);
    switch(n) {
        case 1:
            tomar_notas();
            break;
        case 2:
            ver_notas();
            break;
        case 3:
            borrar_notas();
            break;
        default:
            puts("Opcion incorrecta, presione enter para continuar");
            getchar();
            break;
    }
    printf("\n");
    return 0;
}