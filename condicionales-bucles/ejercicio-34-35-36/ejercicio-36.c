#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int x, y; 
  x = atoi(argv[1]);
  y = atoi(argv[2]);
  if (x > y) {
    x = y;
  }
  printf("El valor menor es: %d\n", x);
  return 0;
}