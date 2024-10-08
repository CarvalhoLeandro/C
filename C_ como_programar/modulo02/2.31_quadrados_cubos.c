#include<stdio.h>

/*Usando apenas as técnicas
que você aprendeu neste capítulo, escreva um programa
que calcule os quadrados e os cubos dos números 0 a 10, e
use tabulações para imprimir a seguinte tabela de valores:*/

int main(){

    printf("\n\nNumero      Quadrado        Cubo\n");
    printf("%d           %d               %d\n", 0, 0*0, 0*0*0);
    printf("%d           %d               %d\n", 1, 1*1, 1*1*1);
    printf("%d           %d               %d\n", 2, 2*2, 2*2*2);
    printf("%d           %d               %d\n", 3, 3*3, 3*3*3);
    printf("%d           %d              %d\n", 4, 4*4, 4*4*4);
    printf("%d           %d              %d\n", 5, 5*5, 5*5*5);
    printf("%d           %d              %d\n", 6, 6*6, 6*6*6);
    printf("%d           %d              %d\n", 7, 7*7, 7*7*7);
    printf("%d           %d              %d\n", 8, 8*8, 8*8*8);
    printf("%d           %d              %d\n", 9, 9*9, 9*9*9);
    printf("%d          %d             %d\n", 10, 10*10, 10*10*10);
    return 0;

}