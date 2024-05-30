#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  // Definir dos variables enteras
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);

  if (b > a) {
    // Itera hasta llegar al valor de b
    for (int i = a; i <= b; i++) {
      // Verifica si es divisible por 3
      if (i % 3 == 0) {
        printf("El numero %d es divisible por 3\n", i);
      }
    }
  }
  else {
    printf("La variable b debe ser mayor que a.\n");
  }
  return 0;
}