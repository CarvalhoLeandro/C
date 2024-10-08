#include<stdio.h>

/*Escreva um programa que leia um inteiro,
determine e imprima se ele é par ou ímpar. [Dica:
use o operador módulo. Um número par é um múltiplo
de dois. Qualquer múltiplo de dois gera resto zero
quando dividido por 2.]*/

int main(){

    int num;

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\n\n %d e PAR!!\n\n", num);
    }
    if(num % 2 != 0){
        printf("\n\n %d e IMPAR!!\n\n", num);
    }

    return 0;
}
