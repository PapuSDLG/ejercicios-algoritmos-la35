#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int valorAbsoluto(int a) {
  return abs(a);
}
int main(int argc, char* argv[]) {
  int a = atoi(argv[1]);
  printf("%d\n", valorAbsoluto(a));
  return 0;
}