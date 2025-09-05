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



// #include<stdio.h>

// int f_iter(int n ){
//     int x = 0, aux = 0;
//     if(n == 1){
//         return x;
//     }
//     int y = 1;
//     if(n == 2){
//         return y;
//     }
//     for(int i = 0; i < n - 2; i++){
//         aux = y;
//         y = y + x;
//         x = aux;
//     }
//     return y;
// }

// int main(){
//     printf("%d\n", f_iter(6));
//     return 0;
// }

