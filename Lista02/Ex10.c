// Exercício 10 - Análise Estatística Constante Para sinalizar que uma função não altera os
// elementos de um vetor original, declaramos o parâmetro com o modificador const.
// 1. Crie float calcularMedia(int n, const float *notas).
// 2. Tente, de propósito, fazer notas[0] = 10.0; dentro da função e observe o erro do
// compilador.
// 3. Remova a tentativa de atribuição, calcule a média corretamente e retorne o resultado

#include <stdio.h>

float calcularMedia(int n, const float *notas){

    float soma = 0;

    // notas[0] = 10.0;
    // A linha acima gera um erro de compilacao
    // porque notas aponta para valores protegidos por const.

    for(int i = 0; i < n; i++){
        soma += notas[i];
    }

    return soma / n;
}

int main(){

    float notas[] = {7.0, 8.0, 9.0, 6.0, 10.0};
    int n = 5;
    float media;

    media = calcularMedia(n, notas);

    printf("Media das notas: %.2f\n", media);

    return 0;
}