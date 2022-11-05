#include<stdio.h>

int main() {

    int beto = 0;
    int alice = 0;
    int n;
    
    scanf("%d", &n);
    
    int resul;

    while (n!=0){
        for(int i=0; i<n; i++){

            scanf("%d", &resul);
                    
            if(resul == 0){
                alice++;
            } else if (resul == 1){
                beto++;
            }
        }
        
        printf("\nAlice ganhou %d e Beto ganhou %d", alice, beto);
        scanf("%i", &n);
        beto = 0;
        alice = 0;
        }
        

    return 0 ;
}
