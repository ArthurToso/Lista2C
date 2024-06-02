#include <stdio.h>

int main() {

    int var1;
    int var2;

    printf("Digite o numero1: ");
    scanf("%d", &var1);
    printf("Digite o numero2: ");
    scanf("%d", &var2);

    int *ptr_var1 = &var1;
    int *ptr_var2 = &var2;

    if (ptr_var1 > ptr_var2) {
        printf("O conteudo da variavel 1 eh: %d\n", *ptr_var1);
    } else {
        printf("O conteudo da variavel 2 eh: %d\n", *ptr_var2);
    }

    return 0;
}