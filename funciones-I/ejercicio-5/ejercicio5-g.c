// Ejercicio 5g: Producto escalar entre tres vectores en el espacio
#include <stdio.h>
#include <stdlib.h>

double productoEscalarEspacio(double u1, double u2, double u3, double v1, double v2, double v3) {
  return u1 * v1 + u2 * v2 + u3 * v3;
}

int main(int argc, char *argv[]) {
  double u1, u2, u3, v1, v2, v3;
  u1 = atof(argv[1]);
  u2 = atof(argv[2]);
  u3 = atof(argv[3]);
  v1 = atof(argv[4]);
  v2 = atof(argv[5]);
  v3 = atof(argv[6]);
  printf("Producto escalar: %f\n", productoEscalarEspacio(u1, u2, u3, v1, v2, v3));
  return 0;
}