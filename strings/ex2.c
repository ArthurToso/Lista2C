#include <stdio.h>

int main() {
    char str[100]; 
    int aux = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 
    
    while (str[aux] != '\0') {
        aux++;
    }
    
    if (str[aux - 1] == '\n') { 
        aux--;
    }

    printf("O tamanho da string eh: %d\n", aux);

    return 0;
}