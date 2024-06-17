#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  for (int i = 97; i <= 122; i++) {
    printf("%c ", i);
  }
  printf("\n");
  // printf("%c\n", 95); - Codigo ASCII
  return 0;
}