#include<stdio.h>
#include<stdlib.h>

int main(){

    int anoNascimeto, idade, qtdDias, qtdHoras, qtdMinutos, qtdSegundos;

    printf("\nDigite ano de nascimento ");
    scanf("%d", &anoNascimeto);

    idade = 2024 - anoNascimeto;
    qtdDias = idade * 365;
    qtdHoras = qtdDias * 24;
    qtdMinutos = qtdHoras * 60;
    qtdSegundos = qtdMinutos * 60;

    printf("\nIdade em anos: %d\nIdade em dias: %d\nIdade em horas: %d\nIdade em minutos: %d\nIdade em segundos: %d\n\n",idade, qtdDias, qtdHoras, qtdMinutos, qtdSegundos);

    system("pause");
    return 0;
    
}