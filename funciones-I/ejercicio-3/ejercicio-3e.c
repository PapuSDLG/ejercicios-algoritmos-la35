#include <stdio.h>
#include <stdlib.h>

double polinomio(double x, double y, double z) {
  return 2*x + 3*y + 4*z;
}

int main(int argc, char* argv[]) {
  double x, y, z;
  x = atof(argv[1]);
  y = atof(argv[2]);
  z = atof(argv[3]);
  printf("%f\n", polinomio(x, y, z));
  return 0;
}