#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int dia, mes;
    dia = atoi(argv[1]);
    mes = atoi(argv[2]);
    char* res = ((dia > 20 && dia < 31) ? ((mes > 2 && mes < 7) ? "Verdadero\n" : "Falso\n") : "Falso\n");
    printf(res);
    return(0);
}