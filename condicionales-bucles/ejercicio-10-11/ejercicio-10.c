#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a, b, t;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  printf("%d\n", a);
  return 0;
}