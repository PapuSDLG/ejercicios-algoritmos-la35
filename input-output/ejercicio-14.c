#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;
    int n;
    fp1 = fopen("./archivo-ejercicios/archivo-cp.txt", "r");
    fp2 = fopen("./archivo-ejercicios/archivo-cat.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("No se encuentra el/los archivos\n");
        return 1;
    }
    printf("Desea sobreescribir el contenido de archivo-cat?\n");
    printf("1. Si\n2. No\n");
    scanf("%d", &n);
    if (n == 1) {
        while ((ch = fgetc(fp1)) != EOF) {
            fputc(ch, fp2);
        }       
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}