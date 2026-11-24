// Exercício 6 - Filtragem de Dados por Ponteiros Dado um vetor: float leituras[] = {12.5, 14.2, -
// 1.0, 15.3, 10.8, -1.0, 11.1};
// 1. Crie uma função void substituirErro(int n, float *vetor, float erro, float novoValor).
// 2. Na função, substitua o uso de índices por aritmética de ponteiros num ciclo for: float *p
// = vetor; p < vetor + n; p++.
// 3. Substitua as ocorrências de -1.0 por 0.0.
// Responda em comentário: Qual é a diferença fundamental entre declarar o vetor float
// v[10]; (ponteiro constante) e float *u; (ponteiro variável)?

#include <stdio.h>


void substituirErro( int n, float *vetor, float erro, float novoValor){

    for(float *p = vetor; p < vetor + n; p++){
        if(*p == erro){
            *p = novoValor;
        }
    }
    
}

int main () {

    float leituras[] = {12.5, 14.2, -1.0, 15.3, 10.8, -1.0, 11.1};
    int n = 7;

    substituirErro(n, leituras, -1.0, 0.0);

    printf("Vetor Atualizado: \n");

    for (int i = 0; i < n; i++){
        printf("%.1f, ", leituras[i]);
    }
    
    return 0;
}


// Diferença entre vloat v[10] e float *u:

// float v[10] declara um vetor com espaço para 10 elementos.
// Seu endereço inicial é fixo e não pode ser alterado.

// float *u declara uma variavel ponteiro que pode armazenar diferentes 
// de memória e avançar entre elementos de um vetor válido.

