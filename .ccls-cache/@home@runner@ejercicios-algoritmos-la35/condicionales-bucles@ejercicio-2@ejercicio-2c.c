#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
  double a, b, c;
  a = atof(argv[1]);
  b = atof(argv[2]);
  c = atof(argv[3]);
  double discri = b*b - 4*a*c;
  if (discri > 0) {
    double x1 = (-b + sqrt(discri)) / (2*a);
    double x2 = (-b - sqrt(discri)) / (2*a);
    printf("La primera raiz es: %f\n La segunda raiz es: %f\n", x1, x2);
  }
  else if (discri == 0) {
    double x1 = -b / (2*a);
    printf("La raiz es: %f\n", x1);
  }
  else {
    printf("No hay raices reales.\n");
  }
  return 0;
}