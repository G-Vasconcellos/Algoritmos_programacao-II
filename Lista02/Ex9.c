// Exercício 9 - Processamento de Imagem (Bônus de Brilho)
// 1. Escreva uma função void aumentarBrilho(int n, int *pixels, int valor).
// 2. A função deve percorrer o vetor e somar valor a cada elemento, garantindo que nenhum
// pixel passe de 255.
// 3. Teste a função na main passando um vetor de inteiros simulando uma imagem

#include <stdio.h>

void aumentarBrilho(int n, int *pixels, int valor){

    for(int *p = pixels; p < pixels + n; p++){

        *p += valor;

        if(*p > 255){
            *p = 255;
        }
    }
}

int main(){

    int pixels[] = {50, 100, 150, 200, 250};
    int n = 5;
    int valor = 30;

    printf("Pixels antes:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", pixels[i]);
    }

    aumentarBrilho(n, pixels, valor);

    printf("\n\nPixels depois:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", pixels[i]);
    }

    return 0;
}