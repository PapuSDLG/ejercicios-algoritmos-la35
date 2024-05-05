#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double x1, double x2, double y1, double y2) {
  return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
int main(int argc, char *argv[]) {
  double x1 = atof(argv[1]);
  double x2 = atof(argv[2]);
  double y1 = atof(argv[3]);
  double y2 = atof(argv[4]);
  printf("El valor de la distancia entre dos puntos: %f\n", distance(x1, x2, y1, y2));
  return 0;
}