#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sumaRandom(int a, int b) {
  a = rand() % 7; // numeros random entre 0 y 7 
  b = rand() % 7;
  int c = a + b;
  return c;
}

int main(int argc, char* argv[]) {
  srand(time(NULL));
  int a, b;
  printf("La suma aleatoria es de = %d\n", sumaRandom(a, b));
  return 0;
}