#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num = atoi(argv[1]);
  int factorial = 1;
  if (num < 0) {
    printf("Error\n");
    return 0;
  }
  // Factorial (1, 2, 6)
  for (int i = 1; i <= num; i++) {
    factorial = factorial * i;
  }
  printf("%d\n", factorial);
  return 0;
}