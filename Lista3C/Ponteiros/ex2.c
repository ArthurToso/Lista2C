#include <stdio.h>

int main() {

    int var1;
    int var2;

    int *ptr_var1 = &var1;
    int *ptr_var2 = &var2;

    if (ptr_var1 > ptr_var2) {
        printf("O endereco da variavel 1 (%p) eh maior.\n", (void*)ptr_var1);
    } else {
        printf("O endereco da variavel 2 (%p) eh maior.\n", (void*)ptr_var2);
    }

    return 0;
}