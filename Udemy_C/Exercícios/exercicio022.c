#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que escreva na tela os numeros até o numero digitado*/

int main(){

    int number;

    printf("Digite ate que numero contar: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
    {
        printf("%d", i);
        if(i < number)
            printf(" - ");
    }
    printf("\n\n");

    system("pause");
    return 0;
}







