#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    //defino variables
    double u1, u2, v1, v2, resultado;
    //entrada de datos
    u1 = atof(argv[1]);
    u2 = atof(argv[2]);
    v1 = atof(argv[3]);
    v2 = atof(argv[4]);
    //formula del producto escalar de dos vectores
    resultado = u1 * v1 + u2 * v2;
    printf("El producto escalar de u*v = %f + %f * %f + %f\n", u1, v1, u2, v2);
    printf("Da como resultado: %f\n", resultado);
    return(0);
}