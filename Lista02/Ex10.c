// Exercício 10 - Análise Estatística Constante Para sinalizar que uma função não altera os
// elementos de um vetor original, declaramos o parâmetro com o modificador const.
// 1. Crie float calcularMedia(int n, const float *notas).
// 2. Tente, de propósito, fazer notas[0] = 10.0; dentro da função e observe o erro do
// compilador.
// 3. Remova a tentativa de atribuição, calcule a média corretamente e retorne o resultado

#include <stdio.h> // Biblioteca para utilizar printf

// Funcao que recebe o tamanho e o endereco do vetor de notas
// O const impede a alteracao das notas por meio do ponteiro
float calcularMedia(int n, const float *notas){

    float soma = 0; // Armazena a soma de todas as notas

    // notas[0] = 10.0;
    // A linha acima gera um erro de compilacao por causa do const

    // Percorre todas as posicoes do vetor
    for(int i = 0; i < n; i++){

        soma += notas[i]; // Adiciona a nota atual a soma
    }

    return soma / n; // Calcula e retorna a media das notas
}

int main(){

    // Declara e inicializa o vetor de notas
    float notas[] = {7.0, 8.0, 9.0, 6.0, 10.0};

    int n = 5; // Quantidade de elementos do vetor

    float media; // Variavel que recebe a media calculada

    // Chama a funcao passando o tamanho e o endereco do vetor
    media = calcularMedia(n, notas);

    // Exibe a media com duas casas decimais
    printf("Media das notas: %.2f\n", media);

    return 0; // Encerra o programa
}