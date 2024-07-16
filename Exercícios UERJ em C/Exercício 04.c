#include <stdio.h>

/* Exercício 04 - Escreva um programa em C que calcule o fatorial de um número inteiro positivo.
1! e 0! = 0 */

int fatorial();


int main()
{
    int n;

	printf("\nDigite um valor maior que zero: ");
	scanf("%d", &n);
    printf("\n\nFatorial de %d: %d\n", n, fatorial(n));

    return 0;
}

int fatorial(int n){
    if(n == 1 || n == 0)
        return 1;
    else{
        return n * fatorial(n-1);
    }
}
