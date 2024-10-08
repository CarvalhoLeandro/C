#include<stdio.h>

/*Calculadora de comissão de vendas. Uma grande
companhia química paga seus vendedores por comissão.
Os vendedores recebem R$ 200,00 por semana, mais 9
por cento de suas vendas brutas nessa semana. Por exemplo,
um vendedor que comercialize R$ 5.000,00 em produtos
químicos em uma semana receberá R$ 200,00 e
mais 9 por cento de R$ 5.000,00, ou seja, receberá um
total de R$ 650,00. Desenvolva um programa que peça os
valores brutos de cada vendedor na semana que passou,
calcule e apresente o valor que esse vendedor deverá receber.
Processe os valores referentes a um vendedor por vez.
Veja um exemplo do diálogo de entrada/saída:*/

int main(){

    double venda, total, pagamento, comissao;

    printf("Informe o valor da venda (-1 para sair) R$: ");
    scanf("%lf", &venda);

    while (venda != -1.0)
    {
        pagamento = 200.00;
        comissao = venda * 0.09;
        total = comissao + pagamento;

        printf("\n\nPagamento semanal R$: %.2lf\n", pagamento);
        printf("Comissao R$: %.2lf\n", comissao);
        printf("Total R$: %.2lf\n\n", total);

        printf("\nInforme o valor da venda (-1 para sair) R$: ");
        scanf("%lf", &venda);
    }
    return 0;
}