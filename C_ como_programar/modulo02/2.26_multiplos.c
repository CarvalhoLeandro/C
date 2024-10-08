#include<stdio.h>

/*Escreva um programa que leia dois inteiros,
determine e imprima se o primeiro for um múltiplo do
segundo. [Dica: use o operador módulo.]*/

int main(){

    int num1, num2;

    printf("\n\nDigite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    if(num1 % num2 == 0){
        printf("\n %d e multiplo de %d!\n\n", num1,num2);
    }
    if(num1 % num2 != 0){
        printf("\n %d nao e multiplo de %d!\n\n", num1, num2);
    }


    return 0;
}