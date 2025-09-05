#include<stdio.h>

int f_iter(int n ){
    int x = 0, aux = 0;
    if(n == 1){
        return x;
    }
    int y = 1;
    if(n == 2){
        return y;
    }
    for(int i = 0; i < n - 2; i++){
        aux = y;
        y = y + x;
        x = aux;
    }
    return y;
}

int main(){
    printf("%d\n", f_iter(6));
    return 0;
}