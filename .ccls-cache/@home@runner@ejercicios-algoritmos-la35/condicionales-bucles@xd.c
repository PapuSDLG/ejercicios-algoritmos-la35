#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv) {
    int n;
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }
    n = atoi(argv[1]);
    if (n <= 0) {
        printf("El número debe ser positivo.\n");
        return 1;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d %d\n", i, i * i);
    }
    return 0;
}
