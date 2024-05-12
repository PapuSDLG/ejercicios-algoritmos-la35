#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int x_u, y_u;
    int x_v, y_v;
    int primer_punto, segundo_punto;
    x_u = atoi(argv[1]);
    y_u = atoi(argv[2]);
    x_v = atoi(argv[3]);
    y_v = atoi(argv[4]);
    primer_punto = (x_u + x_v);
    segundo_punto = (y_u + y_v);
    printf("Las coordenadas son: (%d, %d)", primer_punto, segundo_punto);
    return(0);
}
