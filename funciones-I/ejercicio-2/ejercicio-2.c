#include <stdio.h>
#include <stdlib.h>

void saludar(char* name) {
  printf("Hola, %s\n", name);
}

int main(int argc, char* argv[]) {
  char* name = argv[1];
  saludar(name);
  return 0;
}