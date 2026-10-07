#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
    int temperatura = 23;
    int *leitura_sensor = &temperatura;
    *leitura_sensor = 25;
    printf("%d\n", temperatura); // Esse printf esta mostrando o valor da variavel temperatura. porem o ponteiro alterou o valor para 25;

    temperatura = 30;
    printf("%d\n", *leitura_sensor); // Esse printf esta puxando o valor da memoria indicada pelo *leitura_sensor que seria o valor da variavel temperatura.
	return 0;
}