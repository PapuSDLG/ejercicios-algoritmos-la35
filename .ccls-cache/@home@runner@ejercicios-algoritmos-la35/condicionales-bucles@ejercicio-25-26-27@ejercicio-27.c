#include <stdlib.h> 
#include <stdio.h>

int main(int argc , char* argv[]) {
  int n = atoi(argv[1]), j = 2, k = 1;
  if (n <= 0) {
    return 1;
  }

  for (int i = 1; i <= n; i++) {
    j = j * k;
    if (k == 1) {
      k++;
    }
    printf("2^%d -> %d\n", i, j);
  }
  return 0;
}