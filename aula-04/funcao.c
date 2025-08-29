#include<stdio.h>
#include"funcao.h"

int menu(){
    int opcao;
    while(1){
        printf("=============================\n");
        printf("1) Calcular área do círculo\n");
        printf("2) Calcular área do retângulo\n");
        printf("3) Calcular área do triângulo\n");
        printf("4) sair\n");
        printf("=============================\n");
        printf("\ndigite sua opção: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4){
                return opcao;
            }
        printf("\nOpção inválida\n");
    }
}


float calcula_circulo(){
    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    return 3.1415 * raio * raio;
}

float calcula_retangulo(){
    float base, altura;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("DIgit")
}