#include <stdio.h>

void limite(int *a, int b, int soma){
    if(*a == '\0'){
        return;
    }
    soma = *a + soma;

    if(soma > b){
        soma = 0;
        limite(a+1 ,b,soma);
        printf("%d\n",*a);

    } else{
        limite(a+1 ,b,soma);
    }

}

int main(){
    int a[1000],x,b,soma = 0, i=0;

    while(scanf("%d", &x)){
        if(x == 0){
            break;
        }
        else{
            a[i] = x;
            i++;
        }
    }

    scanf("%d", &b);

    limite(a,b,soma);

    return 0;
}
