#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char* ruleta(int r, int b) {
  r = rand() % 37;
  char* verif = (r == b ? "true" : "false");
  return verif;    
}

int main(int argc, char* argv[]) {
  srand(time(NULL));
  int r;
  int b = atoi(argv[1]);
  printf("%s\n", ruleta(r, b));
  return 0;
}