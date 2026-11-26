#include <stdio.h>

typedef struct {

    char nome[30];
    float valor;
    int vezesDepreciado;

}Equipamento;

void aplicarDepreciacao(Equipamento *e, float percentual){
    float desconto;
    desconto = e-> valor * (percentual / 100);
    e-> valor -= desconto;
    e-> vezesDepreciado += 1;
}

int main() {
    
    Equipamento equipamento;
    equipamento.vezesDepreciado = 0;
    float percentual;

    printf("Informe um nome: ");
    scanf(" %29[^\n]", equipamento.nome);

    printf("Informe um valor: ");
    scanf("%f", &equipamento.valor);

    printf("Informe um percentual de depreciacao: ");
    scanf("%f", &percentual);

    aplicarDepreciacao(&equipamento, percentual);

    printf("\nNome do Equipamento\n", equipamento.nome);

    printf("\nValor = %.2f\n", equipamento.valor);

    printf("\nVezes Depreciado = %d\n", equipamento.vezesDepreciado);

    return 0;
}