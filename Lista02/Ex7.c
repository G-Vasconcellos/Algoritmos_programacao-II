// Exercício 7 - Histórico Invertido Desfazer uma ação ou imprimir em ordem reversa exige
// percorrer o vetor do último elemento até o primeiro.
// 1. Declare um vetor int historico[5] = {10, 20, 30, 40, 50};.
// 2. Use um laço for com um ponteiro inicializado no último elemento (int *p = &historico[4])
// e decremente-o (p--) até chegar à primeira posição.
// 3. Imprima cada valor.

#include <stdio.h>

int main () {
    int historico[5] = {10,20,30,40,50};
    
    for(int *p = &historico[4]; ; p--){

        printf("%d, ", *p);

        if( p == historico){
            break;
        }

    }
    return 0;

}