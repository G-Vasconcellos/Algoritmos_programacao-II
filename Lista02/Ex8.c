// Exercício 8 - Busca de Padrão Aritmética de ponteiros permite somar ou subtrair endereços
// para navegar continuamente na memória.
// 1. Crie um vetor de caracteres (string): char texto[] = "Linguagem C";.
// 2. Sem usar índices, utilize um ponteiro para percorrer o vetor (parando quando *p == '\0').
// 3. Conte quantas vogais existem na string e imprima o resultado.

#include <stdio.h>

int main() {

    char texto[] = "Linguagem C";
    int vogais = 0;

    for (char *p = texto; *p != '\0'; p++){

        if(*p == 'a' || *p == 'e' || *p == 'i' ||
           *p == 'o' || *p == 'u' || *p == 'A' ||
           *p == 'E' || *p == 'I' || *p == 'O' ||
           *p == 'U'){

            vogais++;
        }
    }

    printf("Quantidade de vogais: %d ", vogais);
    
    return 0;

}