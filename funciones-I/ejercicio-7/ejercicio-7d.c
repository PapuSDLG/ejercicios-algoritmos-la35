#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num_zero_to_number(int num) {
  int a = rand() % num;
  return a;
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  int num = atoi(argv[1]);
  printf("%d\n", num_zero_to_number(num));
  return 0;
}