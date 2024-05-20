#include <stdio.h>

int main() {
    float num[10];
    float result[10];
    

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }
    

    for (int i = 0; i < 10; i++) {
        result[i] = num[i] * num[i];
    }

    printf("numeros originais e seus quadrados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f = %.2f\n", num[i], result[i]);
    }
    
    return 0;
}