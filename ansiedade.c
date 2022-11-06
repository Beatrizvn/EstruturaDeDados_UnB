#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char resp[5];
    int contadorSim = 0, contTriagem = 0;
    int n = 0;
    int z = 0;
    
    while(scanf("%s", resp) != EOF)

        for(int i=0; i<1;i++){
            n++;

            if(strcmp(resp, "sim")==0){
                contadorSim++;
            } 

            if(contadorSim == 2 && z == 0){
                contTriagem++;
                z = 1;
            }

            if(n == 10){
                contadorSim = 0;
                n = 0;
                z = 0;
            }
        }
        
        printf("%d\n", contTriagem);

    return 0;
 
}
