int faz_conta_direito(int parcelas, char op){
    int x;
    int saida = 0;
    int n1 = 0;

    if(op == '+'){
        for(int i = 0; i < parcelas; i++){
            scanf("%d", &x);
            saida += x;
        }
    } else if (op == '-'){
        for(int i = 0; i < parcelas; i++){
            scanf("%d", &x);
            if(i == 0){
                n1 = x;
            } else{
                n1 -= x; 
            }
            saida = n1;
        }
    }
    return saida;
}