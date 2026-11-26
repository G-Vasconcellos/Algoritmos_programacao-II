#include <stdio.h>

void calcularAreaEPerimetro(float largura, float altura, float *area, float *perimetro){
    *area =  (largura * altura);
    *perimetro = (2 * (largura + altura));
    
}


int main(){

    float largura, altura;
    float area = 0;
    float perimetro = 0;
    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    calcularAreaEPerimetro(largura, altura, &area, &perimetro);

    printf("A area= %.2f\nO perimetro= %.2f \n", area, perimetro);

    return 0;
}