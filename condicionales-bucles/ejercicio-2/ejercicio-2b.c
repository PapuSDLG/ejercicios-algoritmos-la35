#include <stdio.h>
#include <stdlib.h>

double tresNumerosMax(double x, double y, double z) {
  if (x > y && x > z) {
    return x;
  }
  else if (y > x && y > z) {
    return y;
  }
  else {
    return z;
  }
}

int main(int argc, char *argv[]) {
  double x, y, z;
  x = atof(argv[1]);
  y = atof(argv[2]);
  z = atof(argv[3]);
  printf("%f\n", tresNumerosMax(x, y, z));
  return 0;
}