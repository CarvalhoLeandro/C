/*Passsando um ponteiro cmo parâmetro para uma função*/

#include <stdio.h>

void soma(int, int, int *);

int main(){

    int a, b, resultado;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    // &a -> o endereço de a recebe o valor digitado
    // &b -> O endereço de b recebe o valor digitado

    printf("O endereco de resultado: %p\n\n", &resultado);

    // Passei o endereço de resultado, a função vai modificar direto no endereço da variável
    soma(a, b, &resultado);

    printf("Soma = %d", resultado);



    return 0;
}
    
void soma(int x, int y, int *result){
    printf("O endereco de resultado = %p\n\n", result);

    //*result -> no endereço de result coloque x + y
    *result = x + y;
}