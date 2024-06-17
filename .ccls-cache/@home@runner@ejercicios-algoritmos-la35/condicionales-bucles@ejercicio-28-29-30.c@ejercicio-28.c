#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* argv[]) {
  int n = atoi(argv[1]);
  int potencia = 2;
  // Orden descendente de las potencias segun la variable n 
  while (potencia <= n) {
    potencia *= 2;
  }
  potencia /= 2;
  
  for (int i = potencia; i >= 1; i /= 2) {
    if (n >= i) {
      printf("1");
      n -= i;
    } 
    else {
      printf("0");
    }
  }
  printf("\n");
  return 0;
}