#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);

  if (b > a) {
    for (int i = a; i <= b; i++) {
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