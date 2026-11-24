// Exercício 11 - Geometria de Jogos
// 1. Defina struct coordenada { float x; float y; };.
// 2. Declare dois pontos na main e inicialize-os usando o operador ponto (.).
// 3. Escreva um trecho de código para calcular a distância euclidiana entre os dois pontos
// (dica: use sqrt e pow de <math.h>)

#include <stdio.h>
#include <math.h>

struct coordenada{
    float x;
    float y;
};

int main(){

    struct coordenada p1;
    struct coordenada p2;

    float distancia;

    p1.x = 1;
    p1.y = 2;

    p2.x = 4;
    p2.y = 6;

    distancia = sqrt(pow(p2.x - p1.x, 2) +
                     pow(p2.y - p1.y, 2));

    printf("Distancia entre os pontos: %.2f\n", distancia);

    return 0;
}