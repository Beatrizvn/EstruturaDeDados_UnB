#include <stdio.h>

#define less(A, B) (A < B) 
#define exch(A,B) int t = A; A = B; B = t;

void selection(int *v, int l, int r){
    for(int i = l; i<r; i++){
        int min = i;
        for(int j=i+1;j<=r;j++){
            if(less(v[j],v[min])){
                min=j;
            }
        }
        exch(v[i],v[min]);
    }
}

int main(){
    int v[1001];
    int tam=0;

    while(scanf("%d", &v[tam]) != EOF){
        tam++;
    }

    selection(v, 0, tam-1);

    for(int k = 0; k < tam; k++){
        printf("%d ", v[k]);        
    }
    

    return 0;
}
