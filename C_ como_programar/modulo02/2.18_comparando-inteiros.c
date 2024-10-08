#include<stdio.h>
/*Escreva um programa que
peça ao usuário que digite dois inteiros, obtenha os números
e depois imprima o maior número seguido das
palavras ‘é maior’. Se os números forem iguais, imprima
a mensagem “Esses números são iguais”. Use
apenas a forma de seleção única da instrução if que
você aprendeu neste capítulo.*/
int main(){

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if( num1 > num2){
        printf("\n%d e maior!!\n\n", num1);
    }
    if( num2 > num1){
        printf("\n%d e maior!!\n\n", num2);
    }
    if( num1 == num2){
        printf("\nEsses numeros sao iguais!\n\n");
    }

    return 0;

}