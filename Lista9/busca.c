#include <stdio.h>

#define EXCH(A,B) Item t = A; A = B; B = t;

typedef struct
{
    int pos; //para salvar a posição
    int elem; //para salvar o elemento
} Item;


void selection(Item *v, int l, int r){

    for(int i = l; i<r; i++){
        int min = i;

        for(int j=i+1;j<=r;j++){

            if(v[j].elem < v[min].elem){
                min=j;
            }
        }
        EXCH(v[i],v[min]);
    }
}


int busca(Item *v, int l, int r, int b){
    if(r<l) {
        return -1;
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

    selection(&v,0,m-1);

    for(int j = 0; j < n; j++){
        resposta = busca(v, 0, m, nBuscando[j]);
        if (resposta == -1) printf("-1\n");
        else printf("%d\n", v[resposta].pos); 
    }

    return 0;
}
