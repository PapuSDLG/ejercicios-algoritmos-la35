#include <stdio.h>
#include <stdlib.h>
int main(int argc , char* argv[]) {
  int mult = 1;
  for (int i = 1; i < argc; i++) {
    if (atoi(argv[i]) == 0) {
      break;
    }
    mult *= atoi(argv[i]);
  }
  printf("El resultado de la multiplicacion es: %d\n", mult);
  return 0;
}