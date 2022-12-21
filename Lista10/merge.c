#include <stdio.h>

void merge(int A[], int start, int mid,int end){
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

void mergeSort(int A[], int start, int end){
    if(start<end){
        int mid = (start + end)/2;
        mergeSort(A,start,mid);
        mergeSort(A,mid+1,end);
        merge(A,start,mid,end);
    }
}

int main(){
    int *v;
    int tam=0;

    v = malloc(sizeof(int)*50000);

    while(scanf("%d", &v[tam]) != EOF){
        tam++;
    }

    mergeSort(v, 0, tam-1);

    for(int k = 0; k < tam; k++){
        printf("%d ", v[k]);        
    }


    return 0;
}
