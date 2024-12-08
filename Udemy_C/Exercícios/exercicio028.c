#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia numeros inteiros ate que seja digitado um numero zero.
No final apresentar:

    -> O somatorio dos numeros positivos
    -> O somatorio dos numeros negativos
    
*/

int main(){

    int num, somaPos = 0, somaNeg = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &num);
    while (num != 0)
    {
        if(num > 0)
            somaPos += num;
        else if(num < 0)
            somaNeg += num;
        
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        
    }

    printf("\n\nTotal da soma positivos: %d\n\n", somaPos);
    printf("Total da soma negativos: %d\n\n", somaNeg);    

    system("pause");
    return 0;
    
}