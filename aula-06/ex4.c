void formatar_nome(char *nome){
    int i = 0;
    while(nome[i] == ' '){
        nome[i] = nome[i + 1];
        i++;

    }
}