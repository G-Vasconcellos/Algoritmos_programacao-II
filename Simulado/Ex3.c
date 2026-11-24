// Questão 3 (4,0 pontos)
// Usando typedef struct, defina um tipo chamado Produto, com os campos char nome[30], float preco e int
// estoque.
// Implemente a função void aplicarDesconto(Produto *p, float percentual), que reduz o campo preco da
// struct apontada por p de acordo com percentual.
// Na função main(), declare uma única variável do tipo Produto, leia seus três campos informados pelo usuário, chame
// aplicarDesconto passando o endereço dessa variável junto com um percentual de desconto também lido do usuário
// e, em seguida, exiba os dados atualizados do produto.

#include <stdio.h> // Biblioteca para utilizar printf e scanf

typedef struct{ // Define uma estrutura utilizando typedef

    char nome[30]; // Armazena o nome do produto
    float preco;   // Armazena o preco do produto
    int estoque;   // Armazena a quantidade em estoque

} Produto; // Define Produto como o nome do novo tipo

void aplicarDesconto(Produto *p, float percentual){ // Recebe o endereco do produto e o desconto

    float desconto; // Armazena o valor do desconto em reais

    desconto = p->preco * (percentual / 100); // Calcula o valor do desconto

    p->preco -= desconto; // Subtrai o desconto do preco original

} // Finaliza a funcao aplicarDesconto

int main(){ // Inicio da funcao principal

    Produto produto; // Declara uma variavel do tipo Produto

    float percentual; // Armazena a porcentagem de desconto

    printf("Nome do produto: "); // Solicita o nome
    scanf(" %29[^\n]", produto.nome); // Armazena o nome com espacos

    printf("Preco do produto: "); // Solicita o preco
    scanf("%f", &produto.preco); // Armazena o preco

    printf("Quantidade em estoque: "); // Solicita a quantidade
    scanf("%d", &produto.estoque); // Armazena a quantidade

    printf("Percentual de desconto: "); // Solicita a porcentagem
    scanf("%f", &percentual); // Armazena a porcentagem

    aplicarDesconto(&produto, percentual); // Envia o endereco do produto e o desconto

    printf("\nDados atualizados do produto:\n"); // Exibe o titulo

    printf("Nome: %s\n", produto.nome); // Exibe o nome do produto

    printf("Preco: R$ %.2f\n", produto.preco); // Exibe o preco atualizado

    printf("Estoque: %d\n", produto.estoque); // Exibe a quantidade em estoque

    return 0; // Encerra o programa com sucesso

} // Finaliza a main