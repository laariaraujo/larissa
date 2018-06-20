//
// Created by eve on 20/06/18.
//

#include <stdlib.h>
#include <stdio.h>

#include "ponteirinhos.h"
#include "malloc.h"

int main(int argc, char *argv[]){
    int a=2;
    int b = 3;

    int **m1 = alocaMatriz(2,3);
    int **m2 = alocaMatriz(3,2);
    int **m3 = alocaMatriz(2,2);
    multMatriz(m1,2,3,m2,3,2,m3);
    preencheMatriz(m1,2,3);
    preencheMatriz(m2,3,2);
    preencheMatriz(m3,2,2);
    return 0;
}