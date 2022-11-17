 #include <stdio.h>
 
 int main(){

    int entrada[1000];
    int i = 0;

    while(scanf("%x", &entrada[i]) == 1){
        i++;
    }

    char *saida = entrada;
    printf("%s", saida);

    return 0;
 }
 