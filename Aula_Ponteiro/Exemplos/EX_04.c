#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }

void faixa (int t1, int t2, int t3, int *maior, int *menor){
    *maior = t1;
    *menor = t1;

    
    if ( t2 > *maior){
        *maior = t2;
    }

    if (t3 > *maior){
        *maior = t3;
    }

    if (t2 < *menor){
        *menor = t2;
    }

    if (t3 < *menor){
        *menor = t3;
    }
}
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");

    int x, y, z;
    int m;
    int n;

    printf("Escreva uma temperatura:");
    scanf("%d", &x);

    printf("Escreva outra temperatura:");
    scanf("%d", &y);

    printf("Escreva outra temperatura:");
    scanf("%d", &z);

    faixa (x , y , z , &m, &n );

    printf("temperatura maior = %d , temperatura menor = %d\n", m, n );

    return 0;
} 