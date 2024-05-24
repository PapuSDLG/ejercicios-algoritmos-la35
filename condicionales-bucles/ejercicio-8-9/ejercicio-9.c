#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char* argv[]){
  int a = 0, b = 1, c;
  int cantidad = atoi(argv[1]);
  printf("Serie de Fibonacci: \n");
  // Secuencia de Fibonacci
  for (int i = 0; i < cantidad; i++) {
    printf("%d \n", a);
    c = a + b;
    a = b;
    b = c;
  }
  return 0;
}