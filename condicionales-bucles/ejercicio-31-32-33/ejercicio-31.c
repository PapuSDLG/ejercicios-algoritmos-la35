#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
  int n = atoi(argv[1]);
  // Numeros primos
  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      n /= i;
      printf("%d ", i);
      i = 1;
    }
  }
  printf("\n");
  return 0;
}