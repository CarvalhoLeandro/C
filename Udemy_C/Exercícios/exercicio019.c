/*Calculo de desconto INSS 2024*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float salarioBruto, taxaINSS, parcelaDeduzir, valorDesconto, salarioLiquido, salarioAcimaTeto, teto = 7786;

    printf("Digite o salario: ");
    scanf("%f", &salarioBruto);
    
    if(salarioBruto <= 1412){
        taxaINSS = 7.5;
        parcelaDeduzir = 0;
        salarioAcimaTeto = 0;
    }
    else if(salarioBruto <= 2666){
        taxaINSS = 9;
        parcelaDeduzir = 21.18;
        salarioAcimaTeto = 0;
    }
    else if(salarioBruto <= 4000){
        taxaINSS = 12;
        parcelaDeduzir = 101.18;
        salarioAcimaTeto = 0;
    }
    else if(salarioBruto <= 7786){
        taxaINSS = 14;
        parcelaDeduzir = 181.18;
        salarioAcimaTeto = 0;
    }

    else{
        salarioAcimaTeto = salarioBruto - teto;
        salarioBruto = teto;
        taxaINSS = 14;
        parcelaDeduzir = 181.18;
    }

    valorDesconto = (salarioBruto * (taxaINSS / 100)) - parcelaDeduzir;
    salarioLiquido = salarioBruto - valorDesconto + salarioAcimaTeto;



    printf("\n\nValor do salario bruto R$: %.2f\n", salarioBruto + salarioAcimaTeto);
    printf("Taxa de desconto: %.2f %%\n", taxaINSS);
    printf("Valor de desconto do inss R$: %.2f\n", valorDesconto);
    printf("Valor do salario liquido R$: %.2f\n\n", salarioLiquido);

    system("pause");
    return 0;
    
}