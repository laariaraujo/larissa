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
    v = malloc (4);
    v = &n;
    *v = 2;
    printf("%d\n",n);
    printf("%d\n",*v);
    free (v);
}
#endif //AULA02_MALLOC_H