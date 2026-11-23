// Exercício 5 - Saque Bancário com Código de Erro É muito comum em C usar o return da
// função para indicar sucesso ou erro, e os parâmetros ponteiro para devolver a resposta.
// 1. Crie int realizarSaque(float *saldo, float valor).
// 2. Se valor for maior que *saldo, a função não altera o saldo e retorna 0 (erro).
// 3. Se houver saldo, subtraia valor de *saldo e retorne 1 (sucesso).

#include <stdio.h>

int realizarSaque(float *saldo, float valor){
    if(*saldo > valor){
        *saldo = *saldo - valor;
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float saldo = 1000;
    float valor;
    float saque;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    saque = realizarSaque(&saldo, valor);

    printf("Saldo = %.2f", saldo);
}