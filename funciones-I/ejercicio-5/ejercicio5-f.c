// Ejercicio 5f: Producto escalar entre dos vectores en el plano 
#include <stdio.h>
#include <stdlib.h>

double productoEscalar(double u1, double u2, double v1, double v2) {
  return u1 * v1 + u2 * v2;
}
int main(int argc, char *argv[]) {
  double u1, u2, v1, v2;
  u1 = atof(argv[1]);
  u2 = atof(argv[2]);
  v1 = atof(argv[3]);
  v2 = atof(argv[4]);
  printf("Producto escalar: %f\n", productoEscalar(u1, u2, v1, v2));
  return 0;
}