#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *array[6] = {"Saludo", "Despedida", "Edad", "Nombre", "Apellido", "Salir"};
    int n;
    printf("1. %s\n2. %s\n3 %s\n4 %s\n5 %s\n6 %s\n", array[0], array[1], array[2], array[3], array[4], array[5]);
    while(1) {
        printf("Escoja una de las opciones\n");
        scanf("%d", &n);
        if (n == 1) {
            printf("Hola\n");
        }
        else if (n == 2) {
            printf("Adios!\n");
        }
        else if (n == 3) {
            printf("18\n");
        }
        else if (n == 4) {
            printf("Lucas!\n");
        }
        else if (n == 5) {
            printf("Mongolia\n");
        }
        else if (n == 6) {
            break;
        }
        else {
            printf("Numero incorrecto.");
        }
    }
    return 0;
}