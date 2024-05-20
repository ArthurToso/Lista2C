#include <stdio.h>

int main() {
    int arr[6];
    
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Valores armazenados:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}