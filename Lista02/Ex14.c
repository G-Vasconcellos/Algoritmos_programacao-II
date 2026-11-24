// Exercício 14 - O Aluno Destaque
// 1. Crie struct Aluno { char nome[50]; float media_final; };.
// 2. Declare um vetor struct Aluno turma[5]; e preencha-o.
// 3. Crie uma função int melhorAluno(int n, const struct Aluno *turma) que retorne o índice
// do aluno com a maior média.
// 4. Imprima na main o nome e a nota do aluno retornado pela função.

#include <stdio.h>

struct Aluno{
    char nome[50];
    float media_final;
};

int melhorAluno(int n, const struct Aluno *turma){

    int maior = 0;

    for(int i = 1; i < n; i++){

        if(turma[i].media_final > turma[maior].media_final){
            maior = i;
        }
    }

    return maior;
}

int main(){

    struct Aluno turma[5] = {
        {"Pedro", 7.5},
        {"Maria", 9.2},
        {"Joao", 8.0},
        {"Ana", 9.8},
        {"Lucas", 6.5}
    };

    int indice;

    indice = melhorAluno(5, turma);

    printf("Melhor aluno: %s\n", turma[indice].nome);

    printf("Media final: %.2f\n",
           turma[indice].media_final);

    return 0;
}