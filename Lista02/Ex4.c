// Sempre que desejamos alterar o valor de uma
// variável da função que chama, devemos passar o endereço dessa variável.
// 1. Crie a função void ordenarDois(int *a, int *b) que verifica se o valor apontado por a é
// maior que o de b. Se for, deve trocar os valores entre eles.
// 2. Na main, leia dois números, chame a função e imprima-os em ordem crescente.

#include <stdio.h>

void ordenarDois(int *a, int *b){
    int ordem;
    if (*a > *b){
        ordem  = *a;
        *a = *b;
        *b = ordem;
    }
}

int main () {

    int n1, n2;

    printf("Informe um numero: ");
    scanf("%d", &n1);

    printf("Informe outro numero: ");
    scanf("%d", &n2);

    ordenarDois(&n1, &n2);

    printf("O numero maior é = %d e o numero menor = %d \n", n2, n1);


    return 0;
}