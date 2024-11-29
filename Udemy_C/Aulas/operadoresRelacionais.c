#include<stdio.h>
#include<stdlib.h>

int main(){

    int valorA, valorB;

    printf("Digite  valorA: ");
    scanf("%d", &valorA);
    printf("Digite  valorB: ");
    scanf("%d", &valorB);

    printf("\n\nValorA > ValorB resulta em: %d\n", valorA > valorB);
    printf("ValorA >= ValorB resulta em: %d\n", valorA >= valorB);
    printf("ValorA < ValorB resulta em: %d\n", valorA < valorB);
    printf("ValorA <= ValorB resulta em: %d\n", valorA <= valorB);
    printf("ValorA == ValorB resulta em: %d\n", valorA == valorB);
    printf("ValorA != ValorB resulta em: %d\n\n", valorA != valorB);

    system("pause");
    return 0;
    
}