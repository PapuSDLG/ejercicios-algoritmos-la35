#include <stdio.h>
#include <stdlib.h>
//Saber si las coordenadas x,y pertenecen a uno de los
//cuatro cuaadrantes.

int main(int argc, char* argv[]) {
  int x, y;
  x = atoi(argv[1]);
  y = atoi(argv[2]);
  if (x > 0 && y > 0) {
    printf("Cuadrante I\n");
  }
  else if (x < 0 && y > 0) {
    printf("Cuadrante II\n");
  }
  else if (x < 0 && y < 0) {
    printf("Cuadrante III\n");
  }
  else if (x > 0 && y < 0) {
    printf("Cuadrante IV\n");
  }
  else {
    printf("Punto de origen\n");
  }
  return 0;
}