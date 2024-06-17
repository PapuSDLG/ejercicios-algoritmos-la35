#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[]) {
  double c, t, e;
  c = atoi(argv[1]);
  t = c;
  e = pow(10.0, -15);
  while (fabs(t - (c/t)) > e * t) {
    t = (c/t + t) / 2;
  }
  printf("El resultado es: %f\n", t);
  return 0;
}