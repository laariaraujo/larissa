//
// Created by eve on 20/06/18.
//

#ifndef AULA02_MALLOC_H
#define AULA02_MALLOC_H

#include <stdio.h>
#include <stdlib.h>

int ** alocaMatriz(int l, int c){
    int **m = malloc(sizeof(int*)*l);
    int i;
    for(i=0; i< l; i++){
        m[i] = malloc(sizeof(int)*c);
    }
    return m;
}
void preencheMatriz(int**m,int l, int c){
    int i,j;
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%2d ",m[i][j]=10*i + j);
        }
        puts("");
    }
    puts("");
}
#endif //AULA02_MALLOC_H
