#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int d = atoi(argv[1]);
    printf("año -> %d\n", d/ 365);
    d %= 365;
    printf("semana -> %d\n", d/ 7);
    d %= 7;
    printf("dia -> %d\n", d/ 1);
    d %= 365;
    return(0);
}