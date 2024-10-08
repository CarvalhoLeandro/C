#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Exercício 09 - Escrever um programa em C que calcule e imprima o número
de caracteres distintos presentes em uma cadeia de caracteres dada.
Considerar o tamanho máximo da cadeia como sendo de 80 colunas.*/

int main()
{
    char frase[80];
    int copia[80];
    int ascii[255] = {0}; // Preenchendo 0 vetor com zeros
    int i=0,tam=0;


    printf("Ditite uma frase: ");
    scanf("%80[^\n]",frase);
    strlwr(frase);// Passando para minúsculo
    tam = strlen(frase);// Pegando tamanho da frase

    //Preencher ascii com zero
    //for(i = 0;i <= 255;i++)
        //ascii[i] = 0;

    //Transformando de char para int
    for(i = 0;i <= tam;i++)
        copia[i] = frase[i];

    //Contar quantidade de vezes
    for(i = 0;i < tam;i++){
        if(copia[i] != 32)
            ascii[copia[i]]++;
    }
    //Imprimindo
    for(i = 0;i < 255;i++){
        if(ascii[i] >= 1)
            printf(" %c - %d vez(es)\n",i,ascii[i]);
    }
}
