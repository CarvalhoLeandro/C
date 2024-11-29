#include<stdio.h>
#include<stdlib.h>

int main(){

    float salario, taxaReajuste, salarioReajustado;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    

    if(salario <= 1000)
        taxaReajuste  = 15;
    else if (salario <= 2000)
        taxaReajuste = 10;
    else
        taxaReajuste = 5;

    salarioReajustado = salario + (salario * (taxaReajuste / 100));

    printf("\n\nSalario velho R$:  %.2f\n", salario);
    printf("Taxa de reajuste:  %.2f %%\n", taxaReajuste);
    printf("Salario novo R$:  %.2f\n\
    n", salarioReajustado);   
    system("pause");
    return 0;
    
}