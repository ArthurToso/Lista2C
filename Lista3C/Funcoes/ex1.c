#include <stdio.h>

int dobro (int num){
    printf("%d", num*num);
    return num* num;
}

int main(){

    dobro(2);

    return 0;
}