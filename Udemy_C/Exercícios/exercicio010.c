#include<stdio.h>
#include<stdlib.h>

int main(){

    float despesa, receita, lucro;

    printf("\nDigite a receita da empresa R$: ");
    scanf("%f", &receita);
    printf("\nDigite a despesa da empresa R$: ");
    scanf("%f", &despesa);

    lucro = receita - despesa;

    printf("\nO saldo de lucro da empresa foi de R$: %.2f\n\n", lucro);

    system("pause");
    return 0;
    
}