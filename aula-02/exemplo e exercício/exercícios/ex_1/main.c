#include<stdio.h>
#include"calculadora.h"

int main(){
    float a = 10, b = 2;
    printf("a = %.2f, b = %.2f\n", a, b);
    printf("soma = %.2f\n", somar( a, b));
    printf("sub = %.2f\n", sub(a, b));
    printf("mult = %.2f\n", mult(a, b));
    printf("div = %.2f\n", div(a, b));
    return 0;
}
