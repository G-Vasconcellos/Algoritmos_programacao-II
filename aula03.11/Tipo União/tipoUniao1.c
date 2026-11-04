#include <stdio.h>

typedef union {
    char cpf[12];
    char cnpj[15];
} Documento; // Maneira de nomear o union.

typedef struct{
    char nome[50];
    int tipoDoc;
    Documento doc;
}Cliente;


int main (){

    // int tipo;

    //Documento doc;
    Cliente c;

    printf("Informe o tipo do documento (1-CPF, 2-CNPJ):");
    scanf("%d", &c.tipoDoc);
    if (c.tipoDoc == 1){
        scanf("%s", c.doc.cpf);
    } else {
        scanf("%s", c.doc.cpf);
    }
    printf("Informe o nome do cliente");
    scanf("%s", c.nome);

    if ( c.tipoDoc == 1){
        printf("Nome: %s CPF=[%s]\n", c.nome, c.doc.cpf);
    } else {
        printf("Nome: %s CNPJ=[%s]\n", c.nome, c.doc.cnpj);
    }

    return 0;
} 