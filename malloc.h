//
// Created by eve on 20/06/18.
//

#ifndef AULA02_MALLOC_H
#define AULA02_MALLOC_H

#include <stdio.h>
#include <stdlib.h>

void mama(){
    int *v;
    int n = 4;
    //declaracao do vetor como malloc
    v = malloc (sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        v[i] = i*5+1;
    }
    //imprimir o vetor
    for (int i = 0; i < n; i++) {
        printf("%d\n",v[i]);
    }
    
    free (v);
}
#endif //AULA02_MALLOC_H
