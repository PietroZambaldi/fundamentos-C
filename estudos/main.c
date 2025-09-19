#include<stdio.h>
#include"calc.h"

int main(){
    printf("%.2d\n", eh_par(2));
    printf("%.2d\n", eh_par(9));

    printf("%.2d\n", eh_impar(2));
    printf("%.2d\n", eh_impar(9));

    printf("%.2d\n", fatorial(5));

    printf("%.2d\n", maior(4, 5));
    printf("%.2d\n", maior(8, 5));

    printf("%.2d\n", pot(5, 3));
    printf("%.2d\n", pot(2, 10));
}