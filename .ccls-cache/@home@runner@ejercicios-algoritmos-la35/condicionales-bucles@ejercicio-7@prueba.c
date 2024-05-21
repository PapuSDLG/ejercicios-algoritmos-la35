#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argV[]) {
    for(int i = 1000; i < 1999; i++){
        printf("%d\t", i);

        if(i%5 == 0){
            printf("\n");
        }
    }
    return 0;
}
