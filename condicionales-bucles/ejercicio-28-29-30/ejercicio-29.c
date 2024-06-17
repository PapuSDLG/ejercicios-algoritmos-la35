#include <stdio.h>
#include <stdlib.h>

double sumaReciproca(int n) {
  double suma = 0;
  for (double i = 1; i <= n; i++) {
    double j = (1 / i);
    suma += j;
  }
  return suma;
}

int main(int argc, char* argv[]) {
  int n = atoi(argv[1]);
  printf("El resultado es: %f\n", sumaReciproca(n));
  return 0;
}