#include <stdio.h>

#define less(A, B) (A < B) 
#define exch(A,B) int t = A; A = B; B = t;
#define lessExch(A, B) if(less(B, A)){exch(A, B);}

void inser(int *v, int l, int r){

    for(int i = r; i>l; i--){
        lessExch(v[i-1],v[i]);   
    }

    for(int i = l+2;i<=r;i++){
        int m = v[i];
        int j = i;

        while(less(m,v[j-1])){
            v[j] =v[j-1];
            j--;
        }

        v[j] = m;
    }
}

int main(){
    int *v;
    int tam=0;
    v = malloc(sizeof(int)*50000);

    while(scanf("%d", &v[tam]) != EOF){
        tam++;
    }

    inser(v, 0, tam-1);

    for(int k = 0; k < tam; k++){
        printf("%d ", v[k]);        
    }
    printf("\n");
    

    return 0;
}
