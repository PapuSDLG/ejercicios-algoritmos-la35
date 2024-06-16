#include <stdio.h>
#include <stdlib.h>

double f(double x) {
  return -4*(4*4) + 12*x;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  if (n < 0) {
    printf("N tiene que ser positivo\n");
    return 1;
  }
  double A, x, b;
  A = 0;
  x = 0;
  b = 3 / n;
  while (x < 3) {
    double h = f(x);
    double a = b * h;
    A += a;
    x += b;
  }
  printf("%.2f\n", A);
  return 0;
}