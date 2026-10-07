#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }

int dividir( int a, int b, int *resultado){
    if(b == 0){
        return -1;
    }

    *resultado = a / b;

    return 0;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
    
    int n1 = 100;
    int n2 = 5;
    int s, r;

    s = dividir(n1 , n2, &r);

    if(s < 0){
        printf("Divisor não pode ser igual a zero\n");
    } else {
        printf("%d / %d = %d\n", n1 , n2 , r);
    }

    return 0;
} 