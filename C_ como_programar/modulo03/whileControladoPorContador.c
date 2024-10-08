#include<stdio.h>

/* Estrutura de repetição while - Programa de média de turma controlada por contador*/
/* O pragrama vai receber 10 notas de alunos diferentes e calcular a média entre os dez*/
int main(){

    int cont = 0;//Contador 
    double soma = 0;//Soma das notas 
    double nota; //Acumula o somatório de notas
    double media; // Recebe o cálculo de média
 
    while (cont < 10)
    {
        printf("Digite a nota: ");
        scanf("%lf", &nota);
        soma += nota;
        cont += 1;
    }
 
    media = soma / cont;

    printf("\n\nMedia da turma: %.2lf\n\n", media);
    
    return 0;
}