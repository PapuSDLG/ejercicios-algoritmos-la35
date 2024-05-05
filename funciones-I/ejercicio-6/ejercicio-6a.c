#include <stdio.h>
#include <stdlib.h>

char* divisor(int a, int b) {
  return (a % b == 0 ? "Es divisor" : "No es divisor");
}

int main(int argc, char* argv[]) {
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("El numero: %d %s\n", b, divisor(a, b));
  return 0;
}