#include <stdio.h>
#include <stdlib.h>

double suma(double x, double y) {
  return x + y;
}

int main(int argc, char* argv[]) {
  double x, y;
  x = atof(argv[1]);
  y = atof(argv[2]);
  printf("%f\n", suma(x, y));
  return 0;
}