#include<stdlib.h>
#include <stdio.h>

int main(int arg, char*argv[]){
    //declara uma variavel do tipo float
    float numero = 34.78;

    //declaro um ponteiro de float
    float *pf;
    //aponta o ponteiro para o lugar onde esta a variavel numero usando (&)
    pf = &numero;
    //imprime 1
    printf("%f\n",numero);
    printf("%f\n",*pf);
    *pf = 1.5;
    //imprime 2
    printf("%f\n",numero);
    printf("%f\n",*pf);
    return 0;
}