// Funcion: devolver valor numerico en la tabla ASCII

#include <stdio.h>
#include <stdlib.h>

// Valor numerico en ASCII
int value_ascii(char *a) {
  return printf("%d\n", *a);
}

int main(int argc, char *argv[]) {
  int a = value_ascii(argv[1]);
  return 0;
}