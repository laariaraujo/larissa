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
    preencheMatriz(m1,2,3);
    return 0;
}