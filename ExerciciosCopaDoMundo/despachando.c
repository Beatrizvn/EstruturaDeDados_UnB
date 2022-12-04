#include <stdio.h>

int main(){

    int d,a,p,l;

    scanf("%d", &d);
    scanf("%d %d %d", &a, &l, &p);

    if(d <= a && d <=l && d <=p){
        printf("S\n");
    }else{
        printf("N\n");
    }
        

    return 0;
}
