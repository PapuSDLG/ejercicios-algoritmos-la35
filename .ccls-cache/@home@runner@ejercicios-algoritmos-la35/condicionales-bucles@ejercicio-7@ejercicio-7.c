#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  for (int i = 1000; i <= 1999; i++) {
    printf("%d ", i);
    if (i % 5 == 0) {
      printf("\n");
    }
  }
  return 0;
}