#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
  int r = (rand() % 8) + 1;
  if (r > 5) {
    return 6;
  }
  else {
    return r;
  }
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  printf("%d\n", dado());
  return 0;
}