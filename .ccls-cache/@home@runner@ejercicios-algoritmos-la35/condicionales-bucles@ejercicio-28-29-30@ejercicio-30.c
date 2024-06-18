#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int caraCeca() {
  int r = (rand() % 2) + 1;
  return r;
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int s, g, t;
  s = atoi(argv[1]); // cantidad de dinero inicial
  g = atoi(argv[2]); // objetivo de dinero que conseguir
  t = atoi(argv[3]); // Experimentos
  double victorias = 0, cantInicial = s;
  for (int i = 1; i <= t; i++) {
    int cara_seca = caraCeca();
    if (s == 0) {
      s = cantInicial;
    }
    // Gano o perdio?
    else if (cara_seca == 1) {
      s = 2 * s;
      victorias += 1;
    }
    else if (cara_seca == 2) {
      s = 0;
    }
  }
  double probabilidad = (victorias / t) * 100;
  printf("%.2f de probabilidad\n", probabilidad);
  return 0;
}