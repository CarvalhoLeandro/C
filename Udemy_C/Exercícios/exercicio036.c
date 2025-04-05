#include<stdio.h>
#include<stdlib.h>

/*
Faça um programa que leia o código do gênero de uma pessoa

    0 - Masculino
    1 - Feminino

Identificar se o código digitado é válido ou não
*/

int main(){

    int num;

    printf("\n\n====================== GENERO =========================\n\n0 - Masculino\n1 - Feminino\n\n"
    "======================================================\nDigite o codigo do seu genero: ");
    scanf("%d", &num);

    if(num == 0 || num == 1)
        printf("\n\nCodigo Valido\n\n");
    else
        printf("\n\nCodigo Invalido\n\n");

    
    system("pause");
    return 0;

}