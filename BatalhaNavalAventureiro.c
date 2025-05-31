#include <stdio.h>

#define linha 10

#define coluna 10
int main (){       

    char cabeca [10]= {'A','B','C','D','E','F','G','H','I','J'} ; 

    int i;
    int j;
    int matriz [linha][coluna]={0};
    matriz[2][2]=3;
    matriz[3][3]=3;                 //Não era pra tentar calcular algo, era so definir as localizações na matriz
    matriz[4][4]=3;

    matriz[9][1]=3;
    matriz[8][2]=3;
    matriz[7][3]=3;
    for ( i = 0; i < 10; i++)
    {   
        printf(" %c",cabeca[i]);
    }
    printf("\n");                   // IMPRESSÃO DAS LETRAS OK COM A DISTANCIA CORRETA, NÃO PRECISO ALTERAR ESTA PARTE
                                    
                                    

    for ( i = 0; i < 10; i++)
    {
        printf("%d",i);                 //IMPRESSÃO DE NUMERAÇÃO NO INICIO COLOCADA

        for ( j = 0; j < 10; j++)
        {
            printf(" %d", matriz[i][j]); // mapa sem numeração dos navios colocado com linhas de cabeçalho definidas
            
        }
        printf("\n");
        
    }                       
        printf("\n");

    return 0;
}