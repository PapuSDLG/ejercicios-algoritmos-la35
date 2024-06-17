#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int tamañoMatriz = atoi(argv[1]);
  for (int i = 1; i <= tamañoMatriz; i++) {
    for(int j = 1; j <= tamañoMatriz; j++) {
      if((i + j) % 2 == 0) {
        printf(" ");
      }
      else {
        printf("* ");
      }
    }
    printf("\n");
  }
  return 0;
}