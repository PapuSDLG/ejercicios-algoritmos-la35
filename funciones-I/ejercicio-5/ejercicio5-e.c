#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cuadratica(double a, double b, double c, double* x1, double* x2) {
  double discriminante = b*b - 4*a*c;
  *x1 = ((-b + sqrt(discriminante))/ (2 * a));
  *x2 = ((-b - sqrt(discriminante))/ (2 * a));
}

int main(int argc, char *argv[]) {
  double a, b, c;
  double x1, x2;
  a = atof(argv[1]);
  b = atof(argv[2]);
  c = atof(argv[3]);
  cuadratica(a, b, c, &x1, &x2);
  printf("%f\n%f\n", x1, x2);
  return 0;
}