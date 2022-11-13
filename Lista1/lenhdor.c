#include <stdio.h> 
 
int main() { 
    int numLinhas, numGalhos, linhaGalho; 
    int qtdColunas = 11; 
    int alturaLenhador = 0; 
    char jogo[1000][qtdColunas];  
    char ladoGalho, ladoLenhador, comandoLenhador; 

    scanf("%i", &numLinhas); 
    scanf("%i", &numGalhos); 

    for (int l = 0; l < numLinhas; l++){     
        for (int c = 0; c < qtdColunas; c++){      
            if (c > 3 && c<7){ 
                jogo[l][c] = '|'; 
            } 
            else{ 
                jogo[l][c] = ' '; 
            } 
        } 
    } 

    for (int i = 0; i < numGalhos; i++){    
        scanf(" %c %i", &ladoGalho, &linhaGalho); 

        if (ladoGalho == 'D'){    
            jogo[linhaGalho - 1][9] = '-'; 
            jogo[linhaGalho - 1][8] = '-'; 
            jogo[linhaGalho - 1][7] = '-';    
        } else { 
            jogo[linhaGalho - 1][1] = '-'; 
            jogo[linhaGalho - 1][2] = '-'; 
            jogo[linhaGalho - 1][3] = '-';  
        } 
    }  

    scanf(" %c", &ladoLenhador); 
    if (ladoLenhador == 'D'){ 
          jogo[alturaLenhador][8] = 'L'; 
          jogo[alturaLenhador + 1][8] = 'L'; 
    } else{ 
          jogo[alturaLenhador][2] = 'L'; 
          jogo[alturaLenhador + 1][2] = 'L';  
    }

    printf("~~~~~~~~~~~\n"); 
    for (int i = alturaLenhador + 4; i >= 0; i--){ 
        for (int c = 0; c < qtdColunas; c++){ 
            printf("%c", jogo[i][c]); 
        } 
        printf("\n"); 
    } 

    printf("~~~~~~~~~~~\n"); 
    while (scanf(" %c", &comandoLenhador) > 0){ 

        if (comandoLenhador == 'B' && ladoLenhador == 'D'){ 
                if (jogo[alturaLenhador][6] == '<'){ 
                    alturaLenhador = alturaLenhador + 1; 
                    if (jogo[alturaLenhador + 1][7] == '-'){ 
                            printf("**morreu**\n"); 
                            return 0; 
                        } else{ 
                            jogo[alturaLenhador + 1][8] = 'L'; 
                        } 
                } else{ 
                    jogo[alturaLenhador][6] = '<'; 
                } 
        } 
        else if(comandoLenhador == 'B' && ladoLenhador == 'E'){ 
                if (jogo[alturaLenhador][4] == '>'){ 
                    alturaLenhador = alturaLenhador + 1; 
                    if (jogo[alturaLenhador + 1][3] == '-'){     
                            printf("**morreu**\n"); 
                            return 0; 
                        } else{ 
                            jogo[alturaLenhador + 1][2] = 'L'; 
                        } 
                } else{ 
                    jogo[alturaLenhador][4] = '>'; 
                } 
        } 
        else if(comandoLenhador == 'T' && ladoLenhador == 'E'){            
            if (jogo[alturaLenhador][8] == '-' || jogo[alturaLenhador + 1][8] == '-'){ 
                printf("**beep**\n"); 
                continue; 
            } else{ 
                jogo[alturaLenhador][2] = ' '; 
                jogo[alturaLenhador + 1][2] = ' '; 
                jogo[alturaLenhador][8] = 'L'; 
                jogo[alturaLenhador + 1][8] = 'L'; 
                ladoLenhador = 'D'; 
              }
        } 
        else if (comandoLenhador == 'T' && ladoLenhador == 'D'){ 
          if (jogo[alturaLenhador][2] == '-' || jogo[alturaLenhador + 1][2] == '-'){ 
                printf("**beep**\n"); 
                continue; 
            } else{ 
                jogo[alturaLenhador][2] = 'L'; 
                jogo[alturaLenhador + 1][2] = 'L'; 
                jogo[alturaLenhador][8] = ' ';
                jogo[alturaLenhador + 1][8] = ' '; 
                ladoLenhador = 'E'; 
          }
        }  

        printf("~~~~~~~~~~~\n"); 
        for (int i = alturaLenhador + 4; i >= alturaLenhador; i--){ 
            for (int c = 0; c < qtdColunas; c++){ 
                if (jogo[i][c]) { 
                    printf("%c", jogo[i][c]); 
                } else { 
                    printf(" "); 
                } 
            } 
            printf("\n"); 
        } 
        printf("~~~~~~~~~~~\n"); 
    } 

    return 0;
}