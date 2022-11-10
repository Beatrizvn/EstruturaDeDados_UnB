#include<stdio.h>

int main() {
    
    int nLinhas, lin, col, proxL, proxC;    
    int ultimaCol;

    char comando;
    char texto[1001][1001];


    scanf("%d", &nLinhas);

    for(int i= 1;i<= nLinhas; i++){
        scanf(" %1000[^\n]s", texto[i]);
    }

    scanf("%d %d", &lin, &col);
    proxC = col;
    proxL = lin;

    while (scanf("\n%c", &comando) != EOF){

        if(comando == 'j'){

            if ((proxL + 1) <= nLinhas){
                proxL = proxL +1;

                char *textP = texto[proxL];
                int cont = 0;

                for (int j = 0; j < 1001; j++){
                    if (textP[j] != '\0'){
                        cont++;
                    } 
                }

                ultimaCol = cont;

                if(proxC > ultimaCol || (ultimaCol < col && proxC < ultimaCol)){
                    proxC = ultimaCol;
                } else{
                    proxC = col;
                }

            }

        } 
    
        if(comando == 'k'){
            if (proxL > 1){
                proxL = proxL - 1 ;

                char *textP = texto[proxL];
                int cont = 0;

                for (int j = 0; j < 1001; j++){
                    if (textP[j] != '\0'){
                        cont++;
                    } 
                }

                ultimaCol = cont;

                if(proxC > ultimaCol || (ultimaCol < col && proxC < ultimaCol)){
                    proxC = ultimaCol;
                } else{
                    proxC = col;
                }

            }            
        }
        
        printf("%d %d %c\n", proxL, proxC, texto[proxL][proxC - 1]);

    }

    return 0;    
    
}
