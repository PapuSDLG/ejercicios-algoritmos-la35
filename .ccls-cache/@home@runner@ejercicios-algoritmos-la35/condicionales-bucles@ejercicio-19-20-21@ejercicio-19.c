#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[]) {
  int temp = 0;
  for (int i = 1; i < argc; i++) {
    int alm = atoi(argv[i]);
    // Numeros maximos
    if (alm > temp) {
      temp = alm;
    }
  }
  printf("El numero mayor es: %d\n", temp);
  return 0;
}