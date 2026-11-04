#include <stdio.h>

int main() {

typedef unsigned char UChar; // apelido para unsigned char. 
typedef int *PInt; // criando apelido para o ponteiro. 
typedef struct ponto Ponto; // typedef nomeia o struct para quando for chamado precisar apenas do nome colocado nesse caso Ponto. 

struct ponto {
    float x;
    float y;
};

UChar z = 230;
int w = 120;
PInt pp; // mesma coisa que criar um int *pp  (Não recomendado a usar)
pp = &w;

Ponto sp;
sp.x = 10;
sp.y = 12;

printf("x=%.2f y=%.2f", sp.x, sp.y);

    return 0;
}
