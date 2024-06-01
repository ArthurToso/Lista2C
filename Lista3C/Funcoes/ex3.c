#include <stdio.h>

int verifica(int num){

    if(num > 0){
        printf("1");
        return 1;
    }else if(num < 0){
        printf("-1");
        return -1;
    }else if(num == 0){
        printf("0");
        return 0;
    }

}

int main (){
    int num;
    printf("Digite 1 numero:");
    scanf("%d", &num);

    verifica(num);

    return 0;
}