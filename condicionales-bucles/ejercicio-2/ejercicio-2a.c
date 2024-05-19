#include <stdio.h>
#include <stdlib.h>

double valor_abs(double x) {
  if (x < 0) {
    x = x * -1;
  }
  return x;
}

int main(int argc, char *argv[]) {
  double x;
  x = atof(argv[1]);
  printf("%f\n", valor_abs(x));
  return 0;
}