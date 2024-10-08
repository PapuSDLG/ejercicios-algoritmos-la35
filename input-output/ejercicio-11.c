#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("./archivo-ejercicios/archivo-espacio-tab.txt", "r");
    fp2 = fopen("./archivo-ejercicios/archivo-sinespacioytab.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error no se encontraron los archivos\n");
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF) {
        if (ch != '\n' && ch != '\t' && ch != ' ') {
            fputc(ch, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}