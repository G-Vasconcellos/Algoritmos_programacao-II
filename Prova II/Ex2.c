#include <stdio.h>


typedef struct {
    char nome[40];
    int pontuacao;
    int vidas;

}Jogador;

int main (){

    Jogador ranking[25];
    
    int n;

    printf("Quantos jogadores serão cadastrados: ");
    scanf("%d", &n);

    if ( n < 1 || n > 25){
        printf("quantidade invalida!\n");

        return 1;
    }

    for (int i = 0; i < n; i++){

        printf("\nJogador = %d \n", i + 1);

        printf("Nome do Jogador: ");
        scanf(" %39[^\n]", ranking[i].nome);

        printf("Qual a pontuacao desse jogador: ");
        scanf("%d", &ranking[i].pontuacao);

        printf("Quantidade de vidas: ");
        scanf("%d", &ranking[i].vidas);
    };

    printf("\n\nJogadores cadastrados: %d\n\n", n);

    for (Jogador *p = ranking; p< ranking + n; p++){

        printf("Nome: %s\n", p->nome);

        printf("pontuacao: %d\n", p->pontuacao);

        printf("Vidas: %d\n\n", p->vidas);

    }

    return 0;
}