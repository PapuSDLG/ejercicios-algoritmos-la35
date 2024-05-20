#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int suma = 0;
  for (int i = 0; i <= n; i++) {
    suma += i;
  }
  printf("La suma de los primeros numeros %i es: %i\n", n, suma);
  return 0;
}