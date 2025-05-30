#include <stdio.h>

int main (){                

                    //definindo a matriz
    int i,j;
    char linha [10]= {'A','B','C','D','E','F','G','H','I','J'} ;      
    
    int tabuleiro [10][10]=
    {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,3,3,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
        
    };
    
                // tentando colocar as letras em cima
    printf("   ");
    for (i = 0; i < 10; i++) {          //precisei buscar ajuda na internet para lembrar
        printf(" %c", linha[i]);// "i" representa a o eixo principal e "j" o secundario de X e Y
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", i); // "i" representa a o eixo principal/vertical e "j" o secundario/horizontal de X e Y
        for (j = 0; j < 10; j++) { // "i" representa a o eixo principal e "j" o secundario de X e Y
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");  // Quebra de linha DENTRO do loop
    }
    
        printf("\n");
    return 0;
}