#include<stdlib.h>
#include <stdio.h>

int main(int arg, char*argv[]){
    float numero = 34.78;

    float *pf;
    pf = &numero;
    printf("%f\n",*pf);
    *pf = 1.5;
    printf("%f\n",*pf);
    return 0;
}