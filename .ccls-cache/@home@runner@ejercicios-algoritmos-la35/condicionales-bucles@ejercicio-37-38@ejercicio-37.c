#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int caraCeca() {
  int r = (rand() % 2) + 1;
  return r;
}

int main(int argc, char* argv[]) {
  srand(time(NULL));
  if (caraCeca() == 1) {
    printf("Cara\n");
  }
  else {
    printf("Ceca\n");
  }
  return 0;
}