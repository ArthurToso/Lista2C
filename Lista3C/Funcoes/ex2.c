#include <stdio.h>

void Data(int dia, int mes, int ano) {

    printf("%d/%d/%d\n", dia, mes, ano);
}

int main() {

    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    Data(dia, mes, ano);

    return 0;
}