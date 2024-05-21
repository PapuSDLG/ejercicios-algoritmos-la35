#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Numero random entre 0 y 100
double numRandom() {
  double r = rand() % 101;
  return r;
}
int main(int argc, char* argv[]) {
  // Semilla aleatoria para una mejor precision
  srand(time(NULL));
  // Definido el numero, contador y la suma
  double num, contador = 0, suma = 0;
  num = atoi(argv[1]);
  for (int i = 1; i <= num; i++) {
    /* r recibe el valor deretorno de numRandom() y se adiciona a la variable suma */ 
    int r = numRandom();
    printf("%d\n", r);
    suma += r;
    contador += 1;
  }
  // Se calcula el promedio 
  double promedio = suma/contador;
  printf("El promedio es: %f\n", promedio);
  return 0;
}