#include <stdio.h>

int main() {
    FILE *fp1 = fopen("./archivo-ejercicios/archivo-numero.txt", "r");
    int array[10] = {0};
    int number = 0;
    if (fp1 == NULL) {
        printf("No se encontro el archivo");
        while (fscanf(fp1, "%d", &number) == 1) {
        }
        return 1;
    }
    return 0;
}