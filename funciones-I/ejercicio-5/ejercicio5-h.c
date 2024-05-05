// Ejercicio 5h: Suma de dos vectores en el plano.
#include <stdio.h>
#include <stdlib.h>

void sumaVectores(double u1, double u2, double v1, double v2, double* x1, double* x2) { 
  *x1 = u1 + v1;
  *x2 = u2 + v2;
}

int main(int argc, char *argv[]) {
  double u1, u2, v1, v2;
  double x1, x2;
  u1 = atof(argv[1]);
  u2 = atof(argv[2]);
  v1 = atof(argv[3]);
  v2 = atof(argv[4]);
  sumaVectores(u1, u2, v1, v2, &x1, &x2);
  printf("La coordenada x: %f\nLa coordenada y: %f\n", x1, x2);
  return 0;
}