#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cuadratica(double x) {
  return pow(cos(x),2) + pow(sin(x), 2);
}

int main(int argc, char* argv[]) {
  double x;
  x = atof(argv[1]);
  printf("%f\n", cuadratica(x));
  return 0;
}