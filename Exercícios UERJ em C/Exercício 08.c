#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 50
/*8)Para um vetor A de 50 números inteiros, escrever um programa em C
que determine o maior e o segundo maior elemento desse vetor. Assumir
que todos os elementos são distintos.*/



int main()
{
    int vetor[TAM];
    int i,p_maior=0,s_maior=0;

    srand(time(NULL));

    for(i = 0;i <= TAM;i++){
        vetor[i] = rand() % 100;
    }

    for(i = 0;i <= TAM;i++){
        printf("%d ",vetor[i]);
        if(vetor[i] > p_maior){
            p_maior = vetor[i];
        }
        if(vetor[i] < p_maior && vetor[i] > s_maior){
            s_maior = vetor[i];
        }

    }
    printf("\n\nMaior numero: %d", p_maior);
    printf("\n\nSegundo maior numero: %d\n", s_maior);

    return 0;
}
