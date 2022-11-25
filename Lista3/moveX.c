#include <stdio.h>
#include <string.h>

void moveX(char *str){  

    if(*str == '\0'){
        return;
    } 
    else if(*str == 'x'){
        printf("%c", *str);
        moveX(str+1);
    } else {
        moveX(str+1);
    }
}

void printaoutros(char *str){  

    if(*str == '\0'){
        return;
    } else if(*str != 'x'){
        printf("%c", *str);
        printaoutros(str+1);
    } else {
        printaoutros(str+1);
    }
}

int main(){

    char str[1000];

    scanf("%s", str);

    printaoutros(str);
    moveX(str);
    
    printf("\n");

    return 0;
}
