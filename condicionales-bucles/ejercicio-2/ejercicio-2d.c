#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pos_neg_zero(int x) {
  if (x > 0) {
    printf("Es positivo\n");
  }
  else if (x < 0) {
    printf("Es negativo\n");
  }
  else if (x == 0) {
    printf("Es cero\n");
  }
}

int main(int argc, char* argv[]) {
  int x = atoi(argv[1]);
  pos_neg_zero(x);
  return 0;
}