#include <stdio.h>

void contrario(char *str){
    if (*str == '\0'){
        return;
    }
    
    contrario(str + 1);
    printf("%c", *str);
}

int main(){
    char str[501];

    scanf("%s", str);

    contrario(str);

    printf("\n");

    return 0;

}