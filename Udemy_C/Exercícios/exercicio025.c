#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia do teclado 20 valores inteiros e escreva no final:
    -> A soma dos valores positivos
    -> A soma dos valores negativos
    -> A quantidade de zeros no final
*/

int main(){

    int number, somaPos = 0, somaNeg = 0, zero =0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &number);

        if(number > 0)
            somaPos += number;
        else if(number < 0)
            somaNeg += number;
        else
            zero++;
        
    }

    printf("\n\nSoma total pares: %d\n\n", somaPos);
    printf("Soma total impares: %d\n\n", somaNeg);
    printf("Total zero: %d\n\n", zero);

    system("pause");
    return 0;
}