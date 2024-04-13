#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num1, num2, num3, num4, num5;
    int contador_1;
    contador_1 = 0;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    num3 = atoi(argv[3]);
    num4 = atoi(argv[4]);
    num5 = atoi(argv[5]);
    contador_1 += (num1 % 2 != 0) ? num1 : 0;
    contador_1 += (num2 % 2 != 0) ? num2 : 0;
    contador_1 += (num3 % 2 != 0) ? num3 : 0;
    contador_1 += (num4 % 2 != 0) ? num4 : 0;
    contador_1 += (num5 % 2 != 0) ? num5 : 0;
    printf("El resultado de la suma es: %d\n", contador_1);
    return(0);
}