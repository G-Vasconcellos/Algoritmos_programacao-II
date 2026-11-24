// Exercício 13 - Atualização de Registo de Veículo
// 1. Defina a estrutura: struct Veiculo { char matricula[10]; int ano; float quilometragem; };.
// 2. Crie void registarViagem(struct Veiculo *v, float distancia).
// 3. Na função, adicione a distância à quilometragem atual usando o operador de acesso
// seta (v->quilometragem += distancia;).
// 4. Crie um veículo na main, mostre a quilometragem e chame a função simulando uma
// viagem.

#include <stdio.h> // Biblioteca para utilizar printf

// Define uma estrutura chamada Veiculo
struct Veiculo{

    char matricula[10];  // Armazena a placa do veiculo
    int ano;             // Armazena o ano do veiculo
    float quilometragem; // Armazena a quilometragem atual

}; // Finaliza a definicao da estrutura

// Funcao que recebe o endereco do veiculo e a distancia percorrida
void registarViagem(struct Veiculo *v, float distancia){

    // Adiciona a distancia percorrida a quilometragem original
    v->quilometragem += distancia;
}

int main(){

    // Declara e inicializa uma estrutura do tipo Veiculo
    struct Veiculo carro = {"ABC1234", 2020, 15000.0};

    float distancia = 250.0; // Define a distancia da viagem

    // Exibe a placa do veiculo
    printf("Matricula: %s\n", carro.matricula);

    // Exibe o ano do veiculo
    printf("Ano: %d\n", carro.ano);

    // Exibe a quilometragem antes da viagem
    printf("Quilometragem antes: %.2f km\n",
           carro.quilometragem);

    // Chama a funcao passando o endereco do carro e a distancia
    registarViagem(&carro, distancia);

    // Exibe a quilometragem atualizada depois da viagem
    printf("Quilometragem depois: %.2f km\n",
           carro.quilometragem);

    return 0; // Encerra o programa
}