#include <stdio.h>
#include <stdlib.h>

// Medios de pago
double efectivo(double x) {
  double discount = x - (x * (15/100));
  return discount;
}
double transferencia(double x) {
  double discount = x - (x * (10/100));
  return discount;
}
double tarjetaCredito(double x) {
  double discount = x + (5/100);
  return discount;
}

int main(int argc, char* argv[]) {
  char c = argv[1][0];
  printf("%c\n", c);
  double x = atof(argv[2]);
  if (c == 'e') {
    // Efectivo
    printf("El precio final: %f\n", efectivo(x));
  } 
  else if (c == 't') {
    // Transferencia
    printf("Escaneado!");
    printf("El precio final: %f\n", transferencia(x));
  } 
  else if (c == 'c') {
    printf("El precio final: %f\n", tarjetaCredito(x));
  } 
  else {
    printf("El precio final: %f\n", x);
  }
  return 0;
}