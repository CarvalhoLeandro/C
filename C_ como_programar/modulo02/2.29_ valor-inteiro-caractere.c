#include<stdio.h>

/*Executando a instrução printf( “%d”, ‘A’ );
Escreva um programa em C que imprima os equivalentes
inteiros de algumas letras maiúsculas, letras minúsculas,
dígitos e símbolos especiais. No mínimo, determine os
equivalentes inteiros de A B C a b c 0 1 2 $ * +
/ e o caractere de espaço em branco.*/

int main(){

    printf("\n\nA = %d  a = %d\n", 'A', 'a');
    printf("B = %d  b = %d\n", 'B', 'b');
    printf("C = %d  c = %d\n", 'C', 'c');
    printf("0 = %d  1 = %d  2 = %d\n", '0', '1', '2');
    printf("$ = %d  * = %d  + = %d\n", '$', '*', '+');
    printf("Espaco = %d\n", ' ');

    printf("\n\n");

    return 0;
}