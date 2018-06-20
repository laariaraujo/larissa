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
            printf("%2d ",m[i][j]=10*i + j - l);
        }
        puts("");
    }
    puts("");
}
void imprimeMatriz(int**m,int l, int c){
    int i,j;
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%2d ",m[i][j]);
        }
        puts("");
    }
    puts("");
}
void multMatriz(int **a, int al, int ac, int **b, int bl, int bc, int **c){
    if(ac != bl){
        puts("erro");
        return;
    }
    int i,j,k;

    for(i=0; i<al; i++){
        for(j=0; j<bc; j++){
            for(k=0; k<ac; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

}

void destroiMatriz(int **m, int l) {
    int i;
    for (i = 0; i < l; i++) {
        free(m[i]);
    }
    free(m);
}

#endif //AULA02_MALLOC_H
