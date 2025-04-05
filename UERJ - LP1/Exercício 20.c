#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*Exercício 20 - Fazer um programa em C que faça a soma de duas matrizes.*/

int tam = 3;
int main()
{
    int m1[tam][tam],m2[tam][tam];
    int i,j,somaM=0;

    //---------lendonumerosinteirosaleatorios------
    srand(time(NULL));

    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
            m1[i][j] = rand() % 10;
            m2[i][j] = rand() % 10;
        }
    }
    //---------------imprimir----------------------
    printf("\n--------- MATRIZ 1 -----------\n");
    for(i = 0;i < tam;i++){
            printf("\t");
        for(j = 0;j < tam;j++){
            printf("%3d", m1[i][j]);
        }printf("\n");
    }
     printf("\n--------- MATRIZ 2 ----------\n");
     for(i = 0;i < tam;i++){
         printf("\t");
        for(j = 0;j < tam;j++){
            printf("%3d", m2[i][j]);
        }printf("\n");
    }
    //---------------soma-----------------------------
    for(i = 0;i < tam;i++){
        for(j = 0;j < tam;j++){
            somaM += m1[i][j] + m2[i][j];
        }
    }
    printf("\nSoma Matrizes = %d\n",somaM);
}
