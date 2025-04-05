/*Programa para criar uma matriz */

#include <stdio.h>

#define DIMENSAO1 3
#define DIMENSAO2 3

int main(){

    int i, j, valor, matriz[DIMENSAO1][DIMENSAO2];

    for(i = 0; i < DIMENSAO1; i++){
        for(j = 0; j < DIMENSAO2; j++){
            printf("Digite valor [%d %d]: ", i,j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
    //Mostrar matriz na tela
    printf("\n");
    for(i = 0; i < DIMENSAO1; i++){
        printf("\t");
        for(j = 0; j < DIMENSAO2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Mostrar a diagonal principal
    printf("\n");
    for(i = 0; i < DIMENSAO1; i++){
        printf("\t");
        for(j = 0; j < DIMENSAO2; j++){
            if(matriz[i] == matriz[j]){
                printf("%d ", matriz[i][j]);
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Mostrar valores abaixo da diagonal principal
    printf("\n");
    for(i = 0; i < DIMENSAO1; i++){
        printf("\t");
        for(j = 0; j < DIMENSAO2; j++){
            if(i >= j){
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    // Mostrar valores acima da diagonal secundaria
    printf("\n");
    for(i = 0; i < DIMENSAO1; i++){
        printf("\t");
        for(j = 0; j < DIMENSAO2; j++){
            if(i <= j){
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    // Mostrar valores abaixo da diagonal principal
    printf("\n");
    for(i = 0; i < DIMENSAO1; i++){
        printf("\t");
        for(j = 0; j < DIMENSAO2; j++){
            if(j == DIMENSAO2 - 1 - i){
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}