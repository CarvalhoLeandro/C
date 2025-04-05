/*Programa que cria um vetor de tamanho 4 e lê do teclado 4 notas de um aluno, 
soma e calcula a média*/

#include <stdio.h>

#define TAMANHO 4

int main(){

    int i;
    float nota = 0, notas[TAMANHO];

    // Preencher o vetor
    for(i = 0; i < TAMANHO; i++){
        printf("Digite uma nota: ");
        scanf("%f", &nota);
        notas[i] = nota;
    }

    //Percorrer o vetor
    float soma;
    for(i = 0; i < TAMANHO; i++){
        soma += notas[i];
    }

    //Calculo média
    float media = soma / TAMANHO;

    printf("\nMedia = %.2f\n", media);

     return 0;
}


