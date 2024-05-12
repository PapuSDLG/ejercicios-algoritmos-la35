#include <stdio.h>
#include <stdlib.h>

double sumatoria_gauss(double x) {
  return ((x * (x + 1)) / 2);
}

int main(int argc, char* argv[]) {
  double x;
  x = atof(argv[1]);
  printf("%f\n", sumatoria_gauss(x));
  return 0;
}