#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num_min_between_max(int a, int b) {
  int rango = b - a;
  int numRandom = rand() % rango + a;
  return numRandom;
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("%d\n", num_min_between_max(a, b));
  return 0;
}