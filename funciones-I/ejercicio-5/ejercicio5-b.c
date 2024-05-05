#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double x, double y) {
  return sqrt(x*x + y*y);
}
int main(int argc, char *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  printf("El valor es: %f\n", distance(x, y));
  return 0;
}