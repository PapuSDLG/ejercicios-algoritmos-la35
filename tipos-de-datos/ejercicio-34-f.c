#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    double x, v, t, gravedad;
    x = atof(argv[1]);
    v = atof(argv[2]);
    t = atof(argv[3]);
    gravedad = 9.80665;
    double tiroVertical = x + v * t - (0.5 * gravedad * pow(t, 2));

    printf("El resultado es: %f\n", tiroVertical);
    return(0);
}