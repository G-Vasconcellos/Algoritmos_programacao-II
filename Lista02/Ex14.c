// Exercício 14 - O Aluno Destaque
// 1. Crie struct Aluno { char nome[50]; float media_final; };.
// 2. Declare um vetor struct Aluno turma[5]; e preencha-o.
// 3. Crie uma função int melhorAluno(int n, const struct Aluno *turma) que retorne o índice
// do aluno com a maior média.
// 4. Imprima na main o nome e a nota do aluno retornado pela função.

#include <stdio.h> // Biblioteca para utilizar printf

// Define uma estrutura chamada Aluno
struct Aluno{

    char nome[50];     // Armazena o nome do aluno
    float media_final; // Armazena a media final do aluno

}; // Finaliza a definicao da estrutura

// Funcao que recebe a quantidade de alunos e o endereco do vetor
// O const impede alteracoes nos dados dos alunos pelo ponteiro
int melhorAluno(int n, const struct Aluno *turma){

    // Considera inicialmente o primeiro aluno como o melhor
    int maior = 0;

    // Percorre o vetor a partir do segundo aluno
    for(int i = 1; i < n; i++){

        // Compara a media atual com a maior media encontrada
        if(turma[i].media_final > turma[maior].media_final){

            maior = i; // Atualiza o indice do melhor aluno
        }
    }

    return maior; // Retorna o indice do aluno com a maior media
}

int main(){

    // Declara e inicializa um vetor com cinco alunos
    struct Aluno turma[5] = {

        {"Pedro", 7.5}, // Aluno da posicao 0
        {"Maria", 9.2}, // Aluno da posicao 1
        {"Joao", 8.0},  // Aluno da posicao 2
        {"Ana", 9.8},   // Aluno da posicao 3
        {"Lucas", 6.5}  // Aluno da posicao 4
    };

    int indice; // Armazena o indice do melhor aluno

    // Chama a funcao passando a quantidade e o endereco do vetor
    indice = melhorAluno(5, turma);

    // Utiliza o indice retornado para exibir o nome do aluno
    printf("Melhor aluno: %s\n", turma[indice].nome);

    // Utiliza o indice retornado para exibir a media do aluno
    printf("Media final: %.2f\n", turma[indice].media_final);

    return 0; // Encerra o programa
}