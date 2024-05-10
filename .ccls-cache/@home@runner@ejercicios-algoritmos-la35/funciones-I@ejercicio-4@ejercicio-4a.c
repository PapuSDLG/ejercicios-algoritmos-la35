#include <stdio.h>
#include <stdlib.h>
int dosIguales(int a, int b) {
  int verif = a == b ? 1 : 0;
  return verif;
}

int main(int argc, char* argv[]) {
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  return 0;
  printf("%d\n", dosIguales(a, b));
}