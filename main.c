//
// Created by eve on 20/06/18.
//

#include <stdlib.h>
#include <stdio.h>

#include "ponteirinhos.h"
#include "malloc.h"
#include "passagem.h"


int main(int argc, char *argv[]){
    int num1;
    int num2;

    scanf("%d",&num1);
    scanf("%d",&num2);
    puts("");
    printf("%d",num1);
    puts("");
    printf("%d\n",num2);
    puts("com a troca");

    troca(&num1,&num2);

    printf("%d",num1);
    puts("");
    printf("%d",num2);
    return 0;
}