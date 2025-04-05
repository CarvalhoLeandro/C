#include<stdio.h>
#include<stdlib.h>

/*
Faça um programa que leia um numero inteiro qualquer e einforme se este numero esta na faixa de o até 100
*/

int main(){

    int num;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 100)
        printf("\n\nO numero %d esta entre 0 e 100\n\n", num);
    else
        printf("\n\nO numero %d nao esta entre 0 a 100!!\n\n", num);

    system("pause");
    return 0;

}