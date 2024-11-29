#include<stdio.h>
#include<stdlib.h>

int main(){

    int valorA, valorB;

    printf("Digite um numero: ");
    scanf("%d", &valorA);
    printf("Digite outro numero: ");
    scanf("%d", &valorB);

    if(valorA > valorB)
        printf("\n\n%d eh maior que %d\n\n",valorA, valorB);
    else
        printf("\n\n%d eh menor que %d\n\n",valorA, valorB);
       
    system("pause");
    return 0;
    
}