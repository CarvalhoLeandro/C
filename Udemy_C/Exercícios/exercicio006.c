/*Escreva um programa que calcule o volume de uma lata de azeite de forma cilíndrica*/

#include<stdio.h>
#include<stdlib.h>


int main(){

    double raio, altura, volume;

    printf("\nDigite o raio da lata: ");
    scanf("%lf", &raio);
    printf("Digite a altura da lata: ");
    scanf("%lf", &altura);

    volume = 3.14159 * raio * raio * altura;

    printf("\n\nO volume da lata e de %0.2lf", volume);
    
    return 0;
}