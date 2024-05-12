#include <stdio.h>
#include <stdlib.h>

double cuadratica(double x) {
  return 9*(x*x) + 3*x + 12;
}

int main(int argc, char* argv[]) {
  double x;
  x = atof(argv[1]);
  printf("%f\n", cuadratica(x));
  return 0;
}