#include<stdio.h>

int main(){
    int tam = 4, soma_linha, num;
    int matriz[tam][tam], linhas[] = {0,0,0,0}, colunas[] = {0, 0, 0, 0};

    for(int linha = 0; linha < tam; linha++){
        soma_linha = 0;
        for(int coluna = 0; coluna < tam; coluna++){
            scanf("%d", &num); 
            matriz[linha][coluna] = num;
            linhas[linha] += num;
            colunas[coluna] += num;

        }
        for(int i = 0; i < tam; i++){
            printf("linha %d: %d\n", i + 1, linhas[i]);
            printf("coluna %d: %d\n", i + 1, colunas[i]);
        }
    }

    
    return 0;
}