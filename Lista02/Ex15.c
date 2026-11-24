// Exercício 15 - Reajuste de Catálogo (Inflação) Ao passar um vetor de structs, a função
// recebe apenas o endereço do primeiro elemento.
// 1. Defina struct Produto { char nome[30]; float preco; };.
// 2. Crie void aplicarInflacao(int n, struct Produto *catalogo, float taxa).
// 3. Na função, use um laço com ponteiros for (struct Produto *p = catalogo; p < catalogo +
// n; p++).
// 4. Reajuste o p->preco pela taxa (ex: aumentar 5%).
// Responda em comentário: No laço acima, quando fazemos p++, o compilador avança
// exatamente quantos bytes de memória para chegar ao próximo produto?

#include <stdio.h> // Biblioteca para utilizar printf

// Define uma estrutura chamada Produto
struct Produto{

    char nome[30]; // Armazena o nome do produto
    float preco;   // Armazena o preco do produto

}; // Finaliza a definicao da estrutura

// Funcao que recebe a quantidade de produtos,
// o endereco do vetor e a porcentagem de reajuste
void aplicarInflacao(int n, struct Produto *catalogo, float taxa){

    // struct Produto *p = catalogo: aponta para o primeiro produto
    // p < catalogo + n: verifica se ainda existem produtos
    // p++: avanca para o proximo produto do vetor
    for(struct Produto *p = catalogo; p < catalogo + n; p++){

        // Calcula o aumento e adiciona ao preco original
        p->preco += p->preco * (taxa / 100);
    }
}

int main(){

    // Declara e inicializa um vetor com quatro produtos
    struct Produto catalogo[4] = {

        {"Arroz", 20.0},  // Produto da posicao 0
        {"Feijao", 10.0}, // Produto da posicao 1
        {"Leite", 5.0},   // Produto da posicao 2
        {"Carne", 40.0}   // Produto da posicao 3
    };

    int n = 4; // Quantidade de produtos do catalogo

    float taxa = 5.0; // Define a porcentagem de reajuste

    printf("Precos antes da inflacao:\n"); // Exibe o titulo

    // Percorre todos os produtos antes do reajuste
    for(int i = 0; i < n; i++){

        // Exibe o nome e o preco original de cada produto
        printf("%s: R$ %.2f\n",
               catalogo[i].nome, catalogo[i].preco);
    }

    // Chama a funcao passando a quantidade, o vetor e a taxa
    aplicarInflacao(n, catalogo, taxa);

    printf("\nPrecos depois da inflacao:\n"); // Exibe o titulo

    // Percorre todos os produtos depois do reajuste
    for(int i = 0; i < n; i++){

        // Exibe o nome e o preco atualizado de cada produto
        printf("%s: R$ %.2f\n",
               catalogo[i].nome, catalogo[i].preco);
    }

    // Exibe o tamanho em bytes de uma estrutura Produto
    // O %zu e utilizado para imprimir o resultado de sizeof
    printf("\nTamanho da struct: %zu bytes\n",
           sizeof(struct Produto));

    return 0; // Encerra o programa
}

/*
Resposta da pergunta do exercicio:

Quando fazemos p++, o ponteiro avanca exatamente
sizeof(struct Produto) bytes na memoria.

Em uma arquitetura comum, essa estrutura pode ocupar
36 bytes, sendo 30 bytes do vetor de caracteres,
4 bytes do float e 2 bytes de alinhamento (padding).

O tamanho exato depende do compilador e da arquitetura.
*/