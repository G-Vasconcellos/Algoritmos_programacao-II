// Exercício 12 - Eficiência na Passagem de Structs Copiar uma estrutura inteira para a pilha de
// execução pode ser custoso. É mais conveniente passar apenas o ponteiro da estrutura.
// 1. Defina struct Jogador { char nome[50]; int nivel; int exp; float hp; float mp; };.
// 2. Crie uma função void exibirStatus(const struct Jogador *j).
// 3. Use o operador seta (->) para imprimir os dados do jogador sem alterar nada.
// Responda em comentário: Por que usar const struct Jogador *j é mais eficiente do que
// usar struct Jogador j como parâmetro?

#include <stdio.h> // Biblioteca para utilizar printf

// Define uma estrutura chamada Jogador
struct Jogador{

    char nome[50]; // Armazena o nome do jogador
    int nivel;     // Armazena o nivel do jogador
    int exp;       // Armazena os pontos de experiencia
    float hp;      // Armazena os pontos de vida
    float mp;      // Armazena os pontos de mana

}; // Finaliza a definicao da estrutura

// Funcao que recebe o endereco da estrutura Jogador
// O const impede alteracoes nos atributos por meio de j
void exibirStatus(const struct Jogador *j){

    // Utiliza a seta para acessar os atributos pelo ponteiro

    printf("Nome: %s\n", j->nome);        // Exibe o nome
    printf("Nivel: %d\n", j->nivel);      // Exibe o nivel
    printf("Experiencia: %d\n", j->exp);  // Exibe a experiencia
    printf("HP: %.2f\n", j->hp);          // Exibe os pontos de vida
    printf("MP: %.2f\n", j->mp);          // Exibe os pontos de mana
}

int main(){

    // Declara e inicializa uma estrutura do tipo Jogador
    struct Jogador jogador = {"Arthur", 10, 1500, 100.0, 50.0};

    // Chama a funcao passando o endereco da estrutura
    exibirStatus(&jogador);

    return 0; // Encerra o programa
}

/*
Resposta da pergunta do exercicio:

Utilizar const struct Jogador *j pode ser mais eficiente
porque a funcao recebe apenas uma copia do endereco
da estrutura, evitando copiar todos os seus atributos.

O const impede que os dados originais sejam alterados
por meio desse ponteiro.
*/

