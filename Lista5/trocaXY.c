#include <stdio.h>

void moveXY(char *str){
    if (*str == '\0'){
        return;
    }
    else if(*str == 'x'){
        *str = 'y';
        moveXY(str+1);
    } else{
        moveXY(str+1);
    }
}

int main(){
    char str[81];

    scanf("%s", str);

    moveXY(str);

    printf("%s \n",str);

    return 0;

}