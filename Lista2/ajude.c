#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, soma;
    int somaCerta = 0;

    for(int i = 0; i < 3; i++){
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