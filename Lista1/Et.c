#include<stdio.h>
#include<stdlib.h>

int main() {
    char palavra[30];
    char nome_et[30] =  "Leonardo Cicero Marciano";
    int verifica = 0;

    while(scanf("%s", palavra) != EOF) 
        if (strcmp(palavra,"marte") == 0){
            printf("%s", nome_et);
            verifica = 1;
            break;
        }
        if (verifica == 0)
            printf("none");

    return 0;
 
}