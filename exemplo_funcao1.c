#include <stdio.h>

float media(float n1, float n2, float n3) {
    float result, menor;
    // Encontrar a menor nota do Aluno A
    menor = n1;
    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }

    // Calcular a média das duas maiores (soma total - menor nota) / 2
    result = (n1 + n2 + n3 - menor) / 2.0;

    return result;
}

int main() {
    float a1, a2, a3, mediaA;
    float b1, b2, b3, mediaB;

    // --- ALUNO A ---
    printf("Digite as 3 notas do Aluno A (separadas por espaco): ");
    scanf("%f %f %f", &a1, &a2, &a3);

    mediaA = media(a1, a2, a3);

    // --- ALUNO B ---
    printf("Digite as 3 notas do Aluno B (separadas por espaco): ");
    scanf("%f %f %f", &b1, &b2, &b3);

    mediaB = media(b1, b2, b3);


    // --- SAÍDA DE DADOS E COMPARAÇÃO ---
    printf("\n--- RESULTADOS ---\n");
    printf("Media das duas melhores notas do Aluno A: %.2f\n", mediaA );
    printf("Media das duas melhores notas do Aluno B: %.2f\n", mediaB );

    if (mediaA > mediaB) {
        printf("Vencedor: O Aluno A teve a media mais alta!\n");
    } else if (mediaB > mediaA) {
        printf("Vencedor: O Aluno B teve a media mais alta!\n");
    } else {
        printf("Empate: Os dois alunos tiveram a mesma media!\n");
    }

    return 0;
}