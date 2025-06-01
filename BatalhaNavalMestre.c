#include <stdio.h>

#define LINHA 
#define COLUNA 

int main (){

int i;
int j;


        // tentando fazer a cruz com o numero 3

    for (i = 0; i < 5; i++){ 
    printf("%d",i);
        for ( j = 0; j < 5; j++)
        {
            
            if (i==2 || j==2)
            {
                printf(" 3");
            }else {
                printf(" 0");
            }
        
        }
        
        printf("\n");
    }

        //cone

int altura = 3;
int centro = 2;

for (i = 0; i < altura; i++) {
        printf("%d", i);
        for (j = 0; j < 5; j++) {
            if (j >= centro - i && j <= centro + i) {
                printf(" 4");
            } else {
                printf(" 0");
            }
        }
        printf("\n");
    }

    //octaedro

    int centro_linha = 2;
    int centro_coluna = 2;
    int raio = 2;

for (i = 0; i < 5; i++) {
    printf("%d", i);
    for (j = 0; j < 5; j++) {
        // condição do octaedro preenchido
        if ((i - centro_linha) + (j - centro_coluna) <= raio) {
        printf(" 5");
        } else {
        printf(" 0");
        }
        }
        printf("\n");
    }


    return 0;
}
