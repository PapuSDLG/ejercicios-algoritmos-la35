#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool secantes(int a, int b, int c, int d) {
  return a != c;
}

int main(int argc, char* argv[]) {
  int a, b, c, d;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  d = atoi(argv[4]);
  printf("%d", secantes(a, b, c, d));
  return 0;
}