#include <stdio.h>
#include <stdlib.h>
char* dosIguales(int a, int b) {
  char* verif = a == b ? "1" : "0";
  return verif;
}

int main(int argc, char* argv[]) {
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("%s\n", dosIguales(a, b));
  return 0;
}