#include <stdio.h>
#include <stdlib.h>

char* yearBisiesto(int year) {
  //Es año bisiesto si es divisible por 4.
  char* verif = (year % 4 == 0 ? "Es bisiesto" : "No es bisiesto");
  return verif;
}

int main(int argc, char* argv[]) {
  int a = atoi(argv[1]);
  printf("%s\n", yearBisiesto(a));
  return 0;
}