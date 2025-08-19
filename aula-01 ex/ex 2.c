#include<stdio.h>
#include<math.h>

void main(){
    float hora, minuto, segundo, atual, segundos_mn, juntar; 

    printf("Qual a hora atual: ");
    scanf("%f", &hora);
    printf("Qual o minuto atual: ");
    scanf("%f", &minuto);
    printf("Qual o segundo atual: ");
    scanf("%f", &segundo);

    atual = segundo + (minuto * 60) + (hora* 60 * 60);
    segundos_mn = (24 * 60 * 60);

    printf("Se passaram %f segundos desde a 0h\n", atual);
    printf("Faltam %f segundos para meia noite\n", (segundos_mn - atual));


    printf("faltam %.2f segundos", segundos_mn);
    



}

