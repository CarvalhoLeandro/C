#include<stdio.h>

/*Crie uma aplicação para a calculadora de IMC que leia o
peso do usuário em quilogramas e a altura em metros, e
que depois calcule e apresente o seu índice de massa corporal.
Além disso, a aplicação deverá exibir as seguintes
informações do Ministério da Saúde para que o usuário
possa avaliar seu IMC:*/

int main(){

    double peso, altura, imc;

    printf("\n\n------------------------ CALCULADORA IMC -------------------------\n\n");

    printf("-------------------------------------\n");
    printf(" - Subpeso -> 18,5\n - Normal -> entre 18,5 e 24,9\n - Sobrepeso -> entre 25 e 29,9\n"
    " - Obeso -> acima de 30\n");
    printf("-------------------------------------\n\n");

    printf("Digite sua altura: ");
    scanf("%lf", &altura);
    printf("Digite seu peso: ");
    scanf("%lf", &peso);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("IMC: %.2lf -> Subpeso\n\n", imc);
    }

    if(imc >= 18.5 && imc < 25){
        printf("IMC: %.2lf -> Normal\n\n", imc);
    }

    if(imc >= 25 && imc < 30){
        printf("IMC: %.2lf -> Sobrepeso\n\n", imc);
    }

    if(imc >= 30){
        printf("IMC: %.2lf -> Obeso\n\n", imc);
    }

    return 0;
}