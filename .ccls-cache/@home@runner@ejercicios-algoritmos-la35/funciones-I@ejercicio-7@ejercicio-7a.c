#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomNumber() {
  int a = rand();
  return a;
}
int main(int argc, char* argv[]) {
  srand(time(NULL));
  printf("%d\n", randomNumber());
  return 0;
}