#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num_zero_to_hundred() {
  int a = rand() % 100;
  return a;
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  printf("%d\n", num_zero_to_hundred());
  return 0;
}