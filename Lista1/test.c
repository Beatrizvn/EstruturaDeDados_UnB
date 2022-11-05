#include<stdio.h>

int main() {

    int a, n;
    int soma = 0;

    scanf("%d", &n);

  for(int i=0; i<n; i++){

     scanf("%d", &a);
     soma += a;
     
  }

    printf("%d", soma);

    return 0;
}