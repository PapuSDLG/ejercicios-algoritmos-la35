#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    //argumentos
    double P = atof(argv[1]);
    double t = atof(argv[2]);
    double r = atof(argv[3]);
    double rt = r * t;
    //proceso
    double cant_dinero = P * pow((1 + r), t);
    printf("%f", cant_dinero);
    return(0);
}