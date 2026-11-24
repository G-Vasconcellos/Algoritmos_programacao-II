// Exercício 15 - Reajuste de Catálogo (Inflação) Ao passar um vetor de structs, a função
// recebe apenas o endereço do primeiro elemento.
// 1. Defina struct Produto { char nome[30]; float preco; };.
// 2. Crie void aplicarInflacao(int n, struct Produto *catalogo, float taxa).
// 3. Na função, use um laço com ponteiros for (struct Produto *p = catalogo; p < catalogo +
// n; p++).
// 4. Reajuste o p->preco pela taxa (ex: aumentar 5%).
// Responda em comentário: No laço acima, quando fazemos p++, o compilador avança
// exatamente quantos bytes de memória para chegar ao próximo produto?

#include <stdio.h>

struct Produto{
    char nome[30];
    float preco;
};

void aplicarInflacao(int n, struct Produto *catalogo, float taxa){

    for(struct Produto *p = catalogo; p < catalogo + n; p++){

        p->preco += p->preco * (taxa / 100);
    }
}

int main(){

    struct Produto catalogo[4] = {
        {"Arroz", 20.0},
        {"Feijao", 10.0},
        {"Leite", 5.0},
        {"Carne", 40.0}
    };

    int n = 4;
    float taxa = 5.0;

    printf("Precos antes da inflacao:\n");

    for(int i = 0; i < n; i++){
        printf("%s: R$ %.2f\n",
               catalogo[i].nome, catalogo[i].preco);
    }

    aplicarInflacao(n, catalogo, taxa);

    printf("\nPrecos depois da inflacao:\n");

    for(int i = 0; i < n; i++){
        printf("%s: R$ %.2f\n",
               catalogo[i].nome, catalogo[i].preco);
    }

    printf("\nTamanho da struct: %zu bytes\n",
           sizeof(struct Produto));

    return 0;
}

/*
Quando fazemos p++, o ponteiro avanca exatamente
sizeof(struct Produto) bytes na memoria.

Em um sistema comum, essa estrutura ocupa 36 bytes,
considerando o vetor de caracteres, o float e os
bytes de alinhamento (padding).

O tamanho exato depende do compilador e da arquitetura.
*/