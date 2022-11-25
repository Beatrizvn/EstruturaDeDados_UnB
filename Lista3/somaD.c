#include <stdio.h>

int soma(char *num, int s){
    if(*num == '\0'){
        return s;
    }
    else{
        s += (*num -'0');
        return soma(num+1,s);
    }
}

int main(void){
    char n[12];

    scanf(" %s", n);
    printf("%d\n", soma(n,0));
    
    return 0;
}