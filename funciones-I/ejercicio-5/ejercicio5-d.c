#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int salario(int horas, int valor) {
  int salario = horas * valor;
  return salario;
}
int main(int argc, char *argv[]) {
  int horas = atoi(argv[1]);
  int valor = atoi(argv[2]);
  printf("Trabajo %d horas a %d pesos por hora, salario: %d\n", horas, valor, salario(horas, valor));
  return 0;
}