//
// Created by eve on 20/06/18.
//

#ifndef AULA02_PONTEIRINHOS_H
#define AULA02_PONTEIRINHOS_H





void pont(){
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
}

#endif //AULA02_PONTEIRINHOS_H
