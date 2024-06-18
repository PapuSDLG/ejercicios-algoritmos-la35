#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
  //Declaramos variables
  int num, copiaNumero, numInvertido, reves;
  num = atoi(argv[1]);
  copiaNumero = num;
  numInvertido = 0;
  while (copiaNumero > 0) {
    reves = copiaNumero % 10;
    numInvertido = numInvertido * 10 + reves; 
    copiaNumero /= 10;
  }
  if (num == numInvertido) {
    printf("Es capicuo\n");
  }
  else {
    printf("No es capicuo\n");
  }
  return 0;
}