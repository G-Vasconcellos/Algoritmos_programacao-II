#include <stdio.h>

void converteTempo(int total_segundos, int *horas, int *minutos, int *segundos){

    *horas = total_segundos / 3600;
    total_segundos = total_segundos % 3600;
    *minutos = total_segundos / 60;
    *segundos = total_segundos % 60;
}


int main () {

    int tempo, horas, minutos, segundos;

    printf("Escreva a quantidade de segundos que deseja:");
    scanf("%d", &tempo);

    converteTempo(tempo, &horas, &minutos, &segundos);

    printf("Horas=%d minutos= %d segundos=%d\n", horas,minutos, segundos);

}



    // horas = segundos/3600
    // total-segundo = total-segundos % 3600;
    // minutos = total-segundos / 60;
    // segundos = total_segundos % 60;