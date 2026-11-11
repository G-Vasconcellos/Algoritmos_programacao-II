#include <stdio.h>
#include <string.h>

typedef struct produto{
    char nome[30];
    float preco;
    int estoque;
} produto;


float valor_total_estoque(int n, produto *c){
    float total = 0;
    for (int i=0; i < 2; i++){

        total += c[i].preco * c[i].estoque;
    }
    return total;
}

int main(){

    produto catalogo[50];
    float total = 0;

   for(int i=0; i < 2; i++){
    
        printf("Informe o nome do Produto:");
        scanf("%s", catalogo[i].nome);
        // strcpy(catalogo[0].nome, "Martelo");
        printf("Informe a quantidade de produto:");
        scanf("%d", &catalogo[i].estoque);

        printf("Informe o preço do produto: ");
        scanf("%f", &catalogo[i].preco);
    }

    for (int i=0; i < 2; i++){
        printf("%s - RS %.2f (%d pecas)\n", catalogo[i].nome, catalogo[i].preco, catalogo[i].estoque);
    }
    printf("Valor total em estoque: RS %.2f\n", valor_total_estoque(2,catalogo));

    return 0;
}


