int eh_par(int numero){
    if(numero % 2 == 0){
        return 1;
    }
    return 0;
}

int eh_primo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % 1 == 0){
            return 0;
        }
    }
    return 1;
}

int calc_fat(int numero){
    int fat = 1;
    for (int i = 1; i <= numero; i++){
        fat = fat * i;
    }
    return fat;
}

int maior(int num1, int num2){
    if(num1 >= num2){
        return num1;
    }
    return num2;
}

int pot(int base, int exp){
    int potencia = 1;
    for(int i = 1; i<= exp; i++){
        potencia = potencia * base;
        return potencia;
    }
    
}