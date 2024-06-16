#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int n = atoi(argv[1]);
  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ( (j % i == 0) || (i % j == 0) ) {
        printf("* ");
      }
      else {
        printf("0 ");
      }
    }
    printf("%d", i);
    printf("\n");
  }
  return 0;
}