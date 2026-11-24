// Questão 1 (3,0 pontos)
// Implemente a função void aplicarBonus(int *pontosA, int *pontosB, int bonus), que soma o valor de
// bonus ao conteúdo das duas variáveis apontadas por pontosA e pontosB (usando o operador * para acessar o valor
// através do ponteiro).
// Na função main(), declare duas variáveis inteiras, leia seus valores, leia também o valor do bônus, chame
// aplicarBonus passando os endereços das duas variáveis e, em seguida, exiba os dois valores já atualizados.


#include <stdio.h> // Biblioteca para utilizar printf e scanf

void aplicarBonus(int *pontosA, int *pontosB, int bonus){ // Recebe dois enderecos e o bonus

    *pontosA += bonus; // Soma o bonus ao valor original de pontosA
    *pontosB += bonus; // Soma o bonus ao valor original de pontosB

} // Finaliza a funcao aplicarBonus

int main(){ // Inicio da funcao principal

    int pontosA; // Armazena a pontuacao do jogador A
    int pontosB; // Armazena a pontuacao do jogador B
    int bonus;   // Armazena o valor do bonus

    printf("Digite os pontos de A: "); // Solicita os pontos de A
    scanf("%d", &pontosA); // Armazena o valor em pontosA

    printf("Digite os pontos de B: "); // Solicita os pontos de B
    scanf("%d", &pontosB); // Armazena o valor em pontosB

    printf("Digite o bonus: "); // Solicita o valor do bonus
    scanf("%d", &bonus); // Armazena o valor do bonus

    aplicarBonus(&pontosA, &pontosB, bonus); // Envia os enderecos e o valor do bonus

    printf("Pontos de A: %d\n", pontosA); // Exibe os pontos atualizados de A
    printf("Pontos de B: %d\n", pontosB); // Exibe os pontos atualizados de B

    return 0; // Encerra o programa com sucesso

} // Finaliza a main