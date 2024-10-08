#include<stdio.h>
/*Escreva um programa
que leia cinco inteiros e depois determine e imprima o
maior e o menor inteiro no grupo. Use apenas as técnicas
de programação que você aprendeu neste capítulo.*/

int main(){

    int a, b, c, d, e, maior, menor;

    printf("\n\nDigite cinco numeros inteiros: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    maior = a;
    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    if(maior < d){
        maior = d;
    }
    if(maior < e){
        maior = e;
    }

    menor = a;
    if(menor > b){
        menor = b;
    }
    if(menor > c){
        menor = c;
    }
    if(menor > d){
        menor = d;
    }
    if(menor > e){
        menor = e;
    }


    printf("\n\nMaior = %d\n", maior);
    printf("Menor = %d\n\n", menor);

    return 0;
}
