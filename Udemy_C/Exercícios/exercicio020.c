#include<stdio.h>
#include<stdlib.h>

int main(){

    float salarioHora, salarioBruto, salarioFamilia, taxaFilho, salarioLiquido;
    int qtdFilhosMenor14, horasTrabalhadas;

    printf("\n\nDigite o valor do salario/hora R$: ");
    scanf("%f", &salarioHora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Digite a quantidade de filhos menor de 14 anos: ");
    scanf("%d", &qtdFilhosMenor14);

    salarioBruto = salarioHora * horasTrabalhadas;

    if(salarioBruto <= 700)
        taxaFilho = 8.5;
    else if(salarioBruto <= 1000)
        taxaFilho = 6.50;
    else
        taxaFilho = 2.5;
    
    salarioFamilia = taxaFilho * qtdFilhosMenor14;
    salarioLiquido = salarioBruto + salarioFamilia;

    printf("\n\nValor salario bruto R$: %.2f\n", salarioBruto);
    printf("Valor salario familia R$: %.2f\n", salarioFamilia);
    printf("Valor do salario liquido R$: %.2f\n\n", salarioLiquido);
       
    system("pause");
    return 0;
    
}