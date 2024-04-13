#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    double salario_hora, cant_horas, cheque;
    salario_hora = atof(argv[1]);
    cant_horas = atof(argv[2]);
    cheque = salario_hora * cant_horas;
    printf("%.2f\n", cheque);
    return(0);
}