#include<stdio.h>

/* Exercício 03 - Um inteiro perfeito n é igual a soma de todos os seus
divisores próprios. A faixa de seus divisores próprios vai de 1 a (n-1).
Por  exemplo : 6 é um inteiro perfeito; a soma de todos os seus divisores
próprios ( 1 + 2 + 3) é igual a 6. Escreva um programa em C que determine se
um número no intervalo de 1 a 32767 é um inteiro perfeito. */

int main()
{
    int i;
    for(i = 1 ;i <= 32767;i++){
        int soma = 0, divisor;
        for(divisor = 1; divisor < i; divisor++){
            if(i % divisor == 0)
                soma += divisor;

        }
        if(soma == i)
            printf("\n\t%d e um numero perfeito!! ", i);
    }
    printf("\n");
}
