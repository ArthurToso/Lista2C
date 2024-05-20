#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int aux = 1;

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    for(int i = 0; string1[i] != '\0' || string2[i] != '\0'; i++) {
        if(string1[i] != string2[i]) {
            aux = 0;
            break;
        }
    }

    if(aux == 1) {
        printf("As strings sao iguais\n");
    } else {
        printf("As strings sao diferentes\n");
    }

    return 0;
}