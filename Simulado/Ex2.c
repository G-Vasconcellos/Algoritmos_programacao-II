// Questão 2 (3,0 pontos)
// Usando typedef struct, defina um tipo chamado Livro, com os campos char titulo[50], char autor[50] e
// int anoPublicacao.
// Na função main(), declare um vetor Livro (o acervo comporta, no máximo, 20 livros). Leia primeiro a quantidade n
// de livros que serão cadastrados (sendo n no máximo 20) e, em seguida, usando um laço, leia os três campos de cada
// uma das n posições do vetor.
// Ao final, usando outro laço, percorra o vetor e exiba os dados de todos os n livros cadastrados, um por linha, no formato
// Campo: valor.

#include <stdio.h> // Biblioteca para utilizar printf e scanf

typedef struct{ // Define uma estrutura utilizando typedef

    char titulo[50];  // Armazena o titulo do livro
    char autor[50];   // Armazena o nome do autor
    int anoPublicacao; // Armazena o ano de publicacao

} Livro; // Define Livro como o nome do novo tipo

int main(){ // Inicio da funcao principal

    Livro acervo[20]; // Cria um vetor com capacidade para 20 livros

    int n; // Armazena a quantidade de livros que serao cadastrados

    printf("Quantos livros deseja cadastrar? "); // Solicita a quantidade
    scanf("%d", &n); // Armazena a quantidade em n

    if(n < 1 || n > 20){ // Verifica se a quantidade e invalida

        printf("Quantidade invalida!\n"); // Exibe mensagem de erro

        return 1; // Encerra o programa com codigo de erro
    }

    for(int i = 0; i < n; i++){ // Percorre as posicoes para cadastrar os livros

        printf("\nCadastro do livro %d\n", i + 1); // Exibe o numero do livro

        printf("Titulo: "); // Solicita o titulo
        scanf(" %49[^\n]", acervo[i].titulo); // Le o titulo com espacos

        printf("Autor: "); // Solicita o nome do autor
        scanf(" %49[^\n]", acervo[i].autor); // Le o nome com espacos

        printf("Ano de publicacao: "); // Solicita o ano
        scanf("%d", &acervo[i].anoPublicacao); // Armazena o ano
    }

    printf("\nLivros cadastrados:\n"); // Exibe o titulo da listagem

    for(int i = 0; i < n; i++){ // Percorre os livros cadastrados

        printf("\nLivro %d\n", i + 1); // Exibe o numero do livro

        printf("Titulo: %s\n", acervo[i].titulo); // Exibe o titulo

        printf("Autor: %s\n", acervo[i].autor); // Exibe o autor

        printf("Ano de publicacao: %d\n", acervo[i].anoPublicacao); // Exibe o ano
    }

    return 0; // Encerra o programa com sucesso

} // Finaliza a main