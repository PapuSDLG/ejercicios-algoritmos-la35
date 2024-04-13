#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    double a, formula;
    a = atof(argv[1]);
    formula = pow(cos(a),2) + pow(sin(a), 2);
    printf("El resultado es: %f\n", formula);
    return(0);
}