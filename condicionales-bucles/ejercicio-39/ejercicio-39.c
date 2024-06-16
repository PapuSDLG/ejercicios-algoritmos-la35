#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[]) {
  //Declaramos variables
  double almacenador = 0, contador = 0;
  int num = atoi(argv[1]);
  int cifras = atoi(argv[2]);
  // Almacena valores de las variables por linea de comandos
  double num_x = num;
  int cifras_x = cifras;
  for (int i = 1; i <= cifras; i++) {
    int reves = num % 10;
    cifras_x -= 1;
    almacenador = reves * pow(10, cifras_x);
    contador += almacenador;
    num = num / 10;
  }
  if (num_x == contador) {
    printf("Es capicuo\n");
  }
  else {
    printf("No es capicuo\n");
  }
  return 0;
}