#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp1 = fopen("./archivo-ejercicios/notas.txt", "r");
    char nombre[50];
    int nota1, nota2, promedio;

    printf("Nombre\tNota 1\tNota 2\tPromedio\n");

    while (fscanf(fp1, "%s %d %d", nombre, &nota1, &nota2) == 3) {
        promedio = (nota1 + nota2) / 2;
        printf("%s\t%d\t%d\t%d\n", nombre, nota1, nota2, promedio);
    }
    fclose(fp1);
    return 0;
}