#include<stdio.h>
#include<stdlib.h>
/*Exercício 19 - Escreva um programa em C que leia os dados de uma matriz M(5,5) e calcule as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secundária;
e) de todos os elementos da matriz;
f) Escreva estas somas e a matriz*/

int tam = 3;
int main()
{
    int m[tam][tam];
    int i,j,somaC1=0, somaL4=0, somaDP=0, somaDS=0, somaT=0;

    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
            printf("preencher posicao %d - %d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    //--------------------- imprimir---------------------------
    printf("\n---------- Matriz M ----------\n");
    for(i = 0;i < tam;i++){
        printf("\t");
        for(j = 0;j < tam;j++){
            printf("%3d ",m[i][j]);

        }printf("\n");
    }
    //------------------somalinha------------------------
     for(i=0;i < tam;i++){
        somaL4 = 0;
        for(j = 0;j < tam;j++){
            somaL4 += m[2][j];
        }
     }
    // -----------------somacoluna---------------------
     for(j=0;j < tam;j++){
        somaC1 = 0;
        for(i = 0;i < tam;i++){
            somaC1 += m[i][1];
        }
     }
     //--------somadiagonalprincipalesecundaria------------------
     for(i=0;i < tam;i++){
        somaDP += m[i][i];
        somaDS += m[i][tam - 1 - i];
     }
    //----------------somatodoselementos--------------------------
    for(i=0;i < tam;i++){
        for(j = 0;j < tam;j++){
            somaT += m[i][j];
        }
    }
    printf("\nSoma linha 2: %d",somaL4);
    printf("\nSoma coluna 1: %d",somaC1);
    printf("\nSoma Diagonal Principal: %d",somaDP);
    printf("\nSoma Diagonal Secundaria: %d",somaDS);
    printf("\nSoma todos elementos: %d\n",somaT);

    return 0;
}

