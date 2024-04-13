#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double t, resultado;
    t = atoi(argv[1]);
    resultado = sin(2*t) + sin(3*t);
    printf("El resultado de sen(2*%f) + sen(3*%f) es: %f", t, t, resultado );
    return(0);
}   