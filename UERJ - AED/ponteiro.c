/*Criar um ponteiro*/

#include <stdio.h>

int main(){

    int *ptoValor;// Variável tipo ponteiro que armazena endereço de memória

    int valor = 54;// Variável tipo inteiro

    ptoValor = &valor;

    printf("\nEndereco da variavel valor: %p\n", ptoValor);
    /*%d imprime o enreço em decimal - %p imprime o endereço em hexadecimal*/
    printf("Coneudo da variavel valor: %d\n\n", valor);

    valor = 104;

    printf("\nEndereco da variavel valor: %p\n", ptoValor);
    printf("Coneudo da variavel valor: %d\n\n", valor);



    return 0;
}