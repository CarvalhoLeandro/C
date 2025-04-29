/*Elaborar um programa que efetue a apresentação do valor da conversão em real de
um valor lido em dólar. O programa deve solicitar o valor da cotação do dólar e a
quantidade de dólares disponível com o usuário, para que seja apresentado o valor
correspondente na moeda brasileira.*/

#include <stdio.h>


void convercao(float, float, float *);

int main(){

    float dolar, cotacao, real;

    printf("Digite o valor em dolar: ");
    scanf("%f", &dolar);// O endereço de dolar recebe o valor digitado

    printf("Digite a cotacao do dia: ");
    scanf("%f", &cotacao);// O endereço de cotacao recebe o valor digitado

    convercao(dolar, cotacao, &real);/* Estou passando como parâmetro o valor da variavel 'dolar'
    e da variável 'cotacao' - A variável 'real' está sendo passado por endereço de variável*/

    printf("\n\nVoce converteu $ %.2f dolar(es) em R$ %.2f.\n\n", dolar, real );

}

void convercao(float qtd, float cotacao, float *real){

    *real = qtd * cotacao;
}



