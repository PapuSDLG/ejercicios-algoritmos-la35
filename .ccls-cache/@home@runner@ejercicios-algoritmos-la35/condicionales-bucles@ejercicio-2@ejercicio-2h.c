#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i <= n; i++) {
    int cuadrado = i * i;
    printf("%i - %i\n", i, cuadrado);
  }
  return 0;
}