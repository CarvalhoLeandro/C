#include<stdio.h>
#include<stdlib.h>

int main(){

    int valorA;

    printf("Digite um numero: ");
    scanf("%d", &valorA);

    if(valorA != 1000)
        printf("\n\n%d eh diferente de 1000\n\n",valorA);
    else
        printf("\n\n%d eh igual a 1000\n\n",valorA);
       
    system("pause");
    return 0;
    
}