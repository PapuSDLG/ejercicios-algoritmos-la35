#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a, b, division;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  if (a % b == 0) {
    printf("%d\n", a / b);
  }
  else {
    printf("No se pueden dividir\n");
  }
}