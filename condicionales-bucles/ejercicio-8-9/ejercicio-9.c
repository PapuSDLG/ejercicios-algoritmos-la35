#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num, suma = 0, F;
  num = atoi(argv[1]);
  for (int i = 0; i <= num; i++){
    suma += i;
    printf("%d\n", suma);
  }
  return 0;
}