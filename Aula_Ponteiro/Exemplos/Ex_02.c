#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
    int *contador;
    *contador = 0;
    *contador = *contador + 1;
    return 0;
} 

// O erro desse codigo o ponteiro foi declarado porem não foi inicializado, então quando declara o ponteiro como 0. O valor é enviado para um endereço de memoria indeterminado. 