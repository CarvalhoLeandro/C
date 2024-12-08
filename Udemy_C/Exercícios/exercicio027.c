#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia numeros inteiros ate que seja digitado um numero negativo.
No final apresentar a quantidade de números que foram digitados
    
*/

int main(){

    int num, cont = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &num);
    while (num >= 0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        cont++;
    }

    printf("\n\nTotal de numeros digitados: %d\n\n", cont);
        

    system("pause");
    return 0;
    
}

    
