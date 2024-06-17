#include <stdlib.h> 
#include <stdio.h>

double basilea(int n) {
  double suma = 0;
  for (double i = 1; i <= n; i++) {
    double j = (1 / (i*i));
    suma += j;
  }
  return suma;
}

int main(int argc , char* argv[]) {
  double pi = 3.14159, suma = 0;
  int n = atoi(argv[1]);

  printf("La suma de los cuadrados de los reciprocos: %.5f\n", basilea(n));
  printf("es igual a pi*2 / 6 = %.5f\n", (pi * pi) / 6);
  return 0;
}