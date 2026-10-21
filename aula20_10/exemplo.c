#include <stdio.h>

struct aluno {
    char nome[50];
    float nota1;
    float nota2;
};

int main (){

    struct aluno a;
    float media;


    printf("Digite o nome do aluno: ");
    scanf("%s", a.nome);
    printf("Digite a nota1 ");
    scanf("%f", &a.nota1);
    printf("Digite o nome do aluno: ");
    scanf("%f", &a.nota2);

    media = (a.nota1 + a.nota2) / 2;

    printf("Media %.2f", media);
    return 0;
}