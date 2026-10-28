#include <stdio.h>

int main () {

    float saldo = 500.50;
    int *p = (int *)&saldo;
    printf("Valor = %.2f\n", *p);

    return 0;
}

// O valor impresso é 500 ? Não, 
// Explique por que a leitura direta dos bits de um float através de um ponteiro int gera um número inesperado.

// por que mesmo os 2 sendo bits float e int são lidos de formas dirente pelo computador. por isso gera um numero inesperado.