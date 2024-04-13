#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a, b, c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);

    int logico_a = a <= b + c; // falso
    int logico_b = b <= a + c; // falso
    int logico_c = c <= a + b; // falso

    char* resultado = (logico_a && logico_b && logico_c) ? "Verdadero\n" : "Falso\n";
    printf(resultado);
    return(0);
}