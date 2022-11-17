#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, soma,n;
    int somaCerta = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        somaCerta += x;
    }

    scanf("%d", &soma);

    if(somaCerta==soma){
        printf("Acertou\n");
    }else{
        printf("Errou\n");
    }

    return 0;

}