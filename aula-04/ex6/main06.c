#include<stdio.h>

int f_rec(int x, int n){
    if(n == 0){
        return 1;
    }
    return f_rec(x, n - 1) * x;
}

int f_inter(int x, int n){
    int res = 1;
    for(int i = 0; i < n; i++){
        res *= x;

    }
}

int main(){
    printf("Recursiva %d\n", f_rec(2, 6));
    printf("interativoa %d\n", f_iter(2, 6));

    return 0;
}