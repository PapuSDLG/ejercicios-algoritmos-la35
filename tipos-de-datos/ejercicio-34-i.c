#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num1, num2, num3;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    num3 = atoi(argv[3]);
    int logico_ascendente = ((num1 > num2 && num1 > num3) && (num2 > num3 && num2 < num1) && (num3 < num2 && num3 < num1));
    int logico_descendente = ((num1 < num2 && num1 < num3) && (num2 < num3 && num2 > num1) && (num3 > num2 && num3 > num1));
    char* respuesta = ( logico_ascendente  ? "Verdadero\n" : (logico_descendente ? "Verdadero\n" : "Falso\n"));
    printf(respuesta);
    return(0);
}