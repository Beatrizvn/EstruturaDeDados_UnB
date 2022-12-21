#include <stdio.h>

#define less(A, B) (A < B) 
#define exch(A,B) int t = A; A = B; B = t;
#define lessExch(A, B) if(less(B, A)){exch(A, B);}

typedef struct{
    int pos; //para salvar a posição
    int elem; //para salvar o elemento
} Item;

void merge(Item *A, int start, int mid,int end){
    int p = start, q = mid +1;

    int Arr[end-start + 1];
    int k = 0;

    for(int i = start; i <= end; i++){
        if(p>mid){
            Arr[k++] = A[q++].elem;
        }
        else if(q>end){
            Arr[k++] = A[p++].elem;
        }
        else if(A[p].elem<A[q].elem){
            Arr[k++] = A[p++].elem;
        }
        else{
            Arr[k++] = A[q++].elem;
        }
    }

    for(int p = 0; p<k;p++){
        A[start++].elem = Arr[p];
    }
}

void mergeSort(Item *A, int start, int end){
    if(start<end){
        int mid = (start + end)/2;
        mergeSort(A,start,mid);
        mergeSort(A,mid+1,end);
        merge(A,start,mid,end);
    }
}

int busca(Item *v, int l, int r, int b){
    if(r<l) {
        return r + 1;
    }

    int meio = (l+r)/2;

    if(v[meio].elem < b){ // meio < b
        return busca(v,meio+1,r, b);

    } else if(b < v[meio].elem){ // b < meio
        return busca(v,l,meio-1,b);
        
    } else{
        return meio;
    }

} 

int main(){

    int m =0, n = 0;
    int resposta = 0;

    scanf("%d %d", &m, &n);

    Item v[m];
    int nBuscando[n];

    for(int i=0; i < m;i++){
        scanf(" %d", &v[i].elem); //v[i].elem = valor digitado no scanf
        v[i].pos = i;           //posição do valor digitado é salvo em v[i].pos 
    }

    for(int j=0; j < n;j++){
        scanf(" %d", &nBuscando[j]);
    }

    mergeSort(v,0,m-1);

    for(int i = 0; i < n; i++){
        resposta = busca(v, 0, m-1, nBuscando[i]);
        printf("%d\n", resposta); 
    }

    return 0;
}
