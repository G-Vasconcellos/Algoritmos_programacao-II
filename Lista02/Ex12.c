// Exercício 12 - Eficiência na Passagem de Structs Copiar uma estrutura inteira para a pilha de
// execução pode ser custoso. É mais conveniente passar apenas o ponteiro da estrutura.
// 1. Defina struct Jogador { char nome[50]; int nivel; int exp; float hp; float mp; };.
// 2. Crie uma função void exibirStatus(const struct Jogador *j).
// 3. Use o operador seta (->) para imprimir os dados do jogador sem alterar nada.
// Responda em comentário: Por que usar const struct Jogador *j é mais eficiente do que
// usar struct Jogador j como parâmetro?

#include <stdio.h>

struct Jogador{
    char nome[50];
    int nivel;
    int exp;
    float hp;
    float mp;
};

void exibirStatus(const struct Jogador *j){

    printf("Nome: %s\n", j->nome);
    printf("Nivel: %d\n", j->nivel);
    printf("Experiencia: %d\n", j->exp);
    printf("HP: %.2f\n", j->hp);
    printf("MP: %.2f\n", j->mp);
}

int main(){

    struct Jogador jogador = {"Arthur", 10, 1500, 100.0, 50.0};

    exibirStatus(&jogador);

    return 0;
}

/*
Utilizar const struct Jogador *j pode ser mais eficiente
porque a funcao recebe apenas uma copia do endereco
da estrutura, evitando copiar todos os seus atributos.

O const impede que a funcao altere os dados da estrutura
por meio desse ponteiro.
*/
