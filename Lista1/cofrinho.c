#include<stdio.h>

int main(){

    int n = 1;
    int d = 0; 
    int j = 0;
    int z = 0;
    int contador = 1;

    while (n!=0){

        scanf("%d", &n);
        if(n == 0) {
            break;
        }

        d = 0;

        printf("Teste %d\n", contador);

        for(int i=0; i<n; i++){
            scanf("%d %d", &j, &z);
            
            d = j - z +d;

            printf("%d\n", d );
            
        }
        
        contador++;

    }
}