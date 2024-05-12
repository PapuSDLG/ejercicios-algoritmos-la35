#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
  int r = (rand() % 8) + 1;
  return r > 5 ? 6 : r;
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  printf("%d\n", dado());
  return 0;
}