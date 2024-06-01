#include <stdio.h>
#include <math.h>
#define PI 3.14

float volumeEsfera(float raio){
    float volume;
    volume = 4/3 * PI * pow(raio, 3);
    printf("%.2f", volume);
    
    return volume;
}

int main(){
    float raio;

    printf("Digite o Raio de uma esfera: ");
    scanf("%f", &raio);

    volumeEsfera(raio);

    return 0;
}