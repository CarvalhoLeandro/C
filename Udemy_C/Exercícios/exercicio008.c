#include<stdio.h>
#include<stdlib.h>

int main(){

    int kmInicial, kmFinal, distanciaPercorrida;

    printf("\nDigite o KM inicial: ");
    scanf("%d", &kmInicial);
    printf("\nDigite o KM final: ");
    scanf("%d", &kmFinal);

    distanciaPercorrida = kmFinal - kmInicial;

    printf("\nA distancia percorrida foi de %d km.\n\n", distanciaPercorrida);
    
    system("pause");
    return 0;
    
}