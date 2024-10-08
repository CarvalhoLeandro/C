#include<stdio.h>
/*Escreva um programa que peça ao usuário
que digite dois números, obtenha esses números e
imprima a soma, o produto, a diferença, o quociente e o
módulo (resto da divisão).*/
int main(){

    int num1, num2, soma, diferenca, produto, quociente, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("\n\nSoma = %d\n", soma);

    diferenca = num1 - num2;
    printf("Diferenca = %d\n", diferenca);

    produto = num1 * num2;
    printf("Produto = %d\n", produto);

    if(num2 != 0){
        quociente = num1 / num2;
        printf("Divisao = %d\n", quociente);
    }
    else
        printf("Impossivel divisao por zero!\n\n");

    resto = num1 % num2;
    printf("Resto da divisao inteira = %d", resto);

    return 0;
}