#include<stdio.h>
#include"calc.h"

int eh_par(int a){
    if( a % 2 == 0){
        return printf("é par"), 01;
    }
    return printf("não é par"), 00;
}

int eh_impar(int a){
    if( a % 2 == 0){
        return printf("é ímpar"), 01;
    } 
    return printf("não é impar"), 00;
}


int fatorial(int num){
    int fat = 1;
    for(int i = 1; i <= num; i++){
        fat = fat * i;
    }
    return fat;
}

int maior(int num1,int num2){
        if(num1 >= num2){
            return num1;
        }
        return num2;
    }

int pot(int base, int exp){
    int potencia = 1;
    for(int i = 1; i <= exp; i++){
        potencia = potencia * base;
    }
    return potencia;
}