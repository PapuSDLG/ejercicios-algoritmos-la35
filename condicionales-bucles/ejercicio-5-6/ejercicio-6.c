#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num;
  // Definir numero
  num = atoi(argv[1]);
  for (int i = 1; i <= num; i++) {
    printf("Hello World\n");
  }
  return 0;
}