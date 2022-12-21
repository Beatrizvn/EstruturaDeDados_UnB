#include <stdio.h>


void merge(int *A, int start, int mid,int end){
    int p = start, q = mid +1;

    int Arr[end-start + 1];
    int k = 0;

    for(int i = start; i <= end; i++){
        if(p>mid){
            Arr[k++] = A[q++];
        }
        else if(q>end){
            Arr[k++] = A[p++];
        }
        else if(A[p]<A[q]){
            Arr[k++] = A[p++];
        }
        else{
            Arr[k++] = A[q++];
        }
    }

    for(int p = 0; p<k;p++){
        A[start++] = Arr[p];
    }
}

void mergeSort(int *A, int start, int end){
    if(start<end){
        int mid = (start + end)/2;
        mergeSort(A,start,mid);
        mergeSort(A,mid+1,end);
        merge(A,start,mid,end);
    }
}

int busca(int *v, int l, int r, int b){
    if(r<l) {
        return -1;
    }

    int meio = (l+r)/2;

    if(v[meio] < b){ // meio < b
        return busca(v,meio+1,r, b);

    } else if(b < v[meio]){ // b < meio
        return busca(v,l,meio-1,b);
        
    } else{
        return meio;
    }

} 

int main(){
    int n, num;

    scanf("%d", &n);

    int *proibido;
    proibido = malloc((sizeof(int)) * n);

    for (int i = 0; i < n; i++){
        scanf("%d", &proibido[i]);
    }

    mergeSort(proibido, 0, n-1);

    while (scanf("%d", &num) != EOF){
        int resposta = busca(proibido, 0, n - 1, num);
        if (resposta == -1) printf("nao\n");
        else printf("sim\n");
    }

    return 0;
}
