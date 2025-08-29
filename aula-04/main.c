#include<stdio.h>
#include"funcao.h"

int main(){
    int opcao = menu();

    if(opcao == 1){
        printf("%.2f\n", calcula_circulo());
    }

    return 0;  
}
