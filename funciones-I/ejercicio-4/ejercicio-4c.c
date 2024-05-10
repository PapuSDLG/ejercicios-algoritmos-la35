#include <stdio.h>
#include <stdlib.h>

int mayorNum(int a, int b) {
  return a > b ? a : b;
}

int main(int argc, char* argv[]) {
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("%d\n", mayorNum(a, b));
  return 0;
}