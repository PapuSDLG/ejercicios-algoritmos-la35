#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, intercambio;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("Valores de a y b antes del cambio: %d y %d\n", a, b);
    intercambio = a;
    a = b;
    b = intercambio;
    printf("Los valores actuales de a y b son: %d y %d\n", a, b);
    return(0);
}   