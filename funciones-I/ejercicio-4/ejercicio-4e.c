#include <stdio.h>
#include <stdlib.h>

double promedio(double a, double b) {
  return (a + b) / 2;
}

int main(int argc, char* argv[]) {
  double a, b;
  a = atof(argv[1]);
  b = atof(argv[2]);
  printf("%f\n", promedio(a, b));
  return 0;
}