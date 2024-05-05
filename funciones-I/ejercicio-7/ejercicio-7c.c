#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num_zero_to_ten() {
  int a = rand() % 11;
  return a;
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  printf("%d\n", num_zero_to_ten());
  return 0;
}