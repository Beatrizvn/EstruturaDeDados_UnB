#include <stdio.h>

#define less(A, B) (A < B) 
#define exch(A,B) int t = A; A = B; B = t;

void bubbleSort(int *v, int l, int r){

    for(int i = l; i<r; i++){
        for(int j=l; j<r; j++){
            if(less(v[j+1],v[j])){
                exch(v[j+1],v[j]);
            }
        }
    }
}

int main(){
    int v[1002];
    int tam=0;

    while(scanf("%d", &v[tam]) != EOF){
        tam++;
    }

    bubbleSort(v, 0, tam-1);

    for(int k = 0; k < tam; k++){
        printf("%d ", v[k]);        
    }


    return 0;
}
