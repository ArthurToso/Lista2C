#include <stdio.h>

int converterSegundos(int horas, int minutos, int segundos) {
    int totalSegundos;
    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    return totalSegundos;
}

int main() {
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    int totalSegundos = converterSegundos(horas, minutos, segundos);

    printf("%d horas, %d minutos e %d segundos equivalem a %d segundos.\n", horas, minutos, segundos, totalSegundos);

    return 0;
}