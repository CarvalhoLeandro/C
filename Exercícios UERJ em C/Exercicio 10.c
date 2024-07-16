#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_PALAVRA 80
#define TAM_PALAVRA 20

/* Exercício 10 - Escrever um programa em C que calcule a frequência de uso de cada palavra dentro
de uma cadeia de caracteres que possui diversas palavras. Considerar o tamanho máximo da cadeia como
sendo de 80 colunas.*/

typedef struct{
    char palavra[TAM_PALAVRA];
    int cont;
}Freq_palavra;
//----------------------------------------------------------
void minusculo(char *pal_minu){
    int i;
    for(i = 0;pal_minu[i];i++){
        pal_minu[i] = tolower(pal_minu[i]);
    }
}//-----------------------------------------------------------
int busca_palavra(Freq_palavra frase[], int tam, char *busc_pal){
    int i;
    for(i = 0;i < tam;i++){
        if(strcmp(frase[i].palavra,busc_pal) == 0)
            return i;
    }
    return -1;
}
//------------------------------------------------------------
void cont_pal_freq(char *palavra){
    Freq_palavra palavras[MAX_PALAVRA];
    int cont_palavra = 0;
    int indice = 0;
    char *token = strtok(palavra, " ,.!?");

    while(token != NULL){
        minusculo(token);
        indice = busca_palavra(palavras, cont_palavra, token);
        if(indice != -1){
            palavras[indice].cont++;
        }
        else{
            strcpy(palavras[cont_palavra].palavra, token);
            palavras[cont_palavra].cont = 1;
            cont_palavra++;
        }
        token = strtok(NULL, " ,.!?");

    }
    printf("\nPalavras distintas:\n");
    int i;
    for(i = 0;i < cont_palavra;i++){
        printf("%s: %d\n", palavras[i].palavra, palavras[i].cont);
    }
    printf("\nTotal de palavras distintas: %d\n", cont_palavra);
}
//------------------------------------------------------------------
int main()
{
    char frase[100];
    printf("Digite uma frase: ");
    scanf("%100[^\n]", frase);

    cont_pal_freq(frase);

    return 0;
}
