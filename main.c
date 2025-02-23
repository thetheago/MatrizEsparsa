#include <stdio.h>
#include <stdlib.h>

#include "matriz.h"

void leMatriz(MATRIZ*) {
     //
}

int main(void) {
    printf("Hello, World!\n");
    MATRIZ *matriz = malloc(sizeof(MATRIZ));
    leMatriz(matriz);
    return 0;
}