#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que apresente no final a soma dos numeros de 1 até 100
    
*/

int main(){

    int soma = 0;

    for (int i = 0; i <= 100; i++)
    {
        soma += i;
        
    }

    printf("\n\nSoma total de 1 ate 100: %d\n\n", soma);
    

    system("pause");
    return 0;
}