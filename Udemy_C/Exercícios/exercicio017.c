#include<stdio.h>
#include<stdlib.h>

int main(){

    float receita, despesa, lucro;

    printf("Digite a receita: ");
    scanf("%f", &receita);
    printf("Digite a despesa: ");
    scanf("%f", &despesa);

    lucro = receita - despesa;

    if(lucro > 0)
        printf("\n\nA empresa teve um lucro de R$: %.2f\n\n", lucro);
    else
        printf("\n\nA empresa teve um prejuizo de R$: %.2f\n\n", lucro);

    
       
    system("pause");
    return 0;
    
}