#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int x, y, distancia;
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    distancia = sqrt(x*x + y*y);
    printf("La distancia entre los dos puntos es: %d", distancia);
    return(0);
}   