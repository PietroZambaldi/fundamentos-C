#include<stdio.h>

int main(){
    int num, cont = 0, acum = 0;
    while(1){
            do{
                printf("Digite um número: ");
                scanf("%d", &num);
            }while(num < 1 || num > 100);
            if(num == 0){
                break;
            }
            acum += num;
            cont++;
    }
    // do{
    //     printf("Digite um número: ");
    //     scanf("%d", &num);
    // }while(num < 1 || num > 100);
    printf("A média é %.2f\n ", (float)(acum / cont));
    return 0;
}