#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    char* a_resultado = (a % b == 0) ? "Verdadero\n" : "Falso\n";
    char* b_resultado = (b % a == 0) ? "Verdadero\n" : "Falso\n";
    printf("Es divisible %d / %d?: ", a, b);
    printf(a_resultado);
    printf("Es divisible %d / %d?: ", b, a);
    printf(b_resultado);
    return(0);
}