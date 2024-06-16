#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num = atoi(argv[1]);
  /* La cifra debe concordar con el numero de cifras del numero
  para que sea preciso */
  int cifras = atoi(argv[2]);
  for (int i = 1; i <= cifras; i++) {
    // La variable reves devuelve la ultima cifra.
    int reves = num % 10;
    int almacenador = reves;
    // Se divide por 10 para que avance a la siguiente cifra.
    num = num / 10;
    printf("%d", almacenador);
  }
  printf("\n");
  return 0;
}