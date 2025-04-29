/*Elaborar um  programa que efetue a apresentação do valor da conversão em real de 
um  valor  lido  em  dólar.  O  programa  deve  solicitar  o  valor  da  cotação  do  dólar  e   
quantidade  de  dólares  disponível  com  o  usuário,  para  que  seja  apresentado  o  valor 
correspondente na moeda brasileira.*/ 

#include <stdio.h>
#include <stdlib.h>

float conversor(float valorDolar, float cotacaoDolar) {
    return valorDolar * cotacaoDolar;
}


int main() {
    float valorDolar, cotacaoDolar, valorReal;

    printf("Digite o valor em dolares: ");
    scanf("%f", &valorDolar);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    valorReal = conversor(valorDolar, cotacaoDolar);

    printf("O valor em reais e: %.2f\n", valorReal);

    return 0;
}
// O programa solicita ao usuário o valor em dólares e a cotação do dólar,












