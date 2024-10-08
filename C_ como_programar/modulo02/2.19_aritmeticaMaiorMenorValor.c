#include<stdio.h>
/*Escreva um programa
que leia três inteiros diferentes do teclado, depois
apresente a soma, a média, o produto, o menor e o maior
desses números. Use apenas a forma de seleção única da
instrução if que você aprendeu neste capítulo.*/
int main(){

    int num1, num2, num3, soma, produto, menor, maior;
    double media;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Digite outro numero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    printf("\n\nSoma = %d\n", soma);

    media = (num1 + num2 + num3) / 3.0;
    printf("Media = %.2lf\n", media);

    produto = num1 * num2 * num3;
    printf("Produto = %d\n", produto);

    menor = num1;
    if( num2 < menor ){
        menor = num2;
    }
    if( num3 < menor ){
        menor = num3;
    }
    printf("O menor e: %d\n", menor);

    maior = num1;
    if( num2 > maior ){
        maior = num2;
    }
    if( num3 > maior ){
        maior = num3;
    }
    printf("O maior e: %d", maior);

    return 0;
}