#include<stdio.h>
#include<stdlib.h>

int main(){

    float valorA, valorB, divisao;

    printf("Digite um numero: ");
    scanf("%f", &valorA);
    printf("Digite outro numero: ");
    scanf("%f", &valorB);

    if(valorA > valorB)
        divisao = valorA / valorB;
    else
        divisao = valorB / valorA;

    printf("\n\nO maior valor dividido pelo menor = %.1f\n\n", divisao);
       
    system("pause");
    return 0;
    
}