#include<stdio.h>
#include<stdlib.h>

/*
    Escreva um programa que leia os valores dos lados de umtriângulo. Verificar se os lados fornecidos realmente formam um triângulo ,  e se for esta condição verdadeira, deverá ser indicado qual tipo de triângulo foi formado: issósceles, escaleno ou equilátero. 
*/

int main(){

    int ladoA,ladoB,ladoC;

    printf("\n\nDigite o tamanho dos 3 lados do triangulo: ");
    scanf("%d%d%d", &ladoA, &ladoB, &ladoC);

    if(ladoA == ladoB && ladoA == ladoC && ladoB == ladoC)
        printf("\n\nTriangulo Equilatero!\n\n");
    else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        printf("\n\nTriangulo Isosceles!\n\n");
    else
        printf("\n\nTriangulo Escaleno!\n\n");
    
    system("pause");
    return 0;

}