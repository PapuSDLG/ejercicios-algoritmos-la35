#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
char* is_triangle(int a, int b, int c) {
  bool is_triangle = (a + b > c) && (b + c > a) && (c +a > b);
  char* verif = is_triangle ? "Es triangulo" : "No es triangulo";
  return verif;
}

int main(int argc, char* argv[]) {
  int a, b, c;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  printf("%s\n", is_triangle(a, b, c));
  return 0;
}