#include<stdio.h>

/* Exerc�cio 05 - O troco em moedas � uma combina��o de moedas com os seguintes valores :
R$ 1,00 ; 0,50; 0,25; 0,10; 0,05; 0,01
Escreva um programa em C que leia qualquer valor em centavos (R$0,01 at� R$1,00). Calcule e imprima
seu equivalente em moedas. Encontre a solu��o que utilize o menor n�mero poss�vel de moedas*/

int main(){
    float moedas;
	int cem=0;
	int cinquenta=0;
	int vinteCinco=0;
	int dez=0;
	int cinco=0;
	int um=0;

	printf("Digite um valor: ");
	scanf("%f", &moedas);

	while(moedas > 0){

		if(moedas >= 1.00){
			cem++;
			moedas -= 1.00;
		}else if (moedas >= 0.50){
			cinquenta++;
			moedas -= 0.50;
		}else if(moedas >= 0.25){
			vinteCinco++;
			moedas -= 0.25;
		}else if(moedas >= 0.10){
			dez++;
			moedas -= 0.10;
		}else if(moedas >= 0.05){
			cinco++;
			moedas -= 0.05;
		}else{
			um++;
			moedas -= 0.01;
		}

	}
	printf("\n%d moeda(s) de R%% 1,00.\n",cem);
	printf("%d moeda(s) de R%% 0,50.\n",cinquenta);
	printf("%d moeda(s) de R%% 0,25.\n",vinteCinco);
	printf("%d moeda(s) de R%% 0,10.\n",dez);
	printf("%d moeda(s) de R%% 0,05.\n",cinco);
	printf("%d moeda(s) de R%% 0,01.\n",um);
}
