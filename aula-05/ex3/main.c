#include<stdio.h>

int main(){

    int tamanho = 8, maior = -1000, pos_maior, menor =  1000, pos_menor;
    int array[tamanho];

    for(int i = 0; i , tamanho; i++){
        scanf("%d", &array[i]);
        if(array[i] < menor){
            menor = array[i];
            pos_maior = i;
        }
        if(array[i] > maior){
            maior = array[i];
            pos_menor = i;
        }
    }

    for( int i = 0; i < tamanho; i++ ){
        printf("%d", array[i]);
    }
    printf("\n maior: %d posição: %d\nmenor: %dposição: %d", maior, pos_maior, menor, pos_menor);
    return 0;
}