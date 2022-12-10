#include <stdio.h>

int main(){
    char oitavas[8], quartas[4], semi[2], final;
    int  n1, n2;

    //oitavas
    for (int i = 0; i < 8; i++) {
        scanf("%d %d", &n1, &n2);
        if(n1 > n2){
            oitavas[i] = 65 + (2*i);
        } else{
            oitavas[i] = 65 + (2*i) + 1;
        }
    }
    //quartas
    for (int j = 0; j < 4; j++){
        scanf("%d %d", &n1, &n2);
        if(n1 > n2){
            quartas[j] = oitavas[2*j];
        }
        else{
            quartas[j] = oitavas[2*j + 1];
        };
    }
    //semi
    for (int k = 0; k < 2; k++){
        scanf("%d %d", &n1, &n2);
        if(n1 > n2) {
            semi[k] = quartas[2*k];
        }
        else{
             semi[k] = quartas[2*k + 1];
        }
    }
    //final
    scanf("%d %d", &n1, &n2);
    if(n1 > n2) {
        final = semi[0];
    }
    else{ 
        final = semi[1];
    }

    printf("%c\n", final); 
    return 0;
}

