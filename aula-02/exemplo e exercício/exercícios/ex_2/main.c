#include<stdio.h>
#include"numeros.h"

int main(){
    printf("%d\n", eh_par(3));
    printf("%d\n", eh_par(10));

    printf("%d\n", eh_primo(4));
    printf("%d\n", eh_primo(9));

    printf("%d\n", calc_fat(3));
    printf("%d\n", calc_fat(51));

    printf("%d\n", maior(15, 12));
    printf("%d\n", maior(1, 2));

    printf("%d\n", pot(5, 4));
    printf("%d\n", pot(2, 8));

    return 0;
}