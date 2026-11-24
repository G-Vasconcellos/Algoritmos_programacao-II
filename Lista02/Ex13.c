// Exercício 13 - Atualização de Registo de Veículo
// 1. Defina a estrutura: struct Veiculo { char matricula[10]; int ano; float quilometragem; };.
// 2. Crie void registarViagem(struct Veiculo *v, float distancia).
// 3. Na função, adicione a distância à quilometragem atual usando o operador de acesso
// seta (v->quilometragem += distancia;).
// 4. Crie um veículo na main, mostre a quilometragem e chame a função simulando uma
// viagem.

#include <stdio.h>

struct Veiculo{
    char matricula[10];
    int ano;
    float quilometragem;
};

void registarViagem(struct Veiculo *v, float distancia){

    v->quilometragem += distancia;
}

int main(){

    struct Veiculo carro = {"ABC1234", 2020, 15000.0};

    float distancia = 250.0;

    printf("Matricula: %s\n", carro.matricula);
    printf("Ano: %d\n", carro.ano);

    printf("Quilometragem antes: %.2f km\n",
           carro.quilometragem);

    registarViagem(&carro, distancia);

    printf("Quilometragem depois: %.2f km\n",
           carro.quilometragem);

    return 0;
}