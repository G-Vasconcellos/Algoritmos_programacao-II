#include <stdio.h>


// #define CPF 1 A enumeração a baixo substitui essa linha.

typedef enum { // Substitui o uso de #define para valores relacionados
    CPF = 1,
    CNPJ = 2
} TIPO_DOC;



typedef union {
    char cpf[12];
    char cnpj[15];
} Documento; // Maneira de nomear o union.


typedef struct{
    char nome[50];
    TIPO_DOC tipoDoc;
    Documento doc;
}Cliente;


int main (){

    int tipo;

    //Documento doc;
    Cliente c[3]; // vetor de struct
    for (int i=0; i<3; i++){

    printf("Informe o tipo do documento (1-CPF, 2-CNPJ):");
    scanf("%d", &tipo);

    if (tipo == CPF){
        c[i].tipoDoc = CPF;
        printf("Informe o CPF: ");
        scanf("%s", c[i].doc.cpf);
    } else {
        c[i].tipoDoc = CNPJ;
        printf("Informe o CNPJ: ");
        scanf("%s", c[i].doc.cnpj);
    }
    printf("Informe o nome do cliente: ");
    scanf("%s", c[i].nome);

    if ( c[i].tipoDoc == CPF){
        printf("Nome: %s CPF=[%s]\n", c[i].nome, c[i].doc.cpf);
    } else {
        printf("Nome: %s CNPJ=[%s]\n", c[i].nome, c[i].doc.cnpj);
    }
    }
    return 0;
} 