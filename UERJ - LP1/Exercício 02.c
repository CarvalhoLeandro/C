#include<stdio.h>

/* Exerc�cio 02 - Escreva um programa em C que verifique se um determinado inteiro positivo
que � lido via teclado, � ou n�o primo.*/

int main(){


	int num;
	int aux=0;
	int i;

	printf("Digite um numero para verificar se e primo: ");
	scanf("%d", &num);


	for(i = 2; i < num; i++){
		if(num % i == 0){
			aux++;
		}
	}

	if(aux > 0){
		printf("\n%10d nao e primo", num);
	}
	else{
		printf("\n%10d e primo.\n", num);
	}

}
