#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia do teclado 10 valores inteiros e escreva no final a soma dos valores que foram lidos*/

int main(){

    int number, soma;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &number);

        soma += number;
    }

    printf("\n\nSoma total: %d\n\n", soma);
    

    system("pause");
    return 0;
}