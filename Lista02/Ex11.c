// Exercício 11 - Geometria de Jogos
// 1. Defina struct coordenada { float x; float y; };.
// 2. Declare dois pontos na main e inicialize-os usando o operador ponto (.).
// 3. Escreva um trecho de código para calcular a distância euclidiana entre os dois pontos
// (dica: use sqrt e pow de <math.h>)

#include <stdio.h> // Biblioteca para utilizar printf
#include <math.h>  // Biblioteca para utilizar sqrt e pow

// Define uma estrutura chamada coordenada
struct coordenada{

    float x; // Armazena a coordenada horizontal
    float y; // Armazena a coordenada vertical

}; // Finaliza a definicao da estrutura

int main(){

    struct coordenada p1; // Declara o primeiro ponto
    struct coordenada p2; // Declara o segundo ponto

    float distancia; // Armazena a distancia entre os pontos

    p1.x = 1; // Define a coordenada X do primeiro ponto
    p1.y = 2; // Define a coordenada Y do primeiro ponto

    p2.x = 4; // Define a coordenada X do segundo ponto
    p2.y = 6; // Define a coordenada Y do segundo ponto

    // Calcula a distancia euclidiana entre os dois pontos
    // pow eleva um numero a uma determinada potencia
    // sqrt calcula a raiz quadrada de um numero
    distancia = sqrt(pow(p2.x - p1.x, 2) +
                     pow(p2.y - p1.y, 2));

    // Exibe a distancia com duas casas decimais
    printf("Distancia entre os pontos: %.2f\n", distancia);

    return 0; // Encerra o programa
}