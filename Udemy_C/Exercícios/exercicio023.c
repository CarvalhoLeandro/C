#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que escreva na tela os numeros em ordem decrescente do numero digitado*/

int main(){

    int number;

    printf("Digite um numero para contar em ordem decrescente: ");
    scanf("%d", &number);

    for (int i = number; i >= 0; i--)
    {
        printf("%d", i);
        if(i > 0)
            printf(" - ");
    }
    printf("\n\n");

    system("pause");
    return 0;
}