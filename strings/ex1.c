
#include <stdio.h>

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("A string digitada eh : %s", str);
    
    return 0;
}