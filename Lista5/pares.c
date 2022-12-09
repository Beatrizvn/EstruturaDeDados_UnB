#include <stdio.h>

void pares(char *str, int cont){

    if (*(str+2) == '\0'){
        printf("%d\n",cont);
        return;
    }
    else if(*str == *(str+2)){
        cont = cont + 1;
        pares(str+1, cont);
    }else {
        pares(str+1, cont);
    }

}

int main(){

    char str[201];
    int cont = 0;

    scanf("%s", &str);

    pares(str,cont);

    return 0;
}
