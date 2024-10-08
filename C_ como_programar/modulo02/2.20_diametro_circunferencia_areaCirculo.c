#include<stdio.h>

/*Escreva um programa que leia o raio de um círculo e
informe o diâmetro, a circunferência e a área do círculo.
Utilize o valor constante 3,14159 para p. Realize cada
um desses cálculos dentro das instruções printf e use o
especificador de conversão %f.*/

int main(){

    double raio, pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    printf("\n\nDiametro do circulo = %.2lf\n", raio * 2);
    printf("Circunferencia do circulo = %.2lf\n", 2* pi * raio);
    printf("Area do circulo = %.2lf\n\n", pi * (raio * raio));

    return 0;
    
}